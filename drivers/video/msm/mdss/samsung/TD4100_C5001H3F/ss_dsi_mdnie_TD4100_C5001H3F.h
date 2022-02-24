/*
 * =================================================================
 *
 *
 *	Description:  samsung display common file
 *
 *	Author: jb09.kim
 *	Company:  Samsung Electronics
 *
 * ================================================================
 */
/*
<one line to give the program's name and a brief idea of what it does.>
Copyright (C) 2012, Samsung Electronics. All rights reserved.

*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
*/

#ifndef _SAMSUNG_DSI_MDNIE_TD4100_C5001H3F_
#define _SAMSUNG_DSI_MDNIE_TD4100_C5001H3F_

#include "../ss_dsi_mdnie_lite_common.h"

#define MDNIE_COLOR_BLINDE_CMD_OFFSET 0

#define ADDRESS_SCR_WHITE_RED   0x0
#define ADDRESS_SCR_WHITE_GREEN 0x0
#define ADDRESS_SCR_WHITE_BLUE  0x0

#define MDNIE_RGB_SENSOR_INDEX	0

#define MDNIE_STEP1_INDEX 0
#define MDNIE_STEP2_INDEX 1

static char mcs_lock[] = {
	0xB0, 0x03
};

static char mcs_unlock[] = {
	0xB0, 0x04
};

