# Hướng dẫn sử dụng test-gif-component

## ✅ Đã hoàn thành

Tôi đã tạo thành công component `test-gif-component` theo mô hình của `otto-emoji-gif-component`.

## 📁 Cấu trúc đã tạo

```
components/test-gif-component/
├── CMakeLists.txt           # Auto-detect .c files bằng GLOB
├── idf_component.yml        # Metadata và dependencies
├── LICENSE                  # MIT License
├── README.md                # Documentation đầy đủ
├── include/
│   └── test_emoji_gif.h    # Header với LV_IMAGE_DECLARE(test)
└── src/
    └── test.c              # GIF data (cần copy đầy đủ từ file gốc)
```

## ⚠️ Quan trọng: Hoàn thành file test.c

File `src/test.c` hiện chỉ có template. Bạn cần:

1. Mở file `main/boards/mdc-ai-v1/test.c` (file gốc)
2. Copy toàn bộ nội dung array `test_map[]` (từ dòng 25 đến 625)
3. Paste vào file `components/test-gif-component/src/test.c` thay thế dòng có comment

## 🔧 Cách sử dụng

### Bước 1: Build thử

```bash
idf.py build
```

Component đã được tự động link vào project thông qua thư mục `components/`.

### Bước 2: Kiểm tra kết quả

- ✅ Component tự động compile file `src/test.c`
- ✅ Header `test_emoji_gif.h` đã được include trong `eyes_display.cc`
- ✅ GIF `test` vẫn hiển thị bình thường với keywords "test" và "custom"

## 📦 Thêm GIF mới (trong tương lai)

### Cách 1: Thêm trực tiếp

```bash
# 1. Convert GIF mới thành .c file
# Sử dụng: https://lvgl.io/tools/imageconverter

# 2. Copy vào component
cp animation2.c components/test-gif-component/src/

# 3. Khai báo trong header
# Mở file: components/test-gif-component/include/test_emoji_gif.h
# Thêm: LV_IMAGE_DECLARE(animation2);

# 4. Build lại
idf.py build
```

### Cách 2: Thêm vào Git

Sau này nếu muốn publish component lên GitHub:

```bash
cd components/test-gif-component

# 1. Init Git
git init
git add .
git commit -m "Initial commit"

# 2. Tạo repo trên GitHub
# 3. Push code
git remote add origin https://github.com/YOUR_USERNAME/test-gif-component.git
git push -u origin main

# 4. Cập nhật idf_component.yml
# Sửa repository URL trong file idf_component.yml
```

## 🎯 Lợi ích của component này

1. **Không làm tăng kích thước firmware chính**: GIF data được compile thành library riêng
2. **Dễ thêm GIF mới**: Chỉ cần copy .c file vào src/, không cần sửa CMakeLists.txt
3. **Có thể chia sẻ**: Push lên Git và dùng qua idf_component.yml
4. **Tổ chức tốt hơn**: Assets tách biệt khỏi code logic

## 🔍 So sánh với cách cũ

| Tiêu chí            | Cách cũ (embed trực tiếp) | Cách mới (component)  |
| ------------------- | ------------------------- | --------------------- |
| Kích thước firmware | 5.4MB (overflow!)         | ~3.5MB (bình thường)  |
| Thêm GIF mới        | Sửa eyes_display.cc       | Copy .c vào src/      |
| Quản lý             | Khó, lẫn với board code   | Dễ, folder riêng biệt |
| Chia sẻ             | Không thể                 | Qua Git repository    |

## 📝 Ghi chú

- Component hiện đang ở chế độ local (trong thư mục `components/`)
- ESP-IDF tự động nhận component từ thư mục `components/`
- Không cần thêm vào `main/idf_component.yml` vì đã ở local
- Firmware size sẽ giảm đáng kể so với cách embed trực tiếp

## Tiếp theo

Sau khi copy đầy đủ data vào `src/test.c`, hãy:

```bash
# Build và kiểm tra
idf.py build

# Nếu build thành công, xóa file test.c cũ
rm main/boards/mdc-ai-v1/test.c

# Build lại để confirm
idf.py build
```
