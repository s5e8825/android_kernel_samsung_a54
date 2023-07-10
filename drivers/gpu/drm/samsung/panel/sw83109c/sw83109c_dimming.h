/*
 * linux/drivers/video/fbdev/exynos/panel/sw83109c/sw83109c_dimming.h
 *
 * Header file for SW83109C Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __SW83109C_DIMMING_H__
#define __SW83109C_DIMMING_H__
#include <linux/types.h>
#include <linux/kernel.h>
#include "../dimming.h"
#include "sw83109c.h"

#define SW83109C_NR_TP (11)

#define SW83109C_R8S_NR_LUMINANCE (256)
#define SW83109C_R8S_TARGET_LUMINANCE (420)
#define SW83109C_R8S_NR_HBM_LUMINANCE (231)
#define SW83109C_R8S_TARGET_HBM_LUMINANCE (800)

#define SW83109C_R8S_VRR_GAMMA_INDEX_0_BR (0)
#define SW83109C_R8S_VRR_GAMMA_INDEX_1_BR (64)
#define SW83109C_R8S_VRR_GAMMA_INDEX_2_BR (69)
#define SW83109C_R8S_VRR_GAMMA_INDEX_3_BR (185)
#define SW83109C_R8S_VRR_GAMMA_INDEX_MAX_BR (486)

#ifdef CONFIG_SUPPORT_AOD_BL
#define SW83109C_R8S_AOD_NR_LUMINANCE (4)
#define SW83109C_R8S_AOD_TARGET_LUMINANCE (60)
#endif

#define SW83109C_R8S_TOTAL_NR_LUMINANCE (SW83109C_R8S_NR_LUMINANCE + SW83109C_R8S_NR_HBM_LUMINANCE)


#define SW83109C_M54X_NR_LUMINANCE (256)
#define SW83109C_M54X_TARGET_LUMINANCE (420)
#define SW83109C_M54X_NR_HBM_LUMINANCE (231)
#define SW83109C_M54X_TARGET_HBM_LUMINANCE (800)

#define SW83109C_M54X_VRR_GAMMA_INDEX_0_BR (0)
#define SW83109C_M54X_VRR_GAMMA_INDEX_1_BR (64)
#define SW83109C_M54X_VRR_GAMMA_INDEX_2_BR (69)
#define SW83109C_M54X_VRR_GAMMA_INDEX_3_BR (185)
#define SW83109C_M54X_VRR_GAMMA_INDEX_MAX_BR (486)

#ifdef CONFIG_SUPPORT_AOD_BL
#define SW83109C_M54X_AOD_NR_LUMINANCE (4)
#define SW83109C_M54X_AOD_TARGET_LUMINANCE (60)
#endif

#define SW83109C_M54X_TOTAL_NR_LUMINANCE (SW83109C_M54X_NR_LUMINANCE + SW83109C_M54X_NR_HBM_LUMINANCE)


#define SW83109C_A33X_NR_LUMINANCE (256)
#define SW83109C_A33X_TARGET_LUMINANCE (420)
#define SW83109C_A33X_NR_HBM_LUMINANCE (231)
#define SW83109C_A33X_TARGET_HBM_LUMINANCE (800)

#define SW83109C_A33X_VRR_GAMMA_INDEX_0_BR (0)
#define SW83109C_A33X_VRR_GAMMA_INDEX_1_BR (64)
#define SW83109C_A33X_VRR_GAMMA_INDEX_2_BR (69)
#define SW83109C_A33X_VRR_GAMMA_INDEX_3_BR (185)
#define SW83109C_A33X_VRR_GAMMA_INDEX_MAX_BR (486)

#ifdef CONFIG_SUPPORT_AOD_BL
#define SW83109C_A33X_AOD_NR_LUMINANCE (4)
#define SW83109C_A33X_AOD_TARGET_LUMINANCE (60)
#endif

#define SW83109C_A33X_TOTAL_NR_LUMINANCE (SW83109C_A33X_NR_LUMINANCE + SW83109C_A33X_NR_HBM_LUMINANCE)

#endif /* __SW83109C_DIMMING_H__ */