/**
 * @file test_emoji_gif.h
 * @brief Test GIF Component - Bộ sưu tập GIF tùy chỉnh
 *
 * Component này chứa các GIF đã được convert sang định dạng LVGL
 * để sử dụng với board MDC-AI-V1.
 *
 * @version 1.0.0
 * @date 2024
 *
 * Cách sử dụng:
 * 1. Include header này trong code của bạn
 * 2. Sử dụng LV_IMAGE_DECLARE để khai báo GIF
 * 3. Hiển thị GIF với LVGL image widget
 */

#pragma once

#include <libs/gif/lv_gif.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /**
     * @brief Khai báo GIF test
     *
     * GIF này có kích thước 800x600 pixel, format ARGB8888
     *
     * Sử dụng:
     * ```cpp
     * #include "test_emoji_gif.h"
     *
     * // Trong code của bạn:
     * collection_.AddEmoji("test", "test", LvglRawImage{&test});
     * ```
     */
    LV_IMAGE_DECLARE(test);

    /**
     * @brief Thêm các GIF mới vào đây
     *
     * Để thêm GIF mới:
     * 1. Convert GIF thành .c file (sử dụng LVGL image converter)
     * 2. Đặt file .c vào thư mục src/
     * 3. Thêm LV_IMAGE_DECLARE ở đây
     * 4. Component sẽ tự động compile file mới
     *
     * Ví dụ:
     * LV_IMAGE_DECLARE(animation1);
     * LV_IMAGE_DECLARE(animation2);
     */

#ifdef __cplusplus
}
#endif