static char DSI0_UI_MDNIE_1[] ={
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_UI_MDNIE_2[] ={
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static char DSI0_CABC_OFF[] ={
	0x55,
	0x00,
};

static char DSI0_CABC_ON[] ={
	0x55,
	0x03,
};

static char DSI0_CE_SLOPE_LONG[] ={
	0xCE,
	0x7d,
	0x40,
	0x48,
	0x56,
	0x67,
	0x78,
	0x88,
	0x98,
	0xA7,
	0xB5,
	0xC3,
	0xD1,
	0xDE,
	0xE9,
	0xF2,
	0xFA,
	0xFF,
	0x04,
	0x00,
	0x04,/**/
	0x04,
	0x45,
	0x00,
	0x00,
};

static char DSI0_HBM_CE_MDNIE_1[] ={
	0xC7,
	0x00,
	0x0A,
	0x12,
	0x1F,
	0x2B,
	0x36,
	0x50,
	0x63,
	0x73,
	0x81,
	0x35,
	0x41,
	0x4E,
	0x5C,
	0x63,
	0x6E,
	0x7C,
	0x89,
	0xA0,
	0x00,
	0x0A,
	0x12,
	0x1F,
	0x2B,
	0x36,
	0x50,
	0x63,
	0x73,
	0x81,
	0x35,
	0x41,
	0x4E,
	0x5C,
	0x63,
	0x6E,
	0x7C,
	0x89,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_HBM_CE_MDNIE_2[] ={
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static char DSI0_VIDEO_MDNIE_1[] ={
	0xC7,
	0x00,
	0x0A,
	0x0F,
	0x1A,
	0x28,
	0x35,
	0x53,
	0x6A,
	0x7E,
	0x8E,
	0x43,
	0x53,
	0x62,
	0x79,
	0x80,
	0x8F,
	0x96,
	0x9F,
	0xA0,
	0x00,
	0x0A,
	0x0F,
	0x1A,
	0x28,
	0x36,
	0x54,
	0x69,
	0x7E,
	0x8F,
	0x44,
	0x52,
	0x62,
	0x79,
	0x80,
	0x8F,
	0x96,
	0x9F,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_VIDEO_MDNIE_2[] = {
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};


static char DSI0_CAMERA_MDNIE_1[] ={
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_CAMERA_MDNIE_2[] ={
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static char DSI0_EBOOK_MDNIE_1[] = {
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_EBOOK_MDNIE_2[] = {
	0xC8,
	0x01,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFE,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xCF,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x50,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x81,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x2E,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xAC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0x65,
	0x00,
};

static char DSI0_GAME_LOW_MDNIE_1[] ={
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_GAME_LOW_MDNIE_2[] ={
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static char DSI0_GAME_MID_MDNIE_1[] ={
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_GAME_MID_MDNIE_2[] ={
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static char DSI0_GAME_HIGH_MDNIE_1[] ={
	0xC7,
	0x01,
	0x12,
	0x1E,
	0x2D,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x80,
	0x8E,
	0x40,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x9A,
	0x98,
	0xA0,
	0x00,
	0x12,
	0x1E,
	0x2C,
	0x39,
	0x46,
	0x5F,
	0x71,
	0x84,
	0x8E,
	0x44,
	0x4E,
	0x5B,
	0x6E,
	0x78,
	0x84,
	0x8F,
	0x9A,
	0xA0,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
	0x00,
	0x97,
};

static char DSI0_GAME_HIGH_MDNIE_2[] ={
	0xC8,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
	0x00,
	0x00,
	0x00,
	0x00,
	0xFC,
	0x00,
};

static struct dsi_cmd_desc DSI0_CAMERA_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_CAMERA_MDNIE_1)}, DSI0_CAMERA_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_CAMERA_MDNIE_2)}, DSI0_CAMERA_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 0, 0, 0, 0, sizeof(DSI0_CE_SLOPE_LONG)}, DSI0_CE_SLOPE_LONG},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_ON)}, DSI0_CABC_ON},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};
static struct dsi_cmd_desc DSI0_EBOOK_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_EBOOK_MDNIE_1)}, DSI0_EBOOK_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_EBOOK_MDNIE_2)}, DSI0_EBOOK_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_OFF)}, DSI0_CABC_OFF},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};
static struct dsi_cmd_desc DSI0_HBM_CE_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_HBM_CE_MDNIE_1)}, DSI0_HBM_CE_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_HBM_CE_MDNIE_2)}, DSI0_HBM_CE_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_OFF)}, DSI0_CABC_OFF},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};
static struct dsi_cmd_desc DSI0_UI_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_UI_MDNIE_1)}, DSI0_UI_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_UI_MDNIE_2)}, DSI0_UI_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_OFF)}, DSI0_CABC_OFF},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};
static struct dsi_cmd_desc DSI0_VIDEO_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_VIDEO_MDNIE_1)}, DSI0_VIDEO_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_VIDEO_MDNIE_2)}, DSI0_VIDEO_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 0, 0, 0, 0, sizeof(DSI0_CE_SLOPE_LONG)}, DSI0_CE_SLOPE_LONG},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_ON)}, DSI0_CABC_ON},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};
static struct dsi_cmd_desc DSI0_GAME_LOW_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_GAME_LOW_MDNIE_1)}, DSI0_GAME_LOW_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_GAME_LOW_MDNIE_2)}, DSI0_GAME_LOW_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 0, 0, 0, 0, sizeof(DSI0_CE_SLOPE_LONG)}, DSI0_CE_SLOPE_LONG},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_ON)}, DSI0_CABC_ON},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};
static struct dsi_cmd_desc DSI0_GAME_MID_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_GAME_MID_MDNIE_1)}, DSI0_GAME_MID_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_GAME_MID_MDNIE_2)}, DSI0_GAME_MID_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 0, 0, 0, 0, sizeof(DSI0_CE_SLOPE_LONG)}, DSI0_CE_SLOPE_LONG},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_ON)}, DSI0_CABC_ON},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};
static struct dsi_cmd_desc DSI0_GAME_HIGH_MDNIE[] = {
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(mcs_unlock)}, mcs_unlock},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_GAME_HIGH_MDNIE_1)}, DSI0_GAME_HIGH_MDNIE_1},
	{{DTYPE_GEN_LWRITE, 0, 0, 0, 0, sizeof(DSI0_GAME_HIGH_MDNIE_2)}, DSI0_GAME_HIGH_MDNIE_2},
	{{DTYPE_DCS_LWRITE, 0, 0, 0, 0, sizeof(DSI0_CE_SLOPE_LONG)}, DSI0_CE_SLOPE_LONG},
	{{DTYPE_DCS_LWRITE, 1, 0, 0, 0, sizeof(DSI0_CABC_ON)}, DSI0_CABC_ON},
	{{DTYPE_GEN_LWRITE, 1, 0, 0, 0, sizeof(mcs_lock)}, mcs_lock},
};

