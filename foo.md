
#建议

##尽量使用 C++ 风格的代码，而不是 C 风格的

**主要原因**：C++ STL 库中有很多封装好的模块，能大量加快开发速度
**其它原因**：更加类型安全
**比如**：你们可以试着学习使用
 - `std::string`：储存和处理字符串
 - `std::map`：储存 `value` 数据
 - `std::fstream`：通过**流**的方式处理文件
 - `std::istringstream; std::ostringstream`：进行 字符串-数据 之间的转换

##在效率允许的情况下，尽可能重用代码

**e.g.** 你们的 `getter` 方法中，`getStringValue`, `getIntegerValue`, `getDoubleValue`，几乎是各自实现了一次，重用新非常低。按照我的解决方法，会通过 `getIntegerValue` 来调用 `getStringValue`，再将获取的字符串值转化为 `int` 类型。`getDoubleValue` 同理。`setter` 方法同理。

**原因**：
 - 像比之下效率并没有能感觉到的降低
 - 代码量极大降低
 - 方便维护代码，一旦发现 BUG，只需要改一处即可

##思考这样写是否必要

**e.g.** 这是类中 `IniFile` 的构造函数
```
IniFile::IniFile(const char * filename)
{
	_FileName = new(std::nothrow) char[strlen(filename)];
	if (_FileName == nullptr)
	{
		std::cerr << "Fail to allocate memory."<< std::endl;
		return;
	}
	std::copy(filename, filename + strlen(filename), _FileName);

	if (!loadIniFile())
	{
		delete[] _FileName;
		_FileName = nullptr;
		_FileContainer = nullptr;
		_FileSize = 0;
		std::cerr << "Fail to create the IniFile:" << filename << std::endl;
		return;
	}
}
```

###判断 `_FileName` 中 `new` 失败的异常处理是不必要的

若 `IniFile` 构造失败，代码中会打印错误消息并直接 `return`。但是显然构造这个对象的函数也无法正常运行，毕竟它得到的是一个没有完成构造的对象，那么它对这个对象的操作会引起错误。所以这里的判断 `new` 的异常处理并没有实际价值，并不能阻止程序崩溃。从另一个角度来说，一个对象在 `new` 的时候失败，没有必要让这个程序继续运行。或者，可以在外部使用 `try/catch` 手动防止程序崩溃（一般情况下，这是没有必要的）。

###推荐 使用 `std::string` 代替 `char *`

真的会很方便…… 也不需要使用 `std::copy` 这些处理。

##推荐 将 `ini` 文件使用某个数据结构存储

每次读取一个数据都对文件的字符串数组进行查找是效率较低的。可以尝试将字符串数组预处理一次，保存为便于查找、修改的数据结构。也许你们可以看看 `std::map`(红黑树) 或者 `std::unordered_map`（哈希表）。

##不要 过早优化 也不要 完全不考虑优化

过早的优化是万恶之源 —— Donald Knuth

所以，不要在意前面说的那些建议，先写出勉强实现功能的版本吧。
还有就是，也千万不要不思考就写，多想一想，能减少代码量。
对了，如果有兴趣的话~ 可以试试 `boost::property_tree` （<- 在初版写完之前不建议使用）

