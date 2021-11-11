/*第六区
   
31 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 俊 竣 浚 郡 骏 喀 咖 卡 咯
１ 开 揩 楷 凯 慨 刊 堪 勘 坎 砍
２ 看 康 慷 糠 扛 抗 亢 炕 考 拷
３ 烤 靠 坷 苛 柯 棵 磕 颗 科 壳
４ 咳 可 渴 克 刻 客 课 肯 啃 垦
５ 恳 坑 吭 空 恐 孔 控 抠 口 扣
６ 寇 枯 哭 窟 苦 酷 库 裤 夸 垮
７ 挎 跨 胯 块 筷 侩 快 宽 款 匡
８ 筐 狂 框 矿 眶 旷 况 亏 盔 岿
９ 窥 葵 奎 魁 傀
31 th           0x00bb80-0x00c7ff               48000-51199
*/
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0xbb80
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0x10,0x98,0x54,0x93,0x10,0x10,0x54,0x98,0x30,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x80,0x89,0x44,0x46,0x2B,0x12,0x2A,0x46,0x80,0x81,0x00},/*"俊",0*/
{0xC8,0x08,0x09,0x0E,0xE8,0x08,0x10,0x98,0x54,0x93,0x10,0x10,0x54,0x98,0x30,0x00},
{0x20,0x6F,0x20,0x1C,0x13,0x90,0x89,0x44,0x46,0x2B,0x12,0x2A,0x46,0x80,0x81,0x00},/*"竣",1*/
{0x10,0x60,0x02,0x8C,0x00,0x10,0x98,0x54,0x93,0x10,0x10,0x54,0x98,0x30,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x80,0x89,0x44,0x46,0x2B,0x12,0x2A,0x46,0x80,0x81,0x00,0x00},/*"浚",2*/
{0x10,0x92,0x92,0xFE,0x92,0x92,0x92,0xFE,0x10,0x10,0xFE,0x02,0x22,0xDA,0x06,0x00},
{0x08,0x04,0xFF,0x44,0x44,0x44,0x44,0xFC,0x00,0x00,0xFF,0x08,0x10,0x08,0x07,0x00},/*"郡",3*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x10,0x98,0x54,0x93,0x10,0x10,0x54,0x98,0x30,0x00},
{0x08,0x18,0x48,0x84,0x44,0xBF,0x89,0x44,0x46,0x2B,0x12,0x2A,0x46,0x80,0x81,0x00},/*"骏",4*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0x8C,0x44,0xB4,0x25,0x26,0xA4,0x64,0x04,0x0C,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x04,0x04,0xFA,0x4A,0x49,0x49,0x4A,0xFA,0x04,0x04,0x00},/*"喀",5*/
{0xFC,0x04,0x04,0xFC,0x10,0xFF,0x10,0x10,0xF0,0x00,0xF8,0x08,0x08,0xF8,0x00,0x00},
{0x0F,0x04,0x84,0x4F,0x30,0x0F,0x40,0x80,0x7F,0x00,0x7F,0x20,0x20,0x7F,0x00,0x00},/*"咖",6*/
{0x40,0x40,0x40,0x40,0x40,0x40,0xFF,0x44,0x44,0x44,0x44,0x44,0x44,0x40,0x40,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x02,0x04,0x08,0x10,0x00,0x00,0x00},/*"卡",7*/
{0x00,0xFC,0x04,0x04,0xFC,0x20,0x10,0x18,0xA7,0x44,0xA4,0x14,0x0C,0x00,0x00,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x04,0x02,0xFD,0x44,0x44,0x44,0x45,0xFD,0x02,0x02,0x00},/*"咯",8*/
{0x80,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x80,0x00},
{0x00,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00},/*"开",9*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0x7F,0x24,0x94,0x40,0x3F,0x48,0x44,0x72,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"揩",10*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0x7F,0x24,0x94,0x40,0x3F,0x48,0x44,0x72,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x00,0xFF,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00},/*"楷",11*/
{0x5E,0x50,0x50,0x5F,0x50,0x50,0xDE,0x00,0xFE,0x02,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x7E,0x42,0x22,0x22,0x12,0x93,0x60,0x1F,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"凯",12*/
{0xE0,0x00,0xFF,0x10,0x20,0xFE,0x92,0x92,0xFE,0x00,0xF2,0x82,0xFE,0x82,0x82,0x00},
{0x01,0x00,0xFF,0x00,0x00,0x3F,0x10,0x0A,0x9C,0x60,0x18,0x07,0x3E,0x40,0x70,0x00},/*"慨",13*/
{0x80,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x80,0x00,0xF8,0x00,0x00,0xFF,0x00,0x00},
{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"刊",14*/
{0x20,0x20,0x20,0xFF,0x20,0x20,0x04,0x04,0xFF,0x54,0x54,0x54,0xFF,0x04,0x04,0x00},
{0x10,0x30,0x10,0x0F,0x08,0x08,0x02,0x7E,0x53,0x4A,0x42,0x42,0x4B,0x52,0x42,0x00},/*"堪",15*/
{0x04,0x04,0xFF,0x54,0x54,0x54,0xFF,0x04,0x10,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00},
{0x02,0x7E,0x53,0x4A,0x42,0x4A,0xD3,0x42,0x20,0x18,0x47,0x80,0x40,0x3F,0x00,0x00},/*"勘",16*/
{0x20,0x20,0x20,0xFF,0x20,0xA0,0x40,0x30,0x0F,0xC8,0x08,0x08,0x28,0x18,0x00,0x00},
{0x10,0x30,0x10,0x0F,0x88,0x48,0x20,0x18,0x06,0x01,0x06,0x18,0x20,0x40,0x80,0x00},/*"坎",17*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x40,0x30,0x0F,0xC8,0x08,0x28,0x18,0x00,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x80,0x40,0x30,0x0E,0x01,0x0E,0x30,0x40,0x80,0x00},/*"砍",18*/
{0x20,0x22,0x2A,0x2A,0xAA,0x6A,0x3A,0x2E,0x29,0x29,0x29,0x29,0x29,0x20,0x20,0x00},
{0x08,0x04,0x02,0x01,0xFF,0x55,0x55,0x55,0x55,0x55,0x55,0xFF,0x00,0x00,0x00,0x00},/*"看",19*/
{0x00,0x00,0xFC,0x44,0x54,0x54,0x54,0x55,0xFE,0x54,0x54,0x54,0xF4,0x44,0x44,0x00},
{0x40,0x30,0x0F,0x40,0x23,0x15,0x49,0x81,0x7F,0x05,0x09,0x11,0x29,0x44,0x40,0x00},/*"康",20*/
{0xE0,0x00,0xFF,0x10,0x20,0xFC,0x44,0x54,0x54,0x55,0xFE,0x54,0x54,0xF4,0x44,0x00},
{0x01,0x00,0xFF,0x40,0x30,0x0F,0x20,0x15,0x49,0x85,0x7F,0x09,0x11,0x29,0x24,0x00},/*"慷",21*/
{0x44,0x58,0xC0,0xFF,0x50,0x4C,0x00,0xFC,0x44,0x54,0x55,0xFE,0x54,0xF4,0x44,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x86,0x60,0x1F,0x44,0x29,0x91,0xFF,0x11,0x29,0x44,0x00},/*"糠",22*/
{0x10,0x10,0x10,0xFF,0x10,0x10,0x90,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x01,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x00},/*"扛",23*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x08,0xC8,0x49,0x4E,0x48,0xC8,0x08,0x08,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x80,0x60,0x1F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"抗",24*/
{0x08,0x08,0x08,0x08,0xC8,0x48,0x49,0x4E,0x48,0x48,0xC8,0x08,0x08,0x08,0x08,0x00},
{0x00,0x80,0x40,0x30,0x0F,0x00,0x00,0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x78,0x00},/*"亢",25*/
{0x80,0x70,0x00,0xFF,0x20,0x10,0x08,0xC8,0x49,0x4E,0x48,0xC8,0x08,0x08,0x00,0x00},
{0x80,0x60,0x18,0x07,0x08,0xB0,0x60,0x1F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"炕",26*/
{0x20,0x20,0x24,0x24,0x24,0x24,0xBF,0x64,0x24,0x34,0x28,0x24,0x22,0x20,0x20,0x00},
{0x10,0x08,0x04,0x02,0x01,0x0D,0x0B,0x09,0x49,0x89,0x49,0x39,0x01,0x00,0x00,0x00},/*"考",27*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x20,0x24,0xA4,0x7F,0x24,0x34,0x28,0x26,0x20,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x04,0x02,0x01,0x0D,0x0B,0x49,0x89,0x49,0x39,0x01,0x00},/*"拷",28*/
{0x80,0x70,0x00,0xFF,0x20,0x10,0x20,0x24,0xA4,0x7F,0x24,0x34,0x28,0x26,0x20,0x00},
{0x80,0x60,0x18,0x07,0x08,0x34,0x02,0x01,0x0D,0x0B,0x49,0x89,0x49,0x39,0x01,0x00},/*"烤",29*/
{0x08,0x08,0x0C,0xEB,0xAA,0xAA,0xAA,0xAF,0xAA,0xAA,0xAA,0xEA,0x08,0x08,0x08,0x00},
{0x00,0x22,0x2A,0x2A,0x2A,0xFF,0x00,0x00,0x00,0xFF,0x2A,0x2A,0x2A,0x22,0x00,0x00},/*"靠",30*/
{0x20,0x20,0xFF,0x20,0x20,0x04,0xE4,0x24,0x24,0xE4,0x04,0x04,0xFC,0x04,0x04,0x00},
{0x10,0x30,0x1F,0x08,0x08,0x00,0x0F,0x04,0x04,0x0F,0x40,0x80,0x7F,0x00,0x00,0x00},/*"坷",31*/
{0x04,0x24,0x24,0x24,0x2F,0x24,0x24,0x24,0x24,0x24,0x2F,0xE4,0x24,0x24,0x04,0x00},
{0x00,0x00,0x00,0x1F,0x09,0x09,0x09,0x1F,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00},/*"苛",32*/
{0x10,0x10,0xD0,0xFF,0x90,0x14,0xE4,0x24,0x24,0xE4,0x04,0x04,0xFC,0x04,0x04,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x0F,0x04,0x04,0x0F,0x40,0x80,0x7F,0x00,0x00,0x00},/*"柯",33*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x22,0x00},/*"棵",34*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x20,0xA4,0x64,0x3F,0x24,0x24,0xA4,0x20,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x40,0x7D,0x45,0x7D,0x45,0x7D,0x45,0x7D,0x43,0x00},/*"磕",35*/
{0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0xF2,0x1A,0xD6,0x12,0xF2,0x02,0x00},
{0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x80,0x4F,0x30,0x0F,0x20,0x4F,0x80,0x00},/*"颗",36*/
{0x24,0x24,0xA4,0xFE,0xA3,0x22,0x00,0x22,0xCC,0x00,0x00,0xFF,0x00,0x00,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x00,0x01,0x04,0x04,0x04,0x04,0x04,0xFF,0x02,0x02,0x02,0x00},/*"科",37*/
{0x00,0x84,0x84,0xA4,0xA4,0xA4,0xA4,0xBF,0xA4,0xA4,0xA4,0xA4,0x84,0x84,0x80,0x00},
{0x82,0x81,0x40,0x20,0x1C,0x04,0x04,0x04,0x04,0x04,0x7C,0x80,0x80,0x82,0xE1,0x00},/*"壳",38*/
{0xFC,0x04,0x04,0xFC,0x00,0x08,0x88,0xC8,0xA8,0x99,0x8E,0x88,0x48,0x28,0x08,0x00},
{0x0F,0x04,0x04,0x0F,0x00,0x88,0x88,0x44,0x44,0x22,0x11,0x28,0x44,0x82,0x01,0x00},/*"咳",39*/
{0x00,0x02,0x02,0xF2,0x12,0x12,0x12,0xF2,0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0x00},
{0x00,0x00,0x00,0x0F,0x04,0x04,0x04,0x0F,0x00,0x40,0x80,0x7F,0x00,0x00,0x00,0x00},/*"可",40*/
{0x10,0x60,0x02,0x0C,0xC0,0x00,0xBE,0xEA,0xAA,0xAA,0xAA,0xAA,0xBE,0x80,0x00,0x00},
{0x04,0x04,0x7C,0x03,0x00,0x01,0x1E,0x10,0x14,0x13,0x54,0x90,0x40,0x3F,0x00,0x00},/*"渴",41*/
{0x04,0x04,0xE4,0x24,0x24,0x24,0x24,0x3F,0x24,0x24,0x24,0x24,0xE4,0x04,0x04,0x00},
{0x80,0x80,0x43,0x22,0x12,0x0E,0x02,0x02,0x02,0x7E,0x82,0x82,0x83,0x80,0xE0,0x00},/*"克",42*/
{0x08,0x88,0xC8,0xA9,0x9A,0x88,0x88,0x68,0x08,0x00,0xF8,0x00,0x00,0xFF,0x00,0x00},
{0x90,0x90,0x48,0x24,0x12,0x19,0x24,0x42,0x80,0x00,0x0F,0x40,0x80,0x7F,0x00,0x00},/*"刻",43*/
{0x10,0x0C,0x84,0x44,0xB4,0xA4,0x25,0x26,0x24,0xA4,0x64,0x24,0x04,0x14,0x0C,0x00},
{0x04,0x04,0x04,0xFA,0x4A,0x4A,0x49,0x49,0x49,0x4A,0x4A,0xFA,0x04,0x04,0x04,0x00},/*"客",44*/
{0x40,0x42,0xCC,0x00,0x00,0x00,0xFE,0x92,0x92,0xFE,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x00,0x00,0x3F,0x10,0x08,0x22,0x12,0x0A,0x06,0xFF,0x06,0x0A,0x12,0x22,0x20,0x00},/*"课",45*/
{0x20,0x20,0x20,0xBC,0xA0,0xA0,0xA0,0xBF,0xA4,0xA4,0xA4,0xA4,0x24,0x20,0x20,0x00},
{0x00,0x00,0x00,0xFF,0x0A,0x0A,0x0A,0x0A,0x0A,0x4A,0x8A,0x7F,0x00,0x00,0x00,0x00},/*"肯",46*/
{0x00,0xFC,0x04,0x04,0xFC,0x20,0xA0,0xBE,0xA0,0xA0,0xBF,0xA4,0xA4,0xA4,0x20,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0xFF,0x0A,0x0A,0x0A,0x0A,0x4A,0x8A,0x7F,0x00,0x00},/*"啃",47*/
{0x00,0x00,0xFE,0x2A,0x2A,0x2A,0x6A,0xAA,0xAA,0x2A,0x2A,0xBE,0x40,0x00,0x00,0x00},
{0x40,0x40,0x4B,0x4A,0x49,0x49,0x48,0x7E,0x48,0x49,0x49,0x4A,0x4A,0x42,0x40,0x00},/*"垦",48*/
{0x00,0x00,0xFE,0x2A,0x2A,0x2A,0x6A,0xAA,0xAA,0x2A,0x2A,0xBE,0x40,0x00,0x00,0x00},
{0x40,0x30,0x03,0x02,0x39,0x41,0x40,0x44,0x58,0x41,0x41,0x72,0x02,0x0A,0x30,0x00},/*"恳",0*/
{0x20,0x20,0x20,0xFF,0x20,0x20,0x08,0xC8,0x49,0x4E,0x48,0xC8,0x08,0x08,0x00,0x00},
{0x10,0x30,0x10,0x0F,0x08,0x88,0x60,0x1F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"坑",1*/
{0x00,0xFC,0x04,0x04,0xFC,0x08,0x08,0xC8,0x49,0x4E,0x48,0xC8,0x08,0x08,0x00,0x00},
{0x00,0x0F,0x04,0x04,0x8F,0x40,0x30,0x0F,0x00,0x00,0x00,0x3F,0x40,0x40,0x78,0x00},/*"吭",2*/
{0x10,0x0C,0x44,0x24,0x14,0x04,0x05,0x06,0x04,0x04,0x14,0x24,0x44,0x14,0x0C,0x00},
{0x00,0x40,0x40,0x41,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0x40,0x40,0x00,0x00},/*"空",3*/
{0x80,0x82,0x82,0x7E,0x42,0x42,0x80,0x7E,0x12,0x22,0x02,0xFE,0x00,0x00,0xC0,0x00},
{0x40,0x31,0x00,0x00,0x3A,0x41,0x40,0x44,0x58,0x40,0x40,0x70,0x01,0x09,0x31,0x00},/*"恐",4*/
{0x00,0x02,0x02,0x02,0xF2,0x8A,0x46,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00},
{0x02,0x02,0x41,0x81,0x7F,0x00,0x00,0x00,0x00,0x3F,0x40,0x40,0x40,0x40,0x78,0x00},/*"孔",5*/
{0x10,0x10,0x10,0xFF,0x90,0x20,0x98,0x48,0x28,0x09,0x0E,0x28,0x48,0xA8,0x18,0x00},
{0x02,0x42,0x81,0x7F,0x00,0x40,0x40,0x42,0x42,0x42,0x7E,0x42,0x42,0x42,0x40,0x00},/*"控",6*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xFE,0x02,0x12,0x62,0x82,0x62,0x1A,0x02,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0x7F,0x50,0x48,0x46,0x41,0x46,0x58,0x40,0x00},/*"抠",7*/
{0x00,0x00,0xFC,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,0x00,0x00},
{0x00,0x00,0x7F,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x7F,0x00,0x00,0x00},/*"口",8*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xFC,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0x7F,0x20,0x20,0x20,0x20,0x20,0x7F,0x00,0x00},/*"扣",9*/
{0x10,0x0C,0x24,0x24,0x24,0x24,0x25,0x06,0x04,0x04,0xF4,0x24,0x24,0x14,0x0C,0x00},
{0x00,0x81,0x61,0x1F,0x01,0x7F,0x81,0x80,0xA1,0x95,0x89,0x95,0x83,0xF0,0x00,0x00},/*"寇",10*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0x10,0x10,0x10,0xFF,0x10,0x10,0x10,0x10,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x03,0x00,0xFF,0x41,0x41,0x41,0x41,0x41,0xFF,0x00,0x00},/*"枯",11*/
{0x00,0x00,0x3E,0x22,0x22,0x3E,0x00,0x80,0x00,0x3E,0x22,0xA2,0x3E,0x00,0x00,0x00},
{0x82,0x82,0x42,0x42,0x22,0x12,0x0A,0x07,0x0A,0x12,0x22,0x42,0x43,0x82,0x82,0x00},/*"哭",12*/
{0x10,0x0C,0xE4,0xB4,0xAC,0xA4,0xA5,0xA6,0xA4,0xA4,0xAC,0xB4,0xE4,0x14,0x0C,0x00},
{0x80,0x60,0x1F,0x00,0xE0,0x8E,0x88,0x88,0xFF,0x88,0x88,0x8E,0xE0,0x00,0x00,0x00},/*"窟",13*/
{0x84,0x84,0x84,0x84,0x9F,0x84,0x84,0xF4,0x84,0x84,0x9F,0x84,0x84,0x84,0x84,0x00},
{0x00,0x00,0x00,0xFC,0x44,0x44,0x44,0x47,0x44,0x44,0x44,0xFC,0x00,0x00,0x00,0x00},/*"苦",14*/
{0xF2,0x12,0xFE,0x12,0xFE,0x12,0xF2,0x00,0xA0,0x9E,0x88,0xFF,0x88,0x88,0x80,0x00},
{0xFF,0x4A,0x49,0x48,0x49,0x49,0xFF,0x00,0x00,0xFC,0x44,0x44,0x44,0xFC,0x00,0x00},/*"酷",15*/
{0x00,0x00,0xFC,0x24,0x24,0xA4,0x64,0x3D,0xA6,0x24,0x24,0x24,0x24,0x24,0x04,0x00},
{0x40,0x30,0x0F,0x10,0x13,0x12,0x12,0x12,0xFF,0x12,0x12,0x12,0x12,0x10,0x10,0x00},/*"库",16*/
{0x08,0x08,0x89,0xEA,0x18,0x88,0x00,0xFC,0x24,0x24,0xE4,0x3D,0xA6,0x24,0x24,0x00},
{0x02,0x01,0x00,0xFF,0x01,0x86,0x60,0x1F,0x10,0x13,0x12,0x12,0xFF,0x12,0x12,0x00},/*"裤",17*/
{0x80,0x84,0x44,0x24,0x14,0x2C,0x24,0x27,0x24,0x2C,0x14,0x24,0x44,0x84,0x80,0x00},
{0x00,0x00,0x01,0x01,0x0D,0x0B,0x09,0x09,0x49,0x89,0x49,0x39,0x01,0x00,0x00,0x00},/*"夸",18*/
{0x20,0x20,0xFF,0x20,0x60,0x44,0x24,0x54,0x4C,0x47,0x4C,0x54,0x24,0x44,0x40,0x00},
{0x10,0x30,0x1F,0x08,0x08,0x01,0x09,0x0D,0x0B,0x49,0x89,0x49,0x39,0x01,0x00,0x00},/*"垮",19*/
{0x10,0x10,0xFF,0x10,0x40,0x44,0x24,0x54,0x4C,0x47,0x4C,0x54,0x24,0x44,0x40,0x00},
{0x42,0x82,0x7F,0x01,0x00,0x01,0x09,0x0D,0x0B,0x49,0x89,0x49,0x39,0x01,0x00,0x00},/*"挎",20*/
{0x00,0x3E,0x22,0xE2,0x3E,0x40,0x44,0x24,0x54,0x4C,0x47,0x4C,0x54,0x24,0x44,0x00},
{0x20,0x3F,0x20,0x1F,0x12,0x02,0x01,0x09,0x0D,0x0B,0x49,0x89,0x49,0x39,0x01,0x00},/*"跨",21*/
{0x00,0x00,0xFE,0x22,0x22,0xFE,0x40,0x24,0x54,0x4C,0x47,0x4C,0x54,0x24,0x40,0x00},
{0x80,0x60,0x1F,0x42,0x82,0x7F,0x01,0x09,0x0D,0x0B,0x49,0x89,0x49,0x39,0x01,0x00},/*"胯",22*/
{0x20,0x20,0x20,0xFF,0x20,0x20,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0xF8,0x00,0x00},
{0x10,0x30,0x10,0x0F,0x88,0x48,0x21,0x11,0x0D,0x03,0x0D,0x11,0x21,0x41,0x81,0x00},/*"块",23*/
{0x10,0x08,0x04,0xE7,0x8C,0x14,0x04,0x54,0x48,0xE7,0x44,0x4C,0xD4,0x04,0x04,0x00},
{0x08,0x07,0x00,0xFF,0x00,0x81,0x44,0x24,0x14,0x0F,0x14,0x24,0x47,0x84,0x84,0x00},/*"筷",24*/
{0x00,0x80,0x60,0xF8,0x07,0x20,0x10,0x48,0x44,0x43,0x44,0x48,0x10,0x20,0x20,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x42,0xE2,0x52,0x4A,0x46,0x42,0x52,0x62,0xC2,0x00,0x00},/*"侩",25*/
{0x00,0xE0,0x00,0xFF,0x10,0x20,0x08,0x08,0x08,0xFF,0x08,0x08,0xF8,0x00,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x81,0x41,0x31,0x0D,0x03,0x0D,0x31,0x41,0x81,0x81,0x00},/*"快",26*/
{0x10,0x0C,0x24,0x24,0x24,0x74,0x25,0x26,0x24,0x74,0x24,0x24,0x24,0x14,0x0C,0x00},
{0x80,0x80,0x80,0x5F,0x41,0x21,0x11,0x0D,0x71,0x81,0x81,0x9F,0x80,0x80,0xE0,0x00},/*"宽",27*/
{0x04,0xA4,0xA4,0xA4,0xBF,0xA4,0xA4,0x04,0x20,0x18,0x0F,0xC8,0x08,0x28,0x18,0x00},
{0x22,0x1A,0x42,0x82,0x7E,0x02,0x0A,0xB2,0x40,0x30,0x0C,0x03,0x1C,0x60,0x80,0x00},/*"款",28*/
{0x00,0xFE,0x02,0x02,0x12,0x92,0x92,0x92,0xF2,0x92,0x92,0x92,0x12,0x02,0x00,0x00},
{0x00,0x7F,0x40,0x40,0x48,0x48,0x48,0x48,0x4F,0x48,0x48,0x48,0x48,0x40,0x40,0x00},/*"匡",29*/
{0x08,0x04,0xE3,0x22,0xA6,0xAA,0xA2,0xAA,0xA4,0xA3,0xA2,0xA6,0xAA,0xA2,0x22,0x00},
{0x00,0x00,0xFF,0x80,0xA0,0xA4,0xA4,0xA4,0xBF,0xA4,0xA4,0xA4,0xA4,0xA0,0x80,0x00},/*"筐",30*/
{0x40,0x22,0x14,0x08,0xF4,0x02,0x00,0x04,0x04,0x04,0xFC,0x04,0x04,0x04,0x00,0x00},
{0x08,0x44,0x82,0x41,0x3F,0x00,0x40,0x41,0x41,0x41,0x7F,0x41,0x41,0x41,0x40,0x00},/*"狂",31*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0xFE,0x12,0x92,0x92,0xF2,0x92,0x92,0x12,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x03,0x00,0x7F,0x48,0x48,0x48,0x4F,0x48,0x48,0x48,0x00},/*"框",32*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0x00,0xF8,0x08,0x09,0x0E,0x08,0x08,0x08,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x80,0x60,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"矿",33*/
{0x00,0xFC,0x24,0x24,0x24,0xFC,0x00,0xFE,0x12,0x92,0x92,0xF2,0x92,0x92,0x12,0x00},
{0x00,0x3F,0x11,0x11,0x11,0x3F,0x00,0x7F,0x48,0x48,0x48,0x4F,0x48,0x48,0x48,0x00},/*"眶",34*/
{0x00,0xFC,0x44,0x44,0xFC,0x00,0x00,0xF8,0x08,0x09,0x0E,0x08,0x08,0x08,0x08,0x00},
{0x00,0x1F,0x08,0x08,0x1F,0x80,0x60,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"旷",35*/
{0x00,0x02,0x0C,0xC0,0x00,0x7E,0x42,0xC2,0x42,0x42,0xC2,0x42,0x7E,0x00,0x00,0x00},
{0x02,0x02,0x7F,0x80,0x40,0x20,0x18,0x07,0x00,0x00,0x3F,0x40,0x40,0x40,0x70,0x00},/*"况",36*/
{0x20,0x20,0x22,0x22,0x22,0xE2,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x20,0x20,0x00},
{0x00,0x00,0x00,0x00,0x03,0x02,0x02,0x02,0x42,0x82,0x42,0x3E,0x00,0x00,0x00,0x00},/*"亏",37*/
{0x00,0x84,0x44,0x34,0x0C,0x47,0x34,0x84,0x44,0x3C,0x44,0xA4,0x14,0x04,0x00,0x00},
{0x81,0x80,0xF8,0x88,0x8A,0xFA,0x89,0x88,0x88,0xF8,0x88,0x88,0xF9,0x82,0x82,0x00},/*"盔",38*/
{0x00,0xC0,0x0E,0x08,0xE8,0x08,0x48,0x4F,0x48,0x48,0x48,0x48,0xCE,0x00,0x00,0x00},
{0x00,0x1F,0x80,0x60,0x1F,0x00,0x40,0x44,0x44,0x44,0x44,0x44,0xFF,0x00,0x00,0x00},/*"岿",39*/
{0x10,0x8C,0x84,0xD4,0x8C,0x84,0x05,0xC6,0x44,0x44,0x4C,0x54,0x44,0xD4,0x0C,0x00},
{0x84,0x44,0x34,0x0F,0x14,0xA4,0x80,0x4F,0x20,0x18,0x07,0x78,0x80,0x8F,0xC0,0x00},/*"窥",40*/
{0x02,0x12,0x52,0x92,0x57,0x32,0x12,0x02,0x1A,0x22,0x57,0x8A,0x42,0x22,0x02,0x00},
{0x02,0x8A,0x89,0x88,0x49,0x49,0x29,0x1F,0x29,0x29,0x49,0x48,0x89,0x0A,0x02,0x00},/*"葵",41*/
{0x40,0x44,0x24,0x24,0x54,0x4C,0x47,0xF4,0x44,0x4C,0x54,0x24,0x24,0x44,0x40,0x00},
{0x80,0x82,0x92,0x92,0x92,0x92,0x92,0xFB,0x92,0x92,0x92,0x92,0x92,0x82,0x80,0x00},/*"奎",42*/
{0x00,0xFC,0x24,0x26,0xFD,0x24,0x24,0xFC,0x00,0x22,0xCC,0x00,0xFF,0x00,0x00,0x00},
{0x80,0x61,0x19,0x07,0x7D,0x99,0x95,0x91,0x9A,0x82,0x82,0x82,0xBF,0x81,0xC1,0x00},/*"魁",43*/
{0x80,0x60,0xF8,0x07,0x00,0xFC,0x24,0x24,0xA6,0x7D,0x24,0x24,0x24,0xFC,0x00,0x00},
{0x00,0x00,0xFF,0x80,0x40,0x21,0x11,0x0D,0x03,0x7D,0x99,0x95,0x91,0x99,0xE0,0x00},/*"傀",44*/
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