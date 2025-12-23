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

    // /**
    //  * @brief Khai báo GIF Mochi_batngo
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_batngo);

    // /**
    //  * @brief Khai báo GIF Mochi_batngo2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_batngo2);

    // /**
    //  * @brief Khai báo GIF Mochi_boiroi
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_boiroi);

    // /**
    //  * @brief Khai báo GIF Mochi_buon
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_buon);

    /**
     * @brief Khai báo GIF Mochi_buonngu
     *
     * GIF này có kích thước 128x78 pixel, format XRGB8888
     */
    LV_IMAGE_DECLARE(Mochi_buonngu);
    // /**
    //  * @brief Khai báo GIF Mochi_buonngu2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_buonngu2);

    // /**
    //  * @brief Khai báo GIF Mochi_cuoilon
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_cuoilon);

    // /**
    //  * @brief Khai báo GIF Mochi_giandu
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_giandu);

    // /**
    //  * @brief Khai báo GIF Mochi_giandu2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_giandu2);

    // /**
    //  * @brief Khai báo GIF Mochi_giandu3
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_giandu3);

    // /**
    //  * @brief Khai báo GIF Mochi_haihuoc
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_haihuoc);

    // /**
    //  * @brief Khai báo GIF Mochi_hon
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_hon);

    // /**
    //  * @brief Khai báo GIF Mochi_khoc
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_khoc);

    // /**
    //  * @brief Khai báo GIF Mochi_khoc2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_khoc2);

    // /**
    //  * @brief Khai báo GIF Mochi_ngau
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_ngau);

    // /**
    //  * @brief Khai báo GIF Mochi_ngau2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_ngau2);

    // /**
    //  * @brief Khai báo GIF Mochi_ngongan
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_ngongan);

    // /**
    //  * @brief Khai báo GIF Mochi_ngonmieng
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_ngonmieng);

    // /**
    //  * @brief Khai báo GIF Mochi_ngonmieng2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_ngonmieng2);

    // /**
    //  * @brief Khai báo GIF Mochi_nhaymat
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_nhaymat);

    // /**
    //  * @brief Khai báo GIF Mochi_nhaymat2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_nhaymat2);

    // /**
    //  * @brief Khai báo GIF Mochi_soc
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_soc);

    // /**
    //  * @brief Khai báo GIF Mochi_suynghi
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_suynghi);

    // /**
    //  * @brief Khai báo GIF Mochi_thoaimai
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_thoaimai);

    // /**
    //  * @brief Khai báo GIF Mochi_thoaimai2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_thoaimai2);

    // /**
    //  * @brief Khai báo GIF Mochi_thoaimai3
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_thoaimai3);

    // /**
    //  * @brief Khai báo GIF Mochi_thoaimai4
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_thoaimai4);

    // /**
    //  * @brief Khai báo GIF Mochi_thoaimai5
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_thoaimai5);

    // /**
    //  * @brief Khai báo GIF Mochi_thoaimai6
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_thoaimai6);

    // /**
    //  * @brief Khai báo GIF Mochi_Trunglap
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_Trunglap);

    // /**
    //  * @brief Khai báo GIF Mochi_tutin
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_tutin);

    // /**
    //  * @brief Khai báo GIF Mochi_tutin2
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_tutin2);

    // /**
    //  * @brief Khai báo GIF Mochi_tutin3
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_tutin3);

    // /**
    //  * @brief Khai báo GIF Mochi_vuive
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_vuive);

    // /**
    //  * @brief Khai báo GIF Mochi_xauho
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_xauho);

    // /**
    //  * @brief Khai báo GIF Mochi_yeuthuong
    //  *
    //  * GIF này có kích thước 1440x880 pixel, format XRGB8888
    //  */
    // LV_IMAGE_DECLARE(Mochi_yeuthuong);

#ifdef __cplusplus
}
#endif
