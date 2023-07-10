#ifndef __SW83109C_MDNIE_H__
#define __SW83109C_MDNIE_H__

#include "oled_common_mdnie.h"

#define NR_SW83109C_MDNIE_REG	(3)

#define SW83109C_MDNIE_0_REG		(0xDF)
#define SW83109C_MDNIE_0_OFS		(0)
#define SW83109C_MDNIE_0_LEN		(55)

#define SW83109C_MDNIE_1_REG		(0xDE)
#define SW83109C_MDNIE_1_OFS		(0)
#define SW83109C_MDNIE_1_LEN		(196)

#define SW83109C_MDNIE_2_REG		(0xDD)
#define SW83109C_MDNIE_2_OFS		(0)
#define SW83109C_MDNIE_2_LEN		(19)

#define SW83109C_SCR_CR_OFS	(31)
#define SW83109C_SCR_WR_OFS	(49)
#define SW83109C_SCR_WG_OFS	(51)
#define SW83109C_SCR_WB_OFS	(53)
#define SW83109C_SCR_WHITE_LEN (2)
#define SW83109C_NIGHT_MODE_OFS	(SW83109C_SCR_CR_OFS)
#define SW83109C_NIGHT_MODE_LEN	(24)
#define SW83109C_COLOR_LENS_OFS	(SW83109C_SCR_CR_OFS)
#define SW83109C_COLOR_LENS_LEN	(24)
#define SW83109C_TRANS_MODE_OFS  (16)
#define SW83109C_TRANS_MODE_LEN  (1)

#endif /* __SW83109C_MDNIE_H__ */