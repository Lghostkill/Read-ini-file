
创建你的第一个 repository
---

- 创建一个 `repo`
  - 打开并登录 [GitHub](https://github.com/) 官网
  - 点击右方 绿色按钮：`+ New Repository`
    - **Repository name**：仓库的名称
    - **Description**：你对描述的描述
    - **Public \ Private**：设定仓库是否公开，公有仓库是免费的
    - **Initialize this repository with a README**：创建一个 `Readme.md` 文件，作为仓库详细介绍，它将在首页显示
    - **Add .gitignore**：创建一个默认的 **gitignore**，用于过滤掉某些文件。参考：[官方介绍](http://git-scm.com/docs/gitignore/)，或者这个简要的 [中文介绍](http://segmentfault.com/a/1190000000522997)。（比如 VS 会在读取、编译代码时产生很多临时文件，那些文件是不必要上传的，使用 `.gitignore` 文件来过滤它们） 
    - **Licenses**：设定你的代码的许可，参考 [Software License](https://en.wikipedia.org/wiki/Software_license)，[按钮旁边的帮助](http://choosealicense.com/)，指定你的代码
  - **Create Repository**：确认你的创建
  - 对自己的空仓库使用 **Set up in Desktop** 来 Clone 项目到本地（需要客户端 [GitHub Desktop](https://desktop.github.com/)）
  - 或者，非空仓库使用 **Clone in Desktop** 来 Clone 项目到本地（需要客户端 [GitHub Desktop](https://desktop.github.com/)）
  - 或者使用 [Git](http://git-scm.com/download/) 工具管理（有一定门槛）
- 或者，使用客户端 [GitHub Desktop](https://desktop.github.com/) 创建一个 `repo`
  - 打开客户端
  - 点击左上角的**+**
  - 输入 名称 **Name**，本地的存储路径 **Local Path**，默认的 **gitignore** 文件（介绍参见上面）
  - 使用 `Publish` 将仓库上传到 **Github**
- 或者，使用 [Git](http://git-scm.com/download/) 工具完成前面的全部操作（有一定门槛）
- 附录：添加管理者
   - 打开你的仓库的主页
   - 点击 右边的 **Settings**
   - 点击 **Collaborators** 选项卡
   - 输入小伙伴 ID，选中之后，点击 **Add collaborator** 的按钮


其它
---
**注**，在 Windows 下写代码推荐使用**文件编码** `UTF-8 with BOM`
