/*第六区
47 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 稀 息 希 悉 膝 夕 惜 熄 烯
１ 溪 汐 犀 檄 袭 席 习 媳 喜 铣
２ 洗 系 隙 戏 细 瞎 虾 匣 霞 辖
３ 暇 峡 侠 狭 下 厦 夏 吓 掀 锨
４ 先 仙 鲜 纤 咸 贤 衔 舷 闲 涎
５ 弦 嫌 显 险 现 献 县 腺 馅 羡
６ 宪 陷 限 线 相 厢 镶 香 箱 襄
７ 湘 乡 翔 祥 详 想 响 享 项 巷
８ 橡 像 向 象 萧 硝 霄 削 哮 嚣
９ 销 消 宵 淆 晓
47 th           0x018380-0x018fff               99200-102399
*/
//稀 息 希 悉 膝 夕 惜 熄 烯 溪 汐 犀 檄 袭 席 习 媳 喜 铣 洗 系 隙 戏 细 瞎 虾 匣 霞 辖 暇 峡 侠 狭 下 厦 夏 吓 掀 锨 先 仙 鲜 纤 咸 贤 衔 舷 闲 涎
//弦 嫌 显 险 现 献 县 腺 馅 羡 宪 陷 限 线 相 厢 镶 香 箱 襄 湘 乡 翔 祥 详 想 响 享 项 巷 橡 像 向 象 萧 硝 霄 削 哮 嚣 销 消 宵 淆 晓
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x018380
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x24,0x24,0xA4,0xFE,0xA3,0x22,0x50,0x51,0xC9,0x6A,0xC6,0x44,0x4A,0x51,0x40,0x00},
{0x08,0x06,0x01,0xFF,0x00,0x05,0x02,0x3F,0x02,0x02,0xFF,0x12,0x22,0x1E,0x00,0x00},/*"稀",0*/
{0x00,0x00,0x00,0xFC,0x54,0x54,0x56,0x55,0x54,0x54,0x54,0xFC,0x00,0x00,0x00,0x00},
{0x40,0x30,0x00,0x03,0x39,0x41,0x41,0x45,0x59,0x41,0x41,0x73,0x00,0x08,0x30,0x00},/*"息",1*/
{0x40,0x40,0x50,0x51,0x51,0xCA,0x7A,0x44,0xC4,0x4A,0x4A,0x51,0x51,0x40,0x40,0x00},
{0x10,0x08,0x04,0x02,0x3F,0x02,0x02,0x02,0xFF,0x02,0x12,0x22,0x1E,0x00,0x00,0x00},/*"希",2*/
{0x20,0x20,0x22,0xA6,0x6A,0x22,0x22,0xFE,0x21,0x21,0x69,0xA5,0x21,0x20,0x20,0x00},
{0x42,0x32,0x01,0x00,0x38,0x40,0x40,0x45,0x58,0x40,0x40,0x70,0x01,0x0A,0x32,0x00},/*"悉",3*/
{0x00,0xFE,0x22,0x22,0xFE,0x00,0x24,0x24,0x94,0x4C,0x3F,0x4C,0x94,0x14,0x24,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x00,0x22,0x15,0x48,0x80,0x7F,0x00,0x08,0x15,0x22,0x00},/*"膝",4*/
{0x00,0x00,0x00,0x80,0x40,0x30,0x1F,0x10,0x10,0x10,0x10,0x90,0x70,0x00,0x00,0x00},
{0x00,0x82,0x81,0x80,0x40,0x41,0x22,0x14,0x08,0x04,0x02,0x01,0x00,0x00,0x00,0x00},/*"夕",5*/
{0x00,0xE0,0x00,0xFF,0x10,0x60,0x48,0x48,0x7F,0x48,0x48,0x48,0x7F,0x48,0x48,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"惜",6*/
{0x80,0x70,0x00,0xFF,0x10,0x08,0x00,0xFC,0x54,0x56,0x55,0x54,0x54,0xFC,0x00,0x00},
{0x80,0x60,0x18,0x07,0x08,0x50,0x30,0x01,0x39,0x43,0x4D,0x41,0x71,0x09,0x30,0x00},/*"熄",7*/
{0x80,0x70,0x00,0xFF,0x10,0x08,0x50,0x51,0xC9,0x6A,0xC6,0x44,0x4A,0x51,0x40,0x00},
{0x80,0x60,0x18,0x07,0x08,0x14,0x02,0x3F,0x02,0x02,0xFF,0x12,0x22,0x1E,0x00,0x00},/*"烯",8*/
{0x10,0x60,0x02,0x8C,0x00,0x02,0x46,0x6A,0x52,0xC6,0x49,0x21,0x09,0x05,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x90,0x92,0x53,0x33,0x1E,0x32,0x52,0x93,0x96,0x80,0x00},/*"溪",9*/
{0x10,0x60,0x02,0x8C,0x00,0x80,0x40,0x30,0x4F,0x88,0x08,0x08,0x88,0x78,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x80,0x80,0x40,0x20,0x10,0x09,0x06,0x01,0x00,0x00,0x00},/*"汐",10*/
{0x00,0x00,0xFE,0x0A,0xAA,0x4A,0x4A,0x0A,0xEA,0x0A,0x4A,0x4A,0xAA,0x8E,0x00,0x00},
{0x40,0x30,0x0F,0x10,0x14,0x13,0x12,0x12,0xFF,0x12,0x12,0x12,0x12,0x10,0x10,0x00},/*"犀",11*/
{0x10,0x90,0xFF,0x90,0x10,0x7C,0xD6,0x55,0x54,0x7C,0x20,0xD8,0x17,0xF0,0x10,0x00},
{0x06,0x01,0xFF,0x00,0x81,0x62,0x1E,0x4B,0x8A,0x7A,0x80,0x67,0x18,0x67,0x80,0x00},/*"檄",12*/
{0x84,0x44,0x24,0x14,0x4C,0x47,0xC4,0x7C,0xA4,0x95,0x96,0x8C,0x84,0xE4,0x04,0x00},
{0x22,0x22,0x12,0x12,0x0A,0xFE,0x42,0x27,0x0A,0x12,0x22,0x32,0x4A,0x42,0x42,0x00},/*"袭",13*/
{0x00,0x00,0xFC,0x24,0x24,0x24,0xFC,0x25,0x26,0x24,0xFC,0x24,0x24,0x24,0x04,0x00},
{0x40,0x30,0x0F,0x00,0x7C,0x04,0x05,0x05,0xFF,0x05,0x25,0x44,0x3C,0x00,0x00,0x00},/*"席",14*/
{0x00,0x02,0x02,0x02,0x12,0x22,0xC2,0x02,0x02,0x02,0x02,0x02,0xFE,0x00,0x00,0x00},
{0x00,0x08,0x18,0x08,0x04,0x04,0x04,0x02,0x02,0x41,0x81,0x40,0x3F,0x00,0x00,0x00},/*"习",15*/
{0x10,0xF0,0x1F,0x10,0xF0,0x00,0x00,0xFC,0x54,0x56,0x55,0x54,0x54,0xFC,0x00,0x00},
{0x41,0x22,0x14,0x0C,0x33,0x40,0x30,0x01,0x39,0x43,0x4D,0x41,0x71,0x09,0x30,0x00},/*"媳",16*/
{0x00,0x02,0xEA,0xAA,0xAA,0xAA,0xAA,0xAF,0xAA,0xAA,0xAA,0xAA,0xEA,0x02,0x00,0x00},
{0x02,0x02,0xFA,0x4A,0x4B,0x4A,0x4A,0x4A,0x4A,0x4A,0x4B,0x4A,0xFA,0x02,0x02,0x00},/*"喜",17*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0xA0,0x9E,0x88,0x88,0xFF,0x88,0x88,0x88,0x80,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x91,0x40,0x30,0x0F,0x00,0x00,0x7F,0x80,0x80,0xF0,0x00},/*"铣",18*/
{0x10,0x60,0x02,0x8C,0x20,0x90,0x8E,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0x80,0x00},
{0x04,0x04,0x7E,0x01,0x80,0x40,0x30,0x0F,0x00,0x00,0x3F,0x40,0x40,0x40,0x70,0x00},/*"洗",19*/
{0x00,0x00,0x22,0x32,0x2A,0xA6,0xA2,0x62,0x21,0x11,0x09,0x81,0x01,0x00,0x00,0x00},
{0x00,0x42,0x22,0x13,0x0B,0x42,0x82,0x7E,0x02,0x02,0x0A,0x12,0x23,0x46,0x00,0x00},/*"系",20*/
{0x00,0xFE,0x02,0x22,0xDA,0x06,0x08,0xE4,0xA2,0xA0,0xAF,0xA0,0xA2,0xE4,0x08,0x00},
{0x00,0xFF,0x08,0x10,0x08,0x07,0x20,0x13,0x4A,0x82,0x7E,0x02,0x0A,0x13,0x20,0x00},/*"隙",21*/
{0x00,0x08,0x48,0x88,0x08,0xC8,0x38,0x40,0x40,0x40,0xFF,0x20,0x22,0xAC,0x20,0x00},
{0x00,0x20,0x10,0x0C,0x03,0x04,0x18,0x80,0x40,0x20,0x17,0x18,0x26,0x41,0xF0,0x00},/*"戏",22*/
{0x20,0x30,0xAC,0x63,0x20,0x18,0x00,0xFC,0x04,0x04,0xFC,0x04,0x04,0xFC,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x12,0x00,0xFF,0x41,0x41,0x7F,0x41,0x41,0xFF,0x00,0x00},/*"细",23*/
{0x00,0xFC,0x24,0x24,0xFC,0x10,0x0C,0xA4,0xA4,0xA5,0xF6,0xA4,0xA4,0xB4,0x0C,0x00},
{0x00,0x3F,0x11,0x11,0x3F,0x00,0x02,0xFA,0x4A,0x4A,0x4F,0x4A,0x4A,0xFA,0x02,0x00},/*"瞎",24*/
{0x00,0xF8,0x08,0xFF,0x08,0xF8,0x02,0x02,0x02,0xFE,0x02,0x42,0x82,0x02,0x02,0x00},
{0x20,0x63,0x21,0x1F,0x11,0x19,0x30,0x00,0x00,0xFF,0x00,0x00,0x00,0x03,0x00,0x00},/*"虾",25*/
{0x00,0xFE,0x02,0x02,0xF2,0x92,0x92,0x92,0xF2,0x92,0x92,0x92,0xF2,0x02,0x00,0x00},
{0x00,0x7F,0x40,0x40,0x4F,0x44,0x44,0x44,0x7F,0x44,0x44,0x44,0x4F,0x40,0x40,0x00},/*"匣",26*/
{0x10,0x0C,0x05,0x55,0x55,0x55,0x05,0x7F,0x05,0x55,0x55,0x55,0x05,0x14,0x0C,0x00},
{0x00,0x00,0xFF,0x55,0x55,0x55,0x57,0x00,0x95,0xB5,0x55,0x55,0xB7,0x80,0x00,0x00},/*"霞",27*/
{0xC8,0xB8,0x8F,0xE8,0x88,0x98,0x0C,0xA4,0xA4,0xA5,0xF6,0xA4,0xA4,0xB4,0x0C,0x00},
{0x08,0x18,0x08,0xFF,0x04,0x04,0x02,0xFA,0x4A,0x4A,0x4F,0x4A,0x4A,0xFA,0x02,0x00},/*"辖",28*/
{0xFC,0x84,0x84,0xFC,0x00,0xFE,0x22,0x22,0x3E,0x00,0x22,0x22,0x22,0x3E,0x00,0x00},
{0x3F,0x10,0x10,0x3F,0x00,0xFF,0x09,0x09,0x89,0x40,0x2F,0x11,0x29,0x47,0x80,0x00},/*"暇",29*/
{0x00,0xF0,0x00,0xFF,0x00,0xF0,0x00,0x28,0xC8,0x08,0xFF,0x08,0x88,0x68,0x00,0x00},
{0x00,0x1F,0x10,0x0F,0x08,0x1F,0x82,0x42,0x32,0x0E,0x03,0x0E,0x32,0x42,0x82,0x00},/*"峡",30*/
{0x00,0x80,0x60,0xF8,0x07,0x08,0x28,0x48,0x08,0xFF,0x08,0x48,0x28,0x08,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x81,0x41,0x21,0x19,0x07,0x01,0x07,0x19,0x21,0x41,0x81,0x00},/*"侠",31*/
{0x40,0x22,0x14,0x08,0xF4,0x02,0x00,0x28,0xC8,0x08,0xFF,0x08,0x88,0x68,0x00,0x00},
{0x08,0x44,0x82,0x41,0x3F,0x00,0x82,0x42,0x32,0x0E,0x03,0x0E,0x32,0x42,0x82,0x00},/*"狭",32*/
{0x02,0x02,0x02,0x02,0x02,0x02,0xFE,0x02,0x02,0x42,0x82,0x02,0x02,0x02,0x02,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x01,0x06,0x00,0x00,0x00},/*"下",33*/
{0x00,0x00,0xFF,0x05,0x05,0xF5,0x55,0x5D,0x55,0x55,0x55,0x55,0xF5,0x05,0x01,0x00},
{0x40,0x30,0x0F,0x80,0xA0,0x97,0xBD,0x55,0x55,0x55,0x55,0x55,0xB7,0x80,0x80,0x00},/*"厦",34*/
{0x00,0x01,0x01,0xFD,0x55,0x55,0x57,0x55,0x55,0x55,0x55,0xFD,0x01,0x01,0x00,0x00},
{0x80,0x90,0x88,0x45,0x4F,0x55,0x25,0x25,0x25,0x55,0x4D,0x45,0x80,0x80,0x80,0x00},/*"夏",35*/
{0x00,0xFC,0x04,0x04,0xFC,0x02,0x02,0x02,0x02,0xFE,0x02,0x42,0x82,0x02,0x02,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x03,0x00,0x00},/*"吓",36*/
{0x10,0x10,0xFF,0x10,0x00,0xFC,0x44,0xC4,0x42,0x20,0x18,0xCF,0x08,0x28,0x18,0x00},
{0x42,0x82,0x7F,0x81,0x60,0x1F,0x00,0x7F,0x80,0x60,0x1C,0x03,0x1C,0x60,0x80,0x00},/*"掀",37*/
{0x40,0x30,0xEF,0x24,0x24,0x00,0xFC,0x44,0xC4,0x42,0x20,0x1F,0xC8,0x28,0x18,0x00},
{0x01,0x01,0x7F,0x21,0x91,0x60,0x1F,0x00,0x7F,0x00,0x80,0x78,0x07,0x78,0x80,0x00},/*"锨",38*/
{0x80,0xA0,0x90,0x8E,0x88,0x88,0x88,0xFF,0x88,0x88,0x88,0x88,0x88,0x80,0x80,0x00},
{0x80,0x80,0x40,0x20,0x18,0x07,0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x70,0x00},/*"先",39*/
{0x80,0x60,0xF8,0x07,0x00,0xF0,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0xF0,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x00,0x3F,0x20,0x20,0x20,0x3F,0x20,0x20,0x20,0x7F,0x00,0x00},/*"仙",40*/
{0x40,0x20,0xF8,0x27,0xE4,0x34,0xEC,0x00,0x09,0x8A,0x8C,0xF8,0x8C,0x8A,0x09,0x00},
{0x00,0x40,0xCF,0x49,0x2F,0x29,0x2F,0x00,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x00},/*"鲜",41*/
{0x20,0x30,0xAC,0x63,0x20,0x18,0x80,0x84,0x84,0x84,0xFE,0x82,0x83,0x82,0x80,0x00},
{0x22,0x67,0x22,0x12,0x12,0x12,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"纤",42*/
{0x00,0x00,0xF8,0x08,0x48,0x48,0x48,0x48,0x08,0xFF,0x08,0x09,0x0A,0xC8,0x08,0x00},
{0x80,0x60,0x1F,0x00,0x3E,0x12,0x12,0xBE,0x40,0x21,0x16,0x18,0x26,0x41,0xF8,0x00},/*"咸",43*/
{0x00,0x00,0x7E,0x00,0x00,0xFF,0x40,0x42,0x26,0x2A,0x12,0x2A,0x26,0x40,0x40,0x00},
{0x00,0x80,0x80,0x9F,0x41,0x41,0x21,0x1D,0x01,0x21,0x21,0x5F,0x40,0x80,0x00,0x00},/*"贤",44*/
{0x10,0x88,0xC4,0x23,0x40,0x30,0xEF,0x24,0x24,0x00,0x40,0x44,0xC4,0x44,0x40,0x00},
{0x01,0x00,0xFF,0x00,0x01,0x01,0x7F,0x21,0x11,0x00,0x40,0x80,0x7F,0x00,0x00,0x00},/*"衔",45*/
{0x80,0xFC,0x96,0xE5,0x84,0xFC,0x00,0x08,0x88,0x48,0x39,0x0E,0x08,0xC8,0x08,0x00},
{0x80,0x7F,0x02,0x4C,0x80,0x7F,0x00,0x21,0x71,0x29,0x25,0x23,0x21,0x28,0x70,0x00},/*"舷",46*/
{0x00,0xF8,0x01,0x42,0x40,0x42,0x42,0xFA,0x42,0x42,0x42,0x42,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x00,0x08,0x04,0x02,0x01,0x3F,0x01,0x02,0x04,0x48,0x80,0x7F,0x00,0x00},/*"闲",47*/
{0x10,0x60,0x02,0x8C,0x00,0x84,0xE4,0x9C,0x00,0xE4,0x04,0xFE,0x43,0x42,0x00,0x00},
{0x04,0x04,0x7E,0x81,0x40,0x26,0x18,0x27,0x40,0x4F,0x48,0x4F,0x48,0x48,0x40,0x00},/*"涎",48*/
{0x02,0xE2,0x22,0x22,0x3E,0x00,0x08,0x88,0x48,0x39,0x0E,0x08,0xC8,0x08,0x08,0x00},
{0x00,0x43,0x82,0x42,0x3E,0x00,0x21,0x71,0x29,0x25,0x23,0x21,0x28,0x70,0x00,0x00},/*"弦",0*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x88,0xA8,0xA9,0xFA,0xA8,0xFA,0xA9,0xE8,0x88,0x00},
{0x40,0x22,0x15,0x08,0x16,0x61,0x20,0x12,0x0A,0xFF,0x02,0xFF,0x0A,0x13,0x20,0x00},/*"嫌",1*/
{0x00,0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,0x00},
{0x40,0x42,0x44,0x58,0x40,0x7F,0x40,0x40,0x40,0x7F,0x40,0x50,0x48,0x46,0x40,0x00},/*"显",2*/
{0x00,0xFE,0x22,0x5A,0x86,0x40,0x20,0x50,0x4C,0x43,0x4C,0x50,0x20,0x40,0x40,0x00},
{0x00,0xFF,0x04,0x08,0x07,0x40,0x44,0x58,0x41,0x4E,0x60,0x58,0x47,0x40,0x40,0x00},/*"险",3*/
{0x04,0x84,0x84,0xFC,0x84,0x84,0x00,0xFE,0x02,0x02,0xF2,0x02,0x02,0xFE,0x00,0x00},
{0x20,0x60,0x20,0x1F,0x10,0x90,0x40,0x23,0x18,0x06,0x01,0x7E,0x80,0x83,0xE0,0x00},/*"现",4*/
{0x04,0xE4,0x24,0xA4,0x3F,0xA4,0x24,0xE4,0x04,0x20,0x20,0xFF,0x20,0x22,0x2C,0x00},
{0x00,0xFF,0x08,0x0A,0x3F,0x4A,0x88,0x7F,0x80,0x60,0x1C,0x03,0x1C,0x60,0x80,0x00},/*"献",5*/
{0x00,0x00,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00,0x00},
{0x04,0x04,0x44,0xE7,0x54,0x4C,0x44,0x44,0x44,0x44,0x54,0x67,0xC4,0x04,0x04,0x00},/*"县",6*/
{0x00,0xFE,0x22,0x22,0xFE,0x00,0x00,0x7C,0x56,0x55,0xD4,0x54,0x54,0x7C,0x00,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x40,0x22,0x1A,0x46,0x80,0x7F,0x03,0x0C,0x32,0x41,0x00},/*"腺",7*/
{0x40,0x30,0x8F,0x28,0x18,0x20,0x90,0x88,0x87,0x44,0x04,0x94,0x8C,0x80,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x10,0x00,0xFF,0x44,0x44,0x40,0x40,0x44,0x44,0xFF,0x00,0x00},/*"馅",8*/
{0x40,0xC4,0x54,0x54,0x55,0x56,0x54,0x7C,0xD4,0x56,0x55,0x54,0x54,0x44,0x40,0x00},
{0x10,0x10,0xF9,0x04,0x82,0x88,0x44,0x42,0x23,0x1A,0x22,0x42,0x4A,0x86,0x80,0x00},/*"羡",9*/
{0x10,0x0C,0x84,0x64,0x44,0x44,0x45,0xF6,0x44,0x44,0x44,0x44,0x44,0x14,0x0C,0x00},
{0x82,0x82,0x42,0x42,0x22,0x1E,0x02,0x03,0x02,0x7E,0x82,0x82,0x82,0x82,0xE2,0x00},/*"宪",10*/
{0x00,0xFE,0x22,0x5A,0x86,0x20,0x90,0x88,0x87,0x44,0x04,0x94,0x8C,0x80,0x00,0x00},
{0x00,0xFF,0x04,0x08,0x07,0x00,0xFF,0x44,0x44,0x40,0x40,0x44,0x44,0xFF,0x00,0x00},/*"陷",11*/
{0x00,0xFE,0x22,0x5A,0x86,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x00,0xFF,0x04,0x08,0x07,0x00,0xFF,0x40,0x20,0x03,0x0C,0x14,0x22,0x41,0x40,0x00},/*"限",12*/
{0x20,0x30,0xAC,0x63,0x20,0x18,0x80,0x90,0x90,0xFF,0x90,0x49,0x4A,0x48,0x40,0x00},
{0x22,0x67,0x22,0x12,0x12,0x12,0x40,0x40,0x20,0x13,0x0C,0x14,0x22,0x41,0xF8,0x00},/*"线",13*/
{0x10,0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0xFE,0x22,0x22,0x22,0x22,0xFE,0x00,0x00},
{0x08,0x04,0x03,0x00,0xFF,0x00,0x03,0x00,0xFF,0x42,0x42,0x42,0x42,0xFF,0x00,0x00},/*"相",14*/
{0x00,0x00,0xFE,0x02,0x22,0xA2,0xFE,0x22,0x02,0xF2,0x92,0x92,0x92,0xF2,0x02,0x00},
{0x80,0x60,0x1F,0x08,0x06,0x01,0xFF,0x01,0x02,0xFF,0x44,0x44,0x44,0xFF,0x00,0x00},/*"厢",15*/
{0x40,0x30,0xEF,0x24,0x24,0x82,0xBA,0xEA,0xBA,0x83,0xBA,0xEA,0xBA,0x82,0x00,0x00},
{0x01,0x01,0x7F,0x21,0x11,0x4A,0x2A,0xFF,0x8A,0x4A,0x1A,0x2F,0x5A,0x8A,0x88,0x00},/*"镶",16*/
{0x10,0x10,0x90,0x92,0x52,0x32,0x12,0xFE,0x12,0x31,0x51,0x91,0x90,0x10,0x10,0x00},
{0x01,0x01,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x01,0x01,0x00},/*"香",17*/
{0x20,0x90,0x8C,0x87,0xEC,0x94,0x84,0x14,0xC8,0x47,0x44,0x4C,0x54,0xC4,0x04,0x00},
{0x40,0x20,0x18,0x06,0xFF,0x04,0x18,0x00,0xFF,0x92,0x92,0x92,0x92,0xFF,0x00,0x00},/*"箱",18*/
{0x02,0x82,0xBA,0xAA,0xAA,0xEA,0xBA,0x83,0xBA,0xEA,0xAA,0xAA,0xBA,0x82,0x02,0x00},
{0x48,0x48,0x4A,0x2A,0x2A,0xFF,0x8A,0x4A,0x0A,0x1F,0x2A,0x4A,0x6A,0x98,0x88,0x00},/*"襄",19*/
{0x20,0xC2,0x0C,0x80,0x10,0x90,0xFF,0x90,0x00,0xFC,0x44,0x44,0x44,0xFC,0x00,0x00},
{0x04,0x04,0x7E,0x05,0x02,0x01,0xFF,0x00,0x01,0xFF,0x44,0x44,0x44,0xFF,0x00,0x00},/*"湘",20*/
{0x00,0x00,0x20,0x30,0x28,0x24,0xA3,0x60,0x20,0x10,0x0C,0x00,0xC0,0x00,0x00,0x00},
{0x80,0x80,0x80,0x42,0x42,0x23,0x22,0x12,0x0A,0x06,0x02,0x01,0x00,0x00,0x00,0x00},/*"乡",21*/
{0x08,0x49,0x4E,0xF8,0x4C,0x4B,0x08,0x12,0x22,0xFE,0x00,0x12,0x22,0xFE,0x00,0x00},
{0x82,0x42,0x32,0x0F,0x02,0x02,0x02,0x44,0x82,0x7F,0x04,0x42,0x81,0x7F,0x00,0x00},/*"翔",22*/
{0x08,0x08,0x89,0xEE,0x98,0x00,0x10,0x91,0x96,0x90,0xF0,0x90,0x94,0x93,0x10,0x00},
{0x02,0x01,0x00,0xFF,0x00,0x01,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x00},/*"祥",23*/
{0x40,0x40,0x42,0xCC,0x00,0x10,0x91,0x96,0x90,0xF0,0x90,0x94,0x93,0x10,0x00,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x14,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x04,0x00},/*"详",24*/
{0x00,0x08,0x88,0x68,0xFF,0x48,0x88,0x00,0xFE,0x52,0x52,0x52,0xFE,0x00,0x00,0x00},
{0x40,0x31,0x00,0x00,0x3B,0x40,0x40,0x44,0x5B,0x42,0x42,0x72,0x03,0x08,0x30,0x00},/*"想",25*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0xF8,0x08,0xCC,0x4B,0x48,0xC8,0x08,0xF8,0x00,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0xFF,0x00,0x0F,0x08,0x08,0x4F,0x80,0x7F,0x00,0x00},/*"响",26*/
{0x00,0x04,0x04,0x74,0x54,0x54,0x55,0x56,0x54,0x54,0x54,0x74,0x04,0x04,0x00,0x00},
{0x08,0x08,0x08,0x09,0x09,0x49,0x89,0x7D,0x0D,0x0B,0x09,0x08,0x08,0x08,0x08,0x00},/*"享",27*/
{0x08,0x08,0x08,0xF8,0x08,0x08,0x00,0xF2,0x12,0x1A,0xD6,0x12,0x12,0xF2,0x02,0x00},
{0x10,0x30,0x10,0x0F,0x08,0x08,0x80,0x4F,0x20,0x18,0x07,0x10,0x20,0x4F,0x80,0x00},/*"项",28*/
{0x20,0x20,0x24,0x24,0xA4,0x7F,0x24,0x24,0x24,0x7F,0xA4,0x24,0x24,0x20,0x20,0x00},
{0x04,0x04,0x02,0x01,0x7F,0x89,0x89,0x89,0x89,0x89,0x9F,0x81,0xE2,0x04,0x04,0x00},/*"巷",29*/
{0x10,0x10,0xD0,0xFF,0x50,0x90,0x08,0x7C,0x4B,0xCA,0x6A,0x5A,0x4E,0x48,0x78,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x00,0x4A,0x4A,0x25,0x52,0x89,0x7E,0x04,0x1A,0x21,0x00},/*"橡",30*/
{0x00,0x80,0x60,0xF8,0x17,0x08,0x7C,0x4B,0xCA,0x6A,0x5A,0x4E,0x48,0x78,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x4A,0x4A,0x25,0x52,0x89,0x7E,0x04,0x1A,0x21,0x40,0x00},/*"像",31*/
{0x00,0xF8,0x08,0x08,0x0C,0xCA,0x49,0x48,0x48,0xC8,0x08,0x08,0x08,0xF8,0x00,0x00},
{0x00,0xFF,0x00,0x00,0x00,0x1F,0x08,0x08,0x08,0x1F,0x00,0x40,0x80,0x7F,0x00,0x00},/*"向",32*/
{0x10,0x08,0x7C,0x4A,0x4B,0xCA,0xEA,0x5A,0x4A,0x4A,0x4E,0x48,0x78,0x00,0x00,0x00},
{0x40,0x4A,0x4A,0x29,0x25,0x14,0x52,0x89,0x7E,0x04,0x0A,0x11,0x20,0x40,0x40,0x00},/*"象",33*/
{0x84,0x84,0xA4,0xA4,0xAF,0xA4,0xA4,0xF4,0xA4,0xA4,0xAF,0xA4,0xE4,0x84,0x84,0x00},
{0x80,0x40,0x3A,0x02,0x22,0x1A,0x02,0xFF,0x02,0x0A,0x32,0x02,0xFB,0x00,0x00,0x00},/*"萧",34*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0xE2,0x2C,0x20,0x3F,0x20,0x28,0xE6,0x00,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x00,0xFF,0x09,0x09,0x09,0x49,0x89,0x7F,0x00,0x00},/*"硝",35*/
{0x10,0x0C,0x05,0xD5,0x55,0x55,0x05,0xFF,0x05,0x55,0x55,0xD5,0x05,0x14,0x0C,0x00},
{0x00,0x00,0xFE,0x2A,0x2B,0x2A,0x2A,0x2B,0x2A,0x2A,0x2B,0xAA,0xFE,0x00,0x00,0x00},/*"霄",36*/
{0x00,0xE2,0x2C,0x20,0x3F,0x20,0x28,0xE6,0x00,0x00,0xF8,0x00,0x00,0xFF,0x00,0x00},
{0x00,0xFF,0x09,0x09,0x09,0x49,0x89,0x7F,0x00,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"削",37*/
{0x00,0xFC,0x04,0x04,0xFC,0x20,0x24,0x24,0x24,0xBF,0x64,0x24,0x38,0x26,0x20,0x00},
{0x00,0x0F,0x04,0x04,0x1F,0x08,0x05,0x0B,0x49,0x89,0x7D,0x0B,0x09,0x08,0x08,0x00},/*"哮",38*/
{0x10,0x10,0x17,0xD5,0x55,0x55,0x57,0x70,0x57,0x55,0x55,0xD5,0x17,0x10,0x10,0x00},
{0x00,0x08,0xE8,0xA9,0xA4,0xA4,0xE2,0x01,0xE2,0xA2,0xA4,0xA5,0xE8,0x00,0x00,0x00},/*"嚣",39*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0xE2,0x2C,0x20,0x3F,0x20,0x28,0xE6,0x00,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x00,0xFF,0x09,0x09,0x09,0x49,0x89,0x7F,0x00,0x00},/*"销",40*/
{0x10,0x60,0x02,0x0C,0xC0,0x00,0xE2,0x2C,0x20,0x3F,0x20,0x28,0xE6,0x00,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x00,0x00,0xFF,0x09,0x09,0x09,0x49,0x89,0x7F,0x00,0x00,0x00},/*"消",41*/
{0x10,0x0C,0x04,0x94,0xA4,0x84,0x85,0xF6,0x84,0x84,0xA4,0x94,0x04,0x14,0x0C,0x00},
{0x00,0x00,0x00,0xFF,0x0A,0x0A,0x0A,0x0A,0x0A,0x4A,0x8A,0x7F,0x00,0x00,0x00,0x00},/*"宵",42*/
{0x10,0x60,0x02,0x8C,0x50,0x50,0x49,0xCA,0x74,0x44,0x4A,0x49,0x50,0x40,0x40,0x00},
{0x04,0x04,0x7E,0x01,0x04,0x02,0xFF,0x15,0x15,0x15,0x55,0x95,0x7F,0x00,0x00,0x00},/*"淆",43*/
{0x00,0xFC,0x84,0x84,0xFC,0x00,0x88,0x88,0x4F,0x58,0x24,0x54,0x84,0xE4,0x00,0x00},
{0x00,0x3F,0x10,0x10,0x3F,0x80,0x42,0x32,0x0E,0x02,0x02,0x3E,0x42,0x42,0x72,0x00},/*"晓",44*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
};
#endif