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
     * @brief Khai báo GIF cat
     *
     * GIF này có kích thước 240x240 pixel, format XRGB8888
     */
    LV_IMAGE_DECLARE(cat);

#ifdef __cplusplus
}
#endif
