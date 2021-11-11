/*第19区
19 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 场 尝 常 长 偿 肠 厂 敞 畅
１ 唱 倡 超 抄 钞 朝 嘲 潮 巢 吵
２ 炒 车 扯 撤 掣 彻 澈 郴 臣 辰
３ 尘 晨 忱 沉 陈 趁 衬 撑 称 城
４ 橙 成 呈 乘 程 惩 澄 诚 承 逞
５ 骋 秤 吃 痴 持 匙 池 迟 弛 驰
６ 耻 齿 侈 尺 赤 翅 斥 炽 充 冲
７ 虫 崇 宠 抽 酬 畴 踌 稠 愁 筹
８ 仇 绸 瞅 丑 臭 初 出 橱 厨 躇
９ 锄 雏 滁 除 楚
19 th           0x002580-0x0031ff               9600-12799
*/
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr   0x002580
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x20,0x20,0xFF,0x20,0x20,0x00,0x42,0xE2,0x52,0x4A,0xC6,0x42,0x40,0xC0,0x00,0x00},
{0x10,0x30,0x1F,0x08,0x28,0x10,0x8C,0x43,0x20,0x18,0x47,0x80,0x40,0x3F,0x00,0x00},/*"场",0*/
{0x40,0x30,0x10,0x92,0x94,0x90,0x90,0x9F,0x90,0x90,0x94,0x92,0x10,0x50,0x30,0x00},
{0x00,0x04,0x44,0xE4,0x54,0x4C,0x44,0x44,0x44,0x44,0x54,0x64,0xC4,0x04,0x00,0x00},/*"尝",1*/
{0x20,0x18,0x08,0xEA,0xAC,0xA8,0xA8,0xAF,0xA8,0xA8,0xAC,0xEA,0x08,0x28,0x18,0x00},
{0x00,0x00,0x3E,0x02,0x02,0x02,0x02,0xFF,0x02,0x02,0x12,0x22,0x1E,0x00,0x00,0x00},/*"常",2*/
{0x80,0x80,0x80,0x80,0xFF,0x80,0x80,0xA0,0x90,0x88,0x84,0x82,0x80,0x80,0x80,0x00},
{0x00,0x00,0x00,0x00,0xFF,0x40,0x21,0x12,0x04,0x08,0x10,0x20,0x20,0x40,0x40,0x00},/*"长",3*/
{0x00,0x80,0x60,0xF8,0x47,0x30,0x12,0x94,0x90,0x9F,0x90,0x94,0x12,0x50,0x30,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x44,0xE4,0x54,0x4C,0x44,0x44,0x54,0x64,0xC4,0x00,0x00},/*"偿",4*/
{0x00,0x00,0xFE,0x22,0x22,0xFE,0x00,0x42,0xE2,0x52,0x4A,0xC6,0x42,0x40,0xC0,0x00},
{0x80,0x60,0x1F,0x42,0x82,0x7F,0x10,0x8C,0x43,0x20,0x18,0x47,0x80,0x40,0x3F,0x00},/*"肠",5*/
{0x00,0x00,0xFE,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x00},
{0x80,0x60,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"厂",6*/
{0x00,0xE2,0x2C,0x20,0x3F,0x20,0x28,0xE6,0x80,0x70,0x8F,0x08,0x08,0xF8,0x08,0x00},
{0x00,0xFF,0x00,0x1F,0x11,0x5F,0x80,0x7F,0x80,0x40,0x33,0x0C,0x33,0x40,0x80,0x00},/*"敞",7*/
{0x00,0xF8,0x48,0xFF,0x48,0xF8,0x00,0x42,0x62,0xD2,0x4A,0xC6,0x42,0xC0,0x00,0x00},
{0x00,0x0F,0x04,0xFF,0x04,0x0F,0x00,0x44,0x22,0x11,0x4C,0x83,0x40,0x3F,0x00,0x00},/*"畅",8*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0x00,0x7F,0x49,0x49,0x49,0x49,0x7F,0x00,0x00,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"唱",0*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0x00,0x7F,0x49,0x49,0x49,0x49,0x7F,0x00,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"倡",1*/
{0x40,0x48,0x48,0x48,0xFF,0x48,0x48,0x42,0xA2,0x9E,0x82,0xA2,0xC2,0xBE,0x00,0x00},
{0x80,0x60,0x1F,0x20,0x7F,0x44,0x44,0x40,0x4F,0x48,0x48,0x48,0x48,0x4F,0x40,0x00},/*"超",2*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xC0,0x38,0x00,0xFF,0x00,0x08,0x10,0x60,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x81,0x80,0x40,0x40,0x27,0x10,0x0C,0x03,0x00,0x00},/*"抄",3*/
{0x20,0x10,0x2C,0xE7,0x24,0x24,0x00,0xC0,0x38,0x00,0xFF,0x00,0x08,0x10,0x60,0x00},
{0x01,0x01,0x01,0x7F,0x21,0x11,0x81,0x80,0x40,0x40,0x27,0x10,0x0C,0x03,0x00,0x00},/*"钞",4*/
{0x04,0xF4,0x54,0x54,0x5F,0x54,0x54,0xF4,0x04,0x00,0xFE,0x22,0x22,0x22,0xFE,0x00},
{0x08,0x0B,0x09,0x09,0xFF,0x09,0x09,0x8B,0x48,0x30,0x0F,0x02,0x42,0x82,0x7F,0x00},/*"朝",5*/
{0xFC,0x04,0xFC,0x00,0xE4,0xA4,0xBF,0xA4,0xE4,0x00,0xFE,0x22,0x22,0xFE,0x00,0x00},
{0x0F,0x04,0x0F,0x10,0x13,0x12,0xFE,0x12,0x93,0x60,0x1F,0x42,0x82,0x7F,0x00,0x00},/*"嘲",6*/
{0x20,0xC2,0x0C,0x80,0x00,0xE4,0xA4,0xBF,0xA4,0xE4,0x00,0xFE,0x22,0x22,0xFE,0x00},
{0x04,0x04,0x7E,0x01,0x10,0x13,0x12,0xFE,0x12,0x93,0x60,0x1F,0x42,0x82,0x7F,0x00},/*"潮",7*/
{0x00,0x00,0xE4,0xAA,0xB1,0xA0,0xA4,0xEA,0xB1,0xA0,0xA4,0xAA,0xF1,0x00,0x00,0x00},
{0x88,0x88,0x4B,0x4A,0x2A,0x1A,0x0A,0xFF,0x0A,0x1A,0x2A,0x4A,0x4B,0x88,0x88,0x00},/*"巢",8*/
{0x00,0xFC,0x04,0x04,0xFC,0x80,0x60,0x18,0x00,0xFF,0x00,0x00,0x88,0x10,0x60,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x80,0x80,0x40,0x40,0x23,0x10,0x0C,0x03,0x00,0x00,0x00},/*"吵",9*/
{0x80,0x70,0x00,0xFF,0x20,0x10,0x00,0xC0,0x38,0x00,0xFF,0x00,0x08,0x10,0x60,0x00},
{0x80,0x60,0x18,0x07,0x08,0x30,0x81,0x80,0x40,0x40,0x27,0x10,0x0C,0x03,0x00,0x00},/*"炒",0*/
{0x00,0x08,0x88,0x48,0x28,0x18,0x0F,0xE8,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00},
{0x08,0x08,0x09,0x09,0x09,0x09,0x09,0xFF,0x09,0x09,0x09,0x09,0x09,0x08,0x08,0x00},/*"车",1*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xF8,0x00,0x00,0xFF,0x40,0x40,0x40,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x40,0x40,0x7F,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x00},/*"扯",2*/
{0x10,0x10,0xFF,0x10,0x20,0xB4,0xAD,0xA6,0xB4,0x64,0x40,0xB8,0x17,0xF0,0x10,0x00},
{0x42,0x82,0x7F,0x01,0x00,0xFF,0x0A,0x8A,0xFF,0x80,0x40,0x27,0x18,0x67,0x80,0x00},/*"撤",3*/
{0x08,0x0C,0xEB,0x2A,0x2A,0xFF,0x2A,0xAA,0xEA,0x00,0x1E,0x40,0x80,0x7F,0x00,0x00},
{0x00,0x20,0x28,0x2A,0x2A,0x2A,0xAA,0xFE,0x2A,0x2A,0x29,0x28,0x28,0x20,0x00,0x00},/*"掣",4*/
{0x10,0x88,0xC4,0x33,0x80,0x80,0xFE,0x40,0x44,0x04,0xFC,0x04,0x04,0xFC,0x00,0x00},
{0x01,0x00,0xFF,0x00,0x00,0x00,0x1F,0x88,0x44,0x30,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"彻",5*/
{0x10,0x60,0x02,0x8C,0x20,0xB4,0xAD,0xA6,0xB4,0x64,0x40,0xB8,0x17,0xF0,0x10,0x00},
{0x04,0x04,0x7E,0x01,0x00,0xFF,0x0A,0x8A,0xFF,0x80,0x40,0x27,0x18,0x67,0x80,0x00},/*"澈",6*/
{0x00,0x10,0x90,0xFF,0x10,0x00,0x90,0xFF,0x10,0x10,0x00,0xFE,0x42,0xB2,0x0E,0x00},
{0x08,0x06,0x01,0xFF,0x09,0x06,0x01,0xFF,0x01,0x02,0x00,0xFF,0x08,0x10,0x0F,0x00},/*"郴",7*/
{0x00,0x00,0xFE,0x22,0x22,0x22,0x22,0x3E,0x22,0x22,0x22,0x22,0xE2,0x02,0x00,0x00},
{0x00,0x00,0x7F,0x44,0x44,0x44,0x44,0x7C,0x44,0x44,0x44,0x44,0x47,0x40,0x00,0x00},/*"臣",8*/
{0x00,0x00,0xFE,0x82,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x82,0x00,0x00},
{0x40,0x30,0x0F,0x00,0x00,0xFF,0x40,0x20,0x03,0x04,0x08,0x14,0x22,0x40,0x40,0x00},/*"辰",9*/
{0x00,0x00,0xC0,0x5F,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x5F,0x40,0x40,0x00,0x00},
{0x80,0x60,0x1F,0x04,0xFD,0x85,0x45,0x0D,0x15,0x25,0x25,0x55,0x4D,0x84,0x84,0x00},/*"晨",0*/
{0x00,0xE0,0x00,0xFF,0x10,0x20,0x18,0x08,0x08,0xFF,0x08,0x08,0x28,0x18,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x80,0x40,0x20,0x18,0x07,0x00,0x3F,0x40,0x40,0x40,0x70,0x00},/*"忱",1*/
{0x10,0x60,0x02,0x8C,0x00,0x10,0x0C,0xC4,0x44,0x44,0x44,0xC4,0x04,0x14,0x0C,0x00},
{0x04,0x04,0x7E,0x01,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"沉",2*/
{0x00,0xFE,0x22,0x5A,0x86,0x08,0x88,0x68,0x18,0x0F,0xE8,0x08,0x08,0x08,0x08,0x00},
{0x00,0xFF,0x04,0x08,0x07,0x20,0x11,0x0D,0x41,0x81,0x7F,0x01,0x05,0x09,0x30,0x00},/*"陈",3*/
{0x40,0x48,0x48,0x48,0xFF,0x48,0x48,0x20,0x90,0x4C,0x23,0x8C,0x10,0x20,0x40,0x00},
{0x80,0x60,0x1F,0x20,0x7F,0x44,0x44,0x40,0x44,0x62,0x51,0x48,0x44,0x42,0x40,0x00},/*"趁",4*/
{0x08,0x08,0x89,0xEA,0x18,0x88,0x00,0x10,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x00},
{0x02,0x01,0x00,0xFF,0x01,0x06,0x00,0x01,0x06,0x40,0x80,0x7F,0x00,0x00,0x00,0x00},/*"衬",5*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x0C,0x05,0x76,0x54,0x57,0x54,0xF6,0x85,0x0C,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x10,0x15,0x55,0x95,0x7F,0x15,0x14,0x14,0x10,0x00},/*"撑",6*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x40,0x30,0x0F,0x08,0xC8,0x08,0x08,0x28,0x18,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x02,0x10,0x0C,0x43,0x80,0x7F,0x00,0x01,0x06,0x18,0x00},/*"称",7*/
{0x20,0x20,0xFF,0x20,0x20,0xF8,0x88,0x88,0x88,0x08,0xFF,0x08,0x09,0xCA,0x08,0x00},
{0x10,0x30,0x1F,0x88,0x68,0x1F,0x10,0x20,0x9F,0x40,0x27,0x18,0x26,0x41,0xF0,0x00},/*"城",8*/
{0x10,0x10,0xD0,0xFF,0x90,0x42,0x2A,0x52,0x4E,0x40,0x47,0x58,0x24,0x52,0x88,0x00},
{0x04,0x03,0x00,0xFF,0x40,0x41,0x5F,0x69,0x49,0x49,0x49,0x69,0x5F,0x40,0x40,0x00},/*"橙",0*/
{0x00,0x00,0xF8,0x88,0x88,0x88,0x88,0x08,0x08,0xFF,0x08,0x09,0x0A,0xC8,0x08,0x00},
{0x80,0x60,0x1F,0x00,0x10,0x20,0x1F,0x80,0x40,0x21,0x16,0x18,0x26,0x41,0xF8,0x00},/*"成",1*/
{0x00,0x00,0x00,0x3E,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x3E,0x00,0x00,0x00,0x00},
{0x40,0x41,0x49,0x49,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0x49,0x49,0x41,0x40,0x00},/*"呈",2*/
{0x40,0x48,0x4A,0x4A,0xEA,0x0A,0x0A,0xFE,0x09,0x09,0xE9,0x49,0x49,0x28,0x80,0x00},
{0x22,0x22,0x11,0x11,0x0B,0x04,0x02,0xFF,0x02,0x04,0x09,0x12,0x12,0x22,0x23,0x00},/*"乘",3*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x00,0x3E,0x22,0x22,0x22,0x22,0x22,0x3E,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x06,0x40,0x49,0x49,0x49,0x7F,0x49,0x49,0x49,0x41,0x00},/*"程",4*/
{0x88,0x44,0x22,0xF1,0x08,0x00,0x02,0xFA,0x02,0x02,0xFE,0x12,0x12,0x12,0x02,0x00},
{0x40,0x30,0x00,0x03,0x38,0x41,0x41,0x45,0x59,0x41,0x41,0x71,0x01,0x09,0x31,0x00},/*"惩",5*/
{0x10,0x60,0x02,0xCC,0x80,0x42,0x2A,0x52,0x4E,0x40,0x47,0x58,0x24,0x52,0x88,0x00},
{0x04,0x04,0x7E,0x01,0x40,0x40,0x5F,0x69,0x49,0x49,0x49,0x69,0x5F,0x40,0x40,0x00},/*"澄",6*/
{0x40,0x42,0xCC,0x00,0x00,0xF8,0x88,0x88,0x88,0x08,0xFF,0x08,0x09,0xCA,0x08,0x00},
{0x00,0x00,0x3F,0x90,0x68,0x1F,0x10,0x20,0x9F,0x40,0x27,0x18,0x26,0x41,0xF0,0x00},/*"诚",7*/
{0x00,0x10,0x10,0x91,0x71,0x21,0x21,0xF9,0x25,0x23,0x71,0xA0,0x10,0x08,0x00,0x00},
{0x10,0x08,0x06,0x01,0x08,0x49,0x89,0x7F,0x09,0x09,0x08,0x01,0x06,0x08,0x10,0x00},/*"承",8*/
{0x40,0x40,0x42,0xCC,0x00,0x40,0x5F,0x51,0x51,0xD1,0x51,0x51,0x5F,0x40,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x50,0x52,0x52,0x52,0x5F,0x52,0x52,0x52,0x50,0x40,0x00},/*"逞",9*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x00,0x7C,0x54,0x54,0x7F,0x54,0x54,0x7C,0x00,0x00},
{0x08,0x18,0x48,0x84,0x44,0x3F,0x01,0x0D,0x0B,0x09,0x49,0x89,0x49,0x39,0x01,0x00},/*"骋",0*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x00,0x12,0x62,0x02,0xFE,0x02,0x42,0x32,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x06,0x01,0x01,0x01,0x01,0xFF,0x01,0x01,0x01,0x01,0x00},/*"秤",1*/
{0x00,0xFC,0x04,0x04,0xFC,0x20,0x10,0x4C,0x4B,0x48,0x48,0x48,0xC8,0x08,0x08,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0x30,0x48,0x44,0x42,0x42,0x41,0x40,0x40,0x70,0x00},/*"吃",2*/
{0x10,0x60,0x00,0xFC,0x84,0x44,0x3C,0xE4,0x25,0x06,0xE4,0x24,0x24,0xE4,0x04,0x00},
{0x84,0x42,0x31,0x0F,0x82,0x42,0x32,0x0F,0x32,0x02,0x7F,0x20,0x20,0x7F,0x00,0x00},/*"痴",3*/
{0x10,0x10,0x10,0xFF,0x10,0x10,0x40,0x48,0x48,0x48,0x7F,0x48,0xC8,0x48,0x40,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x02,0x02,0x0A,0x12,0x42,0x82,0x7F,0x02,0x02,0x00},/*"持",4*/
{0x80,0x80,0xBE,0xAA,0xAA,0xAA,0xBE,0x80,0x00,0xFE,0x40,0x20,0x10,0x08,0x00,0x00},
{0x80,0x60,0x1C,0x20,0x7F,0x44,0x44,0x44,0x40,0x47,0x48,0x48,0x48,0x4F,0x40,0x00},/*"匙",5*/
{0x10,0x60,0x02,0xCC,0x80,0x80,0xFC,0x40,0x20,0xFF,0x10,0x08,0xF8,0x00,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x00,0x3F,0x40,0x40,0x4F,0x40,0x44,0x47,0x40,0x78,0x00},/*"池",6*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0xFE,0x22,0x22,0xA2,0x22,0x7E,0x00,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x48,0x46,0x41,0x40,0x40,0x40,0x41,0x42,0x4C,0x40,0x00},/*"迟",7*/
{0x02,0xE2,0x22,0x22,0x3E,0x00,0x80,0xF8,0x80,0x40,0xFF,0x20,0x10,0xF0,0x00,0x00},
{0x00,0x43,0x82,0x42,0x3E,0x00,0x00,0x3F,0x40,0x40,0x5F,0x42,0x44,0x43,0x78,0x00},/*"弛",8*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x80,0xF8,0x80,0x40,0xFF,0x20,0x10,0xF0,0x00,0x00},
{0x08,0x18,0x48,0x84,0x44,0x3F,0x00,0x3F,0x40,0x40,0x5F,0x42,0x44,0x43,0x78,0x00},/*"驰",9*/
{0x02,0x02,0xFE,0x92,0x92,0xFE,0x02,0x02,0xF8,0x00,0x00,0xFF,0x40,0x40,0x40,0x00},
{0x08,0x18,0x0F,0x08,0x04,0xFF,0x04,0x40,0x7F,0x40,0x40,0x7F,0x40,0x40,0x40,0x00},/*"耻",0*/
{0x40,0x40,0x40,0x7C,0x40,0x40,0x40,0x7F,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},
{0x00,0x00,0x7F,0x40,0x50,0x48,0x44,0x43,0x44,0x48,0x50,0x40,0xFF,0x00,0x00,0x00},/*"齿",1*/
{0x80,0x60,0xF8,0x07,0x00,0x10,0x88,0x94,0x67,0x24,0x94,0x4C,0x04,0x00,0x00,0x00},
{0x00,0x00,0xFF,0x00,0x81,0x89,0x88,0x44,0x4A,0x31,0x11,0x09,0x05,0x03,0x00,0x00},/*"侈",2*/
{0x00,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0xC2,0x42,0x42,0x42,0x7E,0x00,0x00,0x00},
{0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x03,0x0C,0x10,0x20,0x40,0x80,0x80,0x00},/*"尺",3*/
{0x40,0x40,0x48,0x48,0x48,0xC8,0x48,0x7F,0x48,0xC8,0x48,0x48,0x48,0x40,0x40,0x00},
{0x10,0x08,0x86,0x40,0x30,0x0F,0x00,0x40,0x80,0x7F,0x00,0x00,0x02,0x04,0x18,0x00},/*"赤",4*/
{0x48,0xC8,0x48,0x7F,0x48,0xC8,0x08,0x12,0xA2,0xFE,0x00,0x12,0xA2,0xFE,0x00,0x00},
{0x80,0x41,0x26,0x18,0x16,0x21,0x40,0x49,0x50,0x4F,0x40,0x49,0x50,0x4F,0x40,0x00},/*"翅",5*/
{0x00,0x00,0x00,0xFC,0x44,0x44,0x44,0x44,0x42,0xC2,0x42,0x43,0x42,0x40,0x40,0x00},
{0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x02,0x02,0xFF,0x04,0x08,0x10,0x00,0x00,0x00},/*"斥",6*/
{0x80,0x70,0x00,0xFF,0x20,0x10,0x00,0xFC,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,0x00},
{0x80,0x60,0x18,0x07,0x08,0xB0,0x40,0x23,0x19,0x01,0x01,0x09,0x11,0x23,0xC0,0x00},/*"炽",7*/
{0x04,0x04,0x84,0xC4,0xA4,0x9C,0x85,0x86,0x84,0x84,0xA4,0xC4,0x84,0x04,0x04,0x00},
{0x00,0x80,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x7F,0x80,0x80,0x81,0xF0,0x00,0x00},/*"充",8*/
{0x00,0x02,0x0C,0xC0,0x00,0xF0,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0xF0,0x00,0x00},
{0x02,0x02,0x7F,0x00,0x00,0x0F,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x0F,0x00,0x00},/*"冲",9*/
{0x00,0x00,0xF8,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0xF8,0x00,0x00,0x00},
{0x00,0x40,0x43,0x41,0x41,0x41,0x41,0x3F,0x21,0x21,0x21,0x29,0x33,0x60,0x00,0x00},/*"虫",0*/
{0x00,0xC0,0x4E,0x48,0x48,0x48,0x58,0x6F,0x48,0x48,0x48,0x48,0x4E,0x40,0xC0,0x00},
{0x01,0x44,0x24,0x15,0x05,0x45,0x85,0x7D,0x05,0x05,0x05,0x15,0x24,0x45,0x00,0x00},/*"崇",1*/
{0x90,0x8C,0x84,0x84,0x84,0xF4,0x85,0x86,0x84,0x84,0x94,0xE4,0x84,0x94,0x8C,0x00},
{0x80,0x40,0x20,0x18,0x06,0x81,0x80,0x40,0x7F,0x90,0x88,0x84,0x82,0x80,0xF0,0x00},/*"宠",2*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xF0,0x10,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0xFF,0x42,0x42,0x7F,0x42,0x42,0xFF,0x00,0x00},/*"抽",3*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x80,0x40,0xFE,0x80,0xFC,0x40,0xFF,0x00,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x80,0x40,0x3F,0x00,0x3F,0x00,0xFF,0x00,0x00},/*"酬",4*/
{0xFC,0x44,0xFC,0x44,0xFC,0x00,0x44,0x54,0x54,0xF4,0x5F,0x54,0xD4,0x54,0x44,0x00},
{0x1F,0x08,0x0F,0x08,0x1F,0x20,0x10,0x0C,0x03,0x0A,0x52,0x82,0x7F,0x02,0x02,0x00},/*"畴",5*/
{0x00,0x3E,0x22,0xE2,0x22,0x3E,0x44,0x54,0x54,0xF4,0x5F,0x54,0xD4,0x54,0x44,0x00},
{0x20,0x3F,0x20,0x1F,0x11,0x31,0x10,0x0C,0x03,0x0A,0x52,0x82,0x7F,0x02,0x02,0x00},/*"踌",6*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x00,0xFE,0x42,0x52,0x7E,0x52,0x42,0xFE,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x86,0x60,0x1F,0x00,0x0F,0x09,0x4F,0x80,0x7F,0x00,0x00},/*"稠",7*/
{0x10,0x92,0x52,0x32,0xFF,0x51,0x91,0x20,0x18,0xC0,0x3F,0xC0,0x10,0x0C,0x00,0x00},
{0x01,0x40,0x30,0x00,0x77,0x80,0x84,0x8A,0xB1,0x80,0xE0,0x00,0x11,0x62,0x04,0x00},/*"愁",8*/
{0x08,0x24,0xA3,0xA2,0xA6,0xAA,0xE2,0xBA,0xA4,0xA3,0xA2,0xA6,0xAA,0x22,0x02,0x00},
{0x42,0x22,0x12,0x0A,0x0E,0x1B,0x2A,0x0A,0x4A,0x8A,0x7E,0x0A,0x0A,0x0A,0x02,0x00},/*"筹",9*/
{0x00,0x80,0x60,0xF8,0x07,0x10,0x10,0xFF,0x10,0x10,0x10,0xF0,0x00,0x00,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x40,0x20,0x18,0x07,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"仇",0*/
{0x20,0x30,0xAC,0x63,0x30,0x00,0xFE,0x82,0x92,0x92,0xFE,0x92,0x92,0x82,0xFE,0x00},
{0x22,0x67,0x22,0x12,0x12,0x80,0x7F,0x00,0x1E,0x12,0x12,0x12,0x5E,0x80,0x7F,0x00},/*"绸",1*/
{0xFC,0x24,0x24,0xFC,0x00,0x44,0x44,0xFE,0x43,0x82,0x70,0x00,0xFF,0x40,0x30,0x00},
{0x3F,0x11,0x11,0x3F,0x10,0x0C,0x03,0xFF,0x02,0x84,0x60,0x1C,0x03,0x7C,0x80,0x00},/*"瞅",2*/
{0x00,0x00,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0xFE,0x00,0x00,0x00,0x00},
{0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x00},/*"丑",3*/
{0x00,0x00,0xFC,0x54,0x54,0x56,0x55,0x54,0x54,0x54,0x54,0x54,0xFC,0x00,0x00,0x00},
{0x88,0x88,0x89,0x49,0x49,0x29,0x19,0x0F,0x19,0x29,0x4B,0x4D,0x89,0x88,0x88,0x00},/*"臭",4*/
{0x08,0x08,0x89,0xEA,0x18,0x88,0x00,0x04,0x04,0xFC,0x04,0x04,0x04,0xFC,0x00,0x00},
{0x02,0x01,0x00,0xFF,0x01,0x86,0x40,0x20,0x18,0x07,0x40,0x80,0x40,0x3F,0x00,0x00},/*"初",5*/
{0x00,0x00,0x7C,0x40,0x40,0x40,0x40,0xFF,0x40,0x40,0x40,0x40,0xFC,0x00,0x00,0x00},
{0x00,0x7C,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0xFC,0x00,0x00},/*"出",6*/
{0x10,0x90,0xFF,0x90,0x00,0xFE,0x12,0xD2,0x52,0xD2,0x12,0x42,0x42,0xFA,0x42,0x00},
{0x06,0x01,0xFF,0x00,0x41,0x3F,0x40,0x4B,0x32,0x2B,0x20,0x42,0x84,0x7F,0x00,0x00},/*"橱",7*/
{0x00,0x00,0xFE,0x0A,0xEA,0x2A,0x2A,0xEA,0x0A,0x42,0x42,0x42,0xFE,0x42,0x42,0x00},
{0x80,0x60,0x1F,0x40,0xCB,0x52,0x32,0x2B,0x20,0x02,0x44,0x80,0x7F,0x00,0x00,0x00},/*"厨",8*/
{0x00,0x3E,0x22,0xE2,0x3E,0x00,0x04,0x24,0x2F,0x24,0xFC,0x24,0xAF,0x44,0x34,0x00},
{0x20,0x3F,0x20,0x1F,0x12,0x22,0x11,0x09,0xFD,0x57,0x55,0x55,0x55,0xFD,0x01,0x00},/*"躇",9*/
{0x40,0x30,0xEF,0x24,0x24,0x00,0xFC,0x44,0x44,0xFC,0x00,0x10,0xFF,0x10,0xF0,0x00},
{0x01,0x01,0x7F,0x21,0x11,0x40,0x7F,0x22,0x22,0x3F,0x90,0x60,0x1F,0x80,0xFF,0x00},/*"锄",0*/
{0x50,0x48,0x47,0x44,0x64,0x54,0xEC,0x10,0xFC,0x4B,0x48,0xF9,0x4A,0x48,0x08,0x00},
{0x20,0x22,0x22,0x22,0x22,0x22,0x7F,0x00,0xFF,0x22,0x22,0x3F,0x22,0x22,0x20,0x00},/*"雏",1*/
{0x08,0x31,0x86,0x00,0xFE,0x22,0x5A,0x86,0x20,0x10,0x2C,0xE3,0x2C,0x10,0x20,0x00},
{0x04,0x7E,0x01,0x00,0xFF,0x04,0x08,0x27,0x11,0x4D,0x81,0x7F,0x05,0x09,0x31,0x00},/*"滁",2*/
{0x00,0xFE,0x22,0x5A,0x86,0x20,0x10,0x28,0x24,0xE3,0x24,0x28,0x10,0x20,0x20,0x00},
{0x00,0xFF,0x04,0x08,0x27,0x11,0x0D,0x41,0x81,0x7F,0x01,0x05,0x09,0x31,0x00,0x00},/*"除",3*/
{0x40,0x44,0x24,0x14,0x7F,0x14,0x24,0x00,0x24,0x14,0x7F,0x14,0x24,0x44,0x00,0x00},
{0x80,0x41,0x21,0x1D,0x21,0x41,0x41,0x7F,0x49,0x49,0x49,0x49,0x49,0x43,0x40,0x00},/*"楚",4*/
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