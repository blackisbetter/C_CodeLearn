# C_CodeLearn

用于学习C语言的练习代码仓库。

## 目录结构

| 目录 | 内容 |
|------|------|
| `C_study_*` | C语言学习练习（指针、结构体、数组等） |
| `C_test_*` | C语言测试/作业 |
| `C_study_game1` | 井字棋游戏 |
| `C_study_game2_saolei` | 扫雷游戏 |

## ⚠️ 安全注意事项

本仓库中的代码仅供学习使用，**不适合用于生产环境**。以下是需要注意的安全问题：

### 在实际项目中应避免的做法

1. **不要硬编码密码或密钥** — 使用环境变量或安全的密钥管理服务
2. **不要使用无边界的 `scanf("%s")`** — 始终指定宽度限制，如 `scanf("%19s", buf)` 防止缓冲区溢出
3. **不要使用 `strcpy` 而不检查目标缓冲区大小** — 使用 `strncpy` 或 `snprintf`
4. **不要禁用编译器安全警告** (`_CRT_SECURE_NO_WARNINGS`) — 这些警告存在是为了帮助你发现潜在的安全漏洞
5. **不要使用 `rand()`/`srand()` 做安全相关用途** — 对于加密或安全场景应使用平台提供的安全随机数生成器

### 推荐的安全编程实践

```c
// 好的做法：限制输入长度
char buf[20];
scanf("%19s", buf);  // 最多读取19个字符 + '\0'

// 好的做法：使用 snprintf 而非 sprintf
char dest[50];
snprintf(dest, sizeof(dest), "Hello %s", name);

// 好的做法：检查指针有效性
assert(ptr != NULL);
```

## 编译

这些文件是在 Windows Visual Studio 环境下编写的。如需在 Linux/macOS 下编译：

```bash
gcc -Wall -Wextra -o program filename.c
```

建议始终开启 `-Wall -Wextra` 编译选项以获取安全相关的警告信息。