static struct dsi_cmd_desc *mdnie_tune_value_dsi0[MAX_APP_MODE][MAX_MODE][MAX_OUTDOOR_MODE] = {
		/*
			DYNAMIC_MODE
			STANDARD_MODE
			NATURAL_MODE
			MOVIE_MODE
			AUTO_MODE
			READING_MODE
		*/
		// UI_APP
		{
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
		},
		// VIDEO_APP
		{
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
		},
		// VIDEO_WARM_APP
		{
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
		},
		// VIDEO_COLD_APP
		{
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
			{DSI0_VIDEO_MDNIE,	NULL},
		},
		// CAMERA_APP
		{
			{DSI0_CAMERA_MDNIE,	NULL},
			{DSI0_CAMERA_MDNIE,	NULL},
			{DSI0_CAMERA_MDNIE,	NULL},
			{DSI0_CAMERA_MDNIE,	NULL},
			{DSI0_CAMERA_MDNIE,	NULL},
			{DSI0_CAMERA_MDNIE,	NULL},
		},
		// NAVI_APP
		{
			{NULL,	NULL},
			{NULL,	NULL},
			{NULL,	NULL},
			{NULL,	NULL},
			{NULL,	NULL},
			{NULL,	NULL},
		},
		// GALLERY_APP
		{
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
		},
		// VT_APP
		{
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
		},
		// BROWSER_APP
		{
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
		},
		// eBOOK_APP
		{
			{DSI0_EBOOK_MDNIE,	NULL},
			{DSI0_EBOOK_MDNIE,	NULL},
			{DSI0_EBOOK_MDNIE,	NULL},
			{DSI0_EBOOK_MDNIE,	NULL},
			{DSI0_EBOOK_MDNIE,	NULL},
			{DSI0_EBOOK_MDNIE,	NULL},
		},
		// EMAIL_APP
		{
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
		},
		// GAME_LOW_APP
		{
			{DSI0_GAME_LOW_MDNIE,	NULL},
			{DSI0_GAME_LOW_MDNIE,	NULL},
			{DSI0_GAME_LOW_MDNIE,	NULL},
			{DSI0_GAME_LOW_MDNIE,	NULL},
			{DSI0_GAME_LOW_MDNIE,	NULL},
			{DSI0_GAME_LOW_MDNIE,	NULL},
		},
		// GAME_MID_APP
		{
			{DSI0_GAME_MID_MDNIE,	NULL},
			{DSI0_GAME_MID_MDNIE,	NULL},
			{DSI0_GAME_MID_MDNIE,	NULL},
			{DSI0_GAME_MID_MDNIE,	NULL},
			{DSI0_GAME_MID_MDNIE,	NULL},
			{DSI0_GAME_MID_MDNIE,	NULL},
		},
		// GAME_HIGH_APP
		{
			{DSI0_GAME_HIGH_MDNIE,	NULL},
			{DSI0_GAME_HIGH_MDNIE,	NULL},
			{DSI0_GAME_HIGH_MDNIE,	NULL},
			{DSI0_GAME_HIGH_MDNIE,	NULL},
			{DSI0_GAME_HIGH_MDNIE,	NULL},
			{DSI0_GAME_HIGH_MDNIE,	NULL},
		},
		// TDMB_APP
		{
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
			{DSI0_UI_MDNIE,	NULL},
		},
};

#define DSI0_RGB_SENSOR_MDNIE_1_SIZE ARRAY_SIZE(DSI0_UI_MDNIE_1)
#define DSI0_RGB_SENSOR_MDNIE_2_SIZE ARRAY_SIZE(DSI0_UI_MDNIE_2)
#define DSI0_RGB_SENSOR_MDNIE_3_SIZE ARRAY_SIZE(DSI0_CABC_OFF)
#endif /*_DSI_TCON_MDNIE_LITE_DATA_FHD_TD4100_C5001H3F_H_*/
