# Test GIF Component

Bộ sưu tập GIF tùy chỉnh cho board MDC-AI-V1.

## Mô tả

Component này chứa các GIF đã được convert sang định dạng LVGL C array. Component được thiết kế để:

- Dễ dàng thêm GIF mới mà không cần sửa CMakeLists.txt
- Tách biệt assets ra khỏi code chính
- Có thể chia sẻ và tái sử dụng qua Git
- Tự động compile tất cả file .c trong thư mục src/

## Cài đặt

### Từ repository local

Thêm vào file `main/idf_component.yml`:

```yaml
dependencies:
  test-gif-component:
    path: ../components/test-gif-component
```

### Từ Git (sau khi publish)

```yaml
dependencies:
  test-gif-component:
    git: https://github.com/YOUR_USERNAME/test-gif-component.git
    version: "1.0.0"
```

## Sử dụng

```cpp
#include "test_emoji_gif.h"

// Trong code của bạn
collection_.AddEmoji("test", "test", LvglRawImage{&test});
```

## Thêm GIF mới

1. **Convert GIF sang LVGL C array:**

   - Sử dụng LVGL Image Converter Online: https://lvgl.io/tools/imageconverter
   - Chọn Color format: `CF_TRUE_COLOR_ALPHA` (ARGB8888)
   - Output format: `C array`

2. **Thêm file vào component:**

   ```bash
   # Copy file .c vào thư mục src/
   cp your_animation.c components/test-gif-component/src/
   ```

3. **Khai báo trong header:**
   Mở `include/test_emoji_gif.h` và thêm:

   ```c
   LV_IMAGE_DECLARE(your_animation);
   ```

4. **Build lại project:**
   ```bash
   idf.py build
   ```
   Component sẽ tự động phát hiện và compile file mới.

## Cấu trúc thư mục

```
test-gif-component/
├── CMakeLists.txt          # Build configuration
├── idf_component.yml       # Component metadata
├── README.md               # File này
├── LICENSE                 # MIT License
├── include/
│   └── test_emoji_gif.h   # Header declarations
└── src/
    └── test.c             # GIF data files
```

## Yêu cầu

- ESP-IDF v5.0+
- LVGL v9.0+

## License

MIT License - Xem file LICENSE để biết chi tiết

## Tác giả

Tạo bởi GitHub Copilot
