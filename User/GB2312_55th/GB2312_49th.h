/*第六区
   49 ０ １ ２ ３ ４ ５ ６ ７ ８ ９
０ 　 选 癣 眩 绚 靴 薛 学 穴 雪
１ 血 勋 熏 循 旬 询 寻 驯 巡 殉
２ 汛 训 讯 逊 迅 压 押 鸦 鸭 呀
３ 丫 芽 牙 蚜 崖 衙 涯 雅 哑 亚
４ 讶 焉 咽 阉 烟 淹 盐 严 研 蜒
５ 岩 延 言 颜 阎 炎 沿 奄 掩 眼
６ 衍 演 艳 堰 燕 厌 砚 雁 唁 彦
７ 焰 宴 谚 验 殃 央 鸯 秧 杨 扬
８ 佯 疡 羊 洋 阳 氧 仰 痒 养 样
９ 漾 邀 腰 妖 瑶
49 th           0x019c80-0x01a8ff               105600-108799
*/
 //选 癣 眩 绚 靴 薛 学 穴 雪血 勋 熏 循 旬 询 寻 驯 巡 殉 汛 训 讯 逊 迅 压 押 鸦 鸭 呀 丫 芽 牙 蚜 崖 衙 涯 雅 哑 亚 讶 焉 咽 阉 烟 淹 盐 严 研 蜒
// 岩 延 言 颜 阎 炎 沿 奄 掩 眼 衍 演 艳 堰 燕 厌 砚 雁 唁 彦 焰 宴 谚 验 殃 央 鸯 秧 杨 扬 佯 疡 羊 洋 阳 氧 仰 痒 养 样 漾 邀 腰 妖 瑶
#ifndef  __GB2312_16th_H
#define  __GB2312_16th_H
#define start_addr  0x019c80
char hzk[][16]={
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*0x00*/
{0x40,0x40,0x42,0xCC,0x00,0x50,0x4E,0xC8,0x48,0x7F,0xC8,0x48,0x48,0x40,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x50,0x4C,0x43,0x40,0x40,0x4F,0x50,0x50,0x5C,0x40,0x00},/*"选",0*/
{0x20,0x40,0xFC,0x44,0xA4,0x9C,0xD4,0xB5,0x86,0x54,0x64,0xC4,0x64,0x54,0x44,0x00},
{0x84,0x62,0x1F,0x40,0x4F,0x4A,0x2F,0x2A,0x2F,0x10,0x12,0xFF,0x12,0x12,0x10,0x00},/*"癣",1*/
{0x00,0xFC,0x24,0x24,0xFC,0x00,0x08,0x88,0x48,0x39,0x0E,0x08,0xC8,0x08,0x08,0x00},
{0x00,0x3F,0x11,0x11,0x3F,0x00,0x21,0x71,0x29,0x25,0x23,0x21,0x28,0x70,0x00,0x00},/*"眩",2*/
{0x20,0x30,0xAC,0x63,0x10,0x20,0xD0,0x4C,0x4B,0x48,0xC8,0x08,0x08,0xF8,0x00,0x00},
{0x22,0x67,0x22,0x12,0x12,0x00,0x1F,0x12,0x12,0x12,0x5F,0x80,0x40,0x3F,0x00,0x00},/*"绚",3*/
{0x04,0xC4,0x5F,0xF4,0x5F,0xC4,0x44,0x20,0xF8,0x07,0x00,0xFF,0x40,0x20,0x18,0x00},
{0x08,0x0B,0x0A,0xFF,0x0A,0x0B,0x08,0x00,0xFF,0x02,0x01,0x3F,0x40,0x40,0x70,0x00},/*"靴",4*/
{0x04,0xE4,0x24,0x34,0x2F,0xE4,0x04,0x44,0xC4,0x54,0x6F,0x44,0xC4,0x44,0x04,0x00},
{0x00,0xFF,0x49,0x49,0x49,0xF9,0x02,0x12,0x12,0x13,0xFE,0x13,0x12,0x12,0x02,0x00},/*"薛",5*/
{0x40,0x30,0x11,0x96,0x90,0x90,0x91,0x96,0x90,0x90,0x98,0x14,0x13,0x50,0x30,0x00},
{0x04,0x04,0x04,0x04,0x04,0x44,0x84,0x7E,0x06,0x05,0x04,0x04,0x04,0x04,0x04,0x00},/*"学",6*/
{0x20,0x18,0x08,0x08,0x08,0xC8,0x09,0x0E,0x08,0xE8,0x08,0x08,0x08,0x28,0x18,0x00},
{0x80,0x40,0x20,0x18,0x06,0x01,0x00,0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x80,0x00},/*"穴",7*/
{0x10,0x0C,0x05,0x55,0x55,0x55,0x05,0x7F,0x05,0x55,0x55,0x55,0x05,0x14,0x0C,0x00},
{0x00,0x00,0x41,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xFF,0x00,0x00,0x00},/*"雪",8*/
{0x00,0x00,0xF8,0x08,0x08,0xF8,0x0C,0x0B,0x08,0xF8,0x08,0x08,0xF8,0x00,0x00,0x00},
{0x40,0x40,0x7F,0x40,0x40,0x7F,0x40,0x40,0x40,0x7F,0x40,0x40,0x7F,0x40,0x40,0x00},/*"血",9*/
{0x00,0xC0,0x5E,0x52,0x52,0x52,0x5E,0xC0,0x10,0x10,0xFF,0x10,0x10,0xF0,0x00,0x00},
{0x80,0x8F,0x40,0x30,0x0F,0x10,0xA0,0x4F,0x20,0x18,0x47,0x80,0x40,0x3F,0x00,0x00},/*"勋",10*/
{0x08,0x08,0xEA,0x2A,0x6A,0xAA,0x2A,0xFE,0x29,0xA9,0x69,0x29,0xE9,0x08,0x08,0x00},
{0x90,0x70,0x15,0x15,0x35,0xD5,0x15,0x1F,0x35,0xD5,0x15,0x15,0x35,0xD0,0x10,0x00},/*"熏",11*/
{0x10,0x88,0xC4,0x33,0x00,0xFE,0x12,0xD2,0x52,0x52,0x7F,0x51,0x51,0xD1,0x10,0x00},
{0x01,0x00,0xFF,0x40,0x30,0x0F,0x00,0xFF,0x4A,0x4A,0x4A,0x4A,0x4A,0xFF,0x00,0x00},/*"循",12*/
{0x80,0x40,0x20,0x18,0xE7,0x24,0x24,0x24,0x24,0xE4,0x04,0x04,0x04,0xFC,0x00,0x00},
{0x00,0x00,0x00,0x00,0x1F,0x09,0x09,0x09,0x09,0x1F,0x40,0x80,0x40,0x3F,0x00,0x00},/*"旬",13*/
{0x40,0x40,0x42,0xCC,0x00,0x20,0xD0,0x4C,0x4B,0x48,0xC8,0x08,0x08,0xF8,0x00,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x10,0x1F,0x12,0x12,0x12,0x5F,0x80,0x40,0x3F,0x00,0x00},/*"询",14*/
{0x00,0x00,0x82,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x04,0x04,0x04,0x04,0x0C,0x34,0x04,0x04,0x44,0x84,0x7F,0x04,0x04,0x04,0x04,0x00},/*"寻",15*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x00,0xFF,0x00,0x00,0xFE,0x00,0x00,0xFF,0x00,0x00},
{0x08,0x18,0x48,0x84,0x44,0xBF,0x60,0x1F,0x00,0x00,0x3F,0x00,0x00,0xFF,0x00,0x00},/*"驯",16*/
{0x40,0x40,0x42,0xCC,0x00,0x40,0xB0,0x0E,0x40,0xB0,0x0E,0x40,0xB0,0x0E,0x00,0x00},
{0x00,0x40,0x20,0x1F,0x20,0x40,0x41,0x4E,0x40,0x41,0x4E,0x40,0x41,0x4E,0x40,0x00},/*"巡",17*/
{0x04,0xC4,0x3C,0x24,0x24,0xE4,0x10,0xEC,0x27,0x24,0xE4,0x04,0x04,0xFC,0x00,0x00},
{0x82,0x41,0x21,0x12,0x0C,0x03,0x00,0x1F,0x09,0x09,0x4F,0x80,0x40,0x3F,0x00,0x00},/*"殉",18*/
{0x10,0x60,0x02,0x8C,0x00,0x82,0x82,0xFE,0x82,0x82,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x0F,0x30,0x40,0xF8,0x00},/*"汛",19*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0x00,0xFF,0x00,0x00,0xFE,0x00,0x00,0xFF,0x00,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x88,0x60,0x1F,0x00,0x00,0x3F,0x00,0x00,0xFF,0x00,0x00},/*"训",20*/
{0x40,0x40,0x42,0xCC,0x00,0x82,0x82,0xFE,0x82,0x82,0x02,0xFE,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x7F,0x20,0x10,0x00,0xFF,0x00,0x00,0x00,0x0F,0x30,0x40,0xF8,0x00},/*"讯",21*/
{0x40,0x42,0xCC,0x00,0x02,0x02,0xF2,0x4A,0x26,0xE0,0x00,0xFF,0x20,0xC0,0x00,0x00},
{0x80,0x40,0x3F,0x40,0x92,0xA1,0x9F,0x84,0x83,0x90,0xA0,0x9F,0x80,0x80,0x87,0x00},/*"逊",22*/
{0x40,0x42,0xCC,0x00,0x42,0x42,0xFE,0x42,0x42,0x02,0xFE,0x00,0x00,0x00,0x00,0x00},
{0x40,0x20,0x1F,0x20,0x40,0x40,0x5F,0x40,0x40,0x40,0x41,0x46,0x48,0x5F,0x40,0x00},/*"迅",23*/
{0x00,0x00,0xFE,0x02,0x82,0x82,0x82,0x82,0xFA,0x82,0x82,0x82,0x82,0x82,0x02,0x00},
{0x80,0x60,0x1F,0x40,0x40,0x40,0x40,0x40,0x7F,0x40,0x40,0x44,0x58,0x40,0x40,0x00},/*"压",24*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0xFE,0x22,0x22,0xFE,0x22,0x22,0xFE,0x00,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x00,0x07,0x02,0x02,0xFF,0x02,0x02,0x07,0x00,0x00},/*"押",25*/
{0x00,0xC2,0xBA,0x82,0x82,0xFE,0x82,0x80,0xFC,0x06,0x15,0x44,0x84,0x7C,0x00,0x00},
{0x20,0x10,0x08,0x46,0x81,0x7F,0x00,0x10,0x13,0x12,0x12,0x52,0x92,0x42,0x3E,0x00},/*"鸦",26*/
{0xFE,0x22,0x22,0xFE,0x22,0x22,0xFE,0x00,0xFC,0x06,0x15,0x44,0x84,0x7C,0x00,0x00},
{0x07,0x02,0x02,0xFF,0x02,0x02,0x07,0x10,0x13,0x12,0x12,0x52,0x92,0x42,0x3E,0x00},/*"鸭",27*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0xC2,0xBA,0x82,0x82,0x82,0xFE,0x82,0x82,0x80,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x20,0x10,0x08,0x04,0x42,0x81,0x7F,0x00,0x00,0x00,0x00},/*"呀",28*/
{0x00,0x00,0x02,0x04,0x08,0x10,0x00,0xE0,0x10,0x08,0x04,0x02,0x00,0x00,0x00,0x00},
{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"丫",29*/
{0x04,0x04,0x24,0xA4,0x2F,0x24,0x24,0x24,0x24,0x24,0xEF,0x24,0x24,0x24,0x04,0x00},
{0x40,0x40,0x23,0x22,0x12,0x12,0x0A,0x06,0x42,0x82,0x7F,0x02,0x02,0x02,0x02,0x00},/*"芽",30*/
{0x00,0x00,0xC2,0xB2,0x82,0x82,0x82,0x82,0x82,0xFE,0x82,0x82,0x82,0x82,0x80,0x00},
{0x00,0x20,0x20,0x10,0x08,0x04,0x02,0x41,0x80,0x7F,0x00,0x00,0x00,0x00,0x00,0x00},/*"牙",31*/
{0x00,0xF8,0x08,0xFF,0x08,0xF8,0x00,0xC2,0xBA,0x82,0x82,0x82,0xFE,0x82,0x82,0x00},
{0x20,0x63,0x21,0x1F,0x11,0x39,0x20,0x10,0x08,0x04,0x42,0x81,0x7F,0x00,0x00,0x00},/*"蚜",32*/
{0x00,0x00,0xEE,0x28,0xA8,0xA8,0xA8,0xAF,0xE8,0xA8,0xA8,0xA8,0xAE,0x20,0x00,0x00},
{0x40,0x30,0x0F,0x42,0x52,0x52,0x52,0x52,0x7B,0x52,0x52,0x52,0x52,0x42,0x40,0x00},/*"崖",33*/
{0x10,0x88,0xC4,0x23,0x92,0xF2,0x9E,0x92,0xF2,0x82,0x40,0x44,0xC4,0x44,0x40,0x00},
{0x01,0x00,0xFF,0x00,0x00,0xFC,0x44,0x44,0xFC,0x00,0x40,0x80,0x7F,0x00,0x00,0x00},/*"衙",34*/
{0x10,0x60,0x02,0x8C,0x00,0xFE,0x82,0x92,0x92,0x92,0xFE,0x92,0x92,0x92,0x82,0x00},
{0x04,0x04,0x7E,0x81,0x60,0x1F,0x40,0x48,0x48,0x48,0x7E,0x48,0x48,0x48,0x40,0x00},/*"涯",35*/
{0x00,0xC2,0xBA,0x82,0x82,0xFE,0xA2,0x90,0xFC,0x4B,0x48,0xF9,0x4A,0x48,0x08,0x00},
{0x20,0x10,0x08,0x46,0x81,0x7F,0x00,0x00,0xFF,0x22,0x22,0x3F,0x22,0x22,0x20,0x00},/*"雅",36*/
{0x00,0xFC,0x04,0x04,0xFC,0x40,0x82,0x02,0xFE,0x02,0x02,0xFE,0x02,0x82,0x60,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x40,0x43,0x40,0x7F,0x40,0x40,0x7F,0x42,0x41,0x40,0x00},/*"哑",37*/
{0x00,0x42,0x82,0x02,0x02,0xFE,0x02,0x02,0x02,0xFE,0x02,0x02,0x02,0xC2,0x00,0x00},
{0x40,0x40,0x41,0x46,0x40,0x7F,0x40,0x40,0x40,0x7F,0x40,0x44,0x43,0x40,0x40,0x00},/*"亚",38*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0xC2,0xBA,0x82,0x82,0x82,0xFE,0x82,0x82,0x80,0x00},
{0x00,0x00,0x00,0x3F,0x10,0x28,0x10,0x08,0x04,0x42,0x81,0x7F,0x00,0x00,0x00,0x00},/*"讶",39*/
{0x40,0x42,0x42,0x7A,0xC2,0x42,0x42,0x7E,0x4A,0x4A,0x4A,0x4A,0x4A,0x42,0x40,0x00},
{0x00,0x40,0x30,0x06,0x15,0x25,0x05,0x15,0x25,0x05,0x55,0xA5,0x45,0x3C,0x00,0x00},/*"焉",40*/
{0xFC,0x04,0x04,0xFC,0x00,0xFE,0x42,0x42,0x42,0xFA,0x42,0x42,0x42,0xFE,0x00,0x00},
{0x0F,0x04,0x04,0x0F,0x00,0xFF,0x50,0x48,0x46,0x41,0x42,0x4C,0x40,0xFF,0x00,0x00},/*"咽",41*/
{0x00,0xF8,0x81,0x92,0x50,0x32,0x1A,0xD2,0x12,0x32,0x52,0x92,0x82,0xFE,0x00,0x00},
{0x00,0xFF,0x00,0x00,0x1F,0x15,0x15,0x3F,0x55,0x55,0x5F,0x60,0x80,0x7F,0x00,0x00},/*"阉",42*/
{0x80,0x70,0x00,0xFF,0x10,0x08,0xFE,0x42,0x42,0x42,0xFA,0x42,0x42,0x42,0xFE,0x00},
{0x80,0x60,0x18,0x07,0x08,0x10,0xFF,0x50,0x48,0x46,0x41,0x42,0x4C,0x40,0xFF,0x00},/*"烟",43*/
{0x10,0x60,0x02,0x8C,0x00,0x24,0xD4,0x4C,0x46,0xF5,0x44,0x4C,0xD4,0x24,0x24,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x00,0x1F,0x12,0x12,0x7F,0x92,0x92,0x9F,0x80,0xE0,0x00},/*"淹",44*/
{0x40,0xC4,0x44,0x44,0x3F,0x24,0x24,0x24,0x00,0x00,0xFF,0x00,0x08,0x10,0x20,0x00},
{0x40,0x40,0x7E,0x42,0x42,0x7E,0x42,0x42,0x42,0x7E,0x42,0x42,0x7E,0x40,0x40,0x00},/*"盐",45*/
{0x00,0x02,0xC2,0x4A,0x52,0x42,0x7E,0x42,0x42,0x7E,0x42,0x52,0x4A,0x42,0x40,0x00},
{0x80,0x60,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},/*"严",46*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x80,0x82,0xFE,0x82,0x82,0x82,0xFE,0x82,0x80,0x00},
{0x02,0x01,0x7F,0x10,0x10,0x3F,0x80,0x60,0x1F,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},/*"研",47*/
{0xF8,0x08,0xFF,0x08,0xF8,0x00,0x84,0xE4,0x9C,0x00,0xE4,0x04,0xFE,0x43,0x42,0x00},
{0x23,0x61,0x3F,0x11,0xB9,0x40,0x26,0x18,0x27,0x40,0x4F,0x48,0x4F,0x48,0x48,0x00},/*"蜒",48*/
{0x00,0x80,0x9E,0x90,0x90,0x90,0x90,0x9F,0x90,0x90,0x90,0x90,0x9E,0x80,0x00,0x00},
{0x20,0x20,0x10,0x08,0xFC,0x47,0x44,0x44,0x44,0x44,0x44,0x44,0xFC,0x00,0x00,0x00},/*"岩",0*/
{0x04,0x84,0xC4,0xB4,0x8C,0x00,0x00,0xE4,0x04,0x04,0xFE,0x42,0x43,0x42,0x00,0x00},
{0x80,0x44,0x28,0x18,0x27,0x20,0x40,0x4F,0x48,0x48,0x4F,0x48,0x48,0x48,0x40,0x00},/*"延",1*/
{0x04,0x04,0x24,0x24,0x24,0x24,0x25,0x26,0x24,0x24,0x24,0x24,0x24,0x04,0x04,0x00},
{0x00,0x00,0xF9,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0x49,0xF9,0x00,0x00,0x00},/*"言",2*/
{0x00,0xE4,0x2C,0x35,0xA6,0x74,0x2C,0x24,0x02,0xF2,0x1A,0xD6,0x12,0xF2,0x02,0x00},
{0x40,0x3F,0x80,0x89,0x44,0x22,0x11,0x08,0x80,0x4F,0x30,0x0F,0x10,0x2F,0xC0,0x00},/*"颜",3*/
{0x00,0xF8,0x01,0x42,0xA0,0x92,0x5E,0x12,0x92,0xD2,0xB2,0x02,0x02,0xFE,0x00,0x00},
{0x00,0xFF,0x00,0x00,0x3F,0x24,0x24,0x20,0x24,0x24,0x3F,0x40,0x80,0x7F,0x00,0x00},/*"阎",4*/
{0x00,0x80,0x88,0x46,0x40,0x20,0x10,0x0F,0x10,0x10,0x28,0x24,0x42,0x80,0x00,0x00},
{0x80,0x80,0x48,0x46,0x20,0x10,0x08,0x07,0x08,0x10,0x28,0x46,0x40,0x80,0x80,0x00},/*"炎",5*/
{0x10,0x60,0x02,0x8C,0x00,0x80,0x40,0x3E,0x02,0x02,0x02,0x3E,0x40,0x40,0x40,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x00,0xFE,0x42,0x42,0x42,0x42,0x42,0xFE,0x00,0x00,0x00},/*"沿",6*/
{0x40,0x44,0x24,0xE4,0x54,0x4C,0x47,0xF4,0x44,0x4C,0x54,0xE4,0x24,0x44,0x40,0x00},
{0x00,0x00,0x00,0x1F,0x12,0x12,0x12,0x7F,0x92,0x92,0x92,0x9F,0x80,0xF0,0x00,0x00},/*"奄",7*/
{0x10,0x10,0x10,0xFF,0x10,0xB4,0xD4,0x4C,0x46,0xF5,0x44,0x4C,0xD4,0x24,0x24,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x00,0x1F,0x12,0x12,0x7F,0x92,0x92,0x9F,0x80,0xE0,0x00},/*"掩",8*/
{0x00,0xFC,0x24,0x24,0xFC,0x00,0xFE,0x92,0x92,0x92,0x92,0x92,0xFE,0x00,0x00,0x00},
{0x00,0x3F,0x11,0x11,0x3F,0x00,0xFF,0x40,0x20,0x03,0x0C,0x14,0x22,0x41,0x40,0x00},/*"眼",9*/
{0x10,0x88,0xC4,0x23,0x00,0x20,0xC2,0x0C,0x80,0x00,0x40,0x44,0xC4,0x44,0x40,0x00},
{0x01,0x00,0xFF,0x00,0x00,0x04,0x04,0x7E,0x01,0x00,0x40,0x80,0x7F,0x00,0x00,0x00},/*"衍",10*/
{0x10,0x60,0x02,0x8C,0x00,0x0C,0xA4,0xA4,0xA5,0xE6,0xA4,0xA4,0xA4,0x0C,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x80,0x4F,0x2A,0x0A,0x0F,0x0A,0x2A,0x4F,0x80,0x00,0x00},/*"演",11*/
{0x08,0x88,0x88,0xFF,0x88,0xA8,0x10,0xE8,0x27,0x24,0xE4,0x34,0x2C,0xE0,0x00,0x00},
{0x08,0x08,0x08,0xFF,0x08,0x08,0x00,0x3F,0x42,0x42,0x43,0x42,0x42,0x43,0x70,0x00},/*"艳",12*/
{0x20,0x20,0xFF,0x20,0x20,0x00,0xFE,0x02,0xFA,0xAA,0xAA,0xAA,0xAA,0xFA,0x02,0x00},
{0x10,0x30,0x1F,0x08,0x08,0x00,0xFF,0x82,0xCA,0xAE,0x93,0x92,0xAE,0xC2,0x82,0x00},/*"堰",13*/
{0x42,0x42,0x42,0xF2,0x02,0x9F,0x92,0x92,0x92,0x9F,0x02,0xF2,0x42,0x42,0x22,0x00},
{0x84,0x64,0x02,0x0F,0x20,0xC7,0x04,0x04,0x24,0xC7,0x00,0x07,0x28,0xC8,0x0E,0x00},/*"燕",14*/
{0x00,0x00,0xFE,0x02,0x82,0x82,0x82,0x82,0xFA,0x82,0x82,0x92,0xA2,0x82,0x02,0x00},
{0x80,0x60,0x1F,0x80,0x40,0x20,0x18,0x06,0x01,0x06,0x18,0x20,0x40,0x80,0x80,0x00},/*"厌",15*/
{0x04,0x84,0xE4,0x5C,0x44,0xC4,0x00,0xFE,0x02,0x02,0xF2,0x02,0x02,0xFE,0x00,0x00},
{0x02,0x01,0x7F,0x10,0x10,0xBF,0x40,0x23,0x18,0x06,0x01,0x7E,0x80,0x83,0xE0,0x00},/*"砚",16*/
{0x00,0x00,0xFE,0x02,0x82,0xE2,0x1A,0x82,0xE2,0x3A,0x22,0xEA,0x32,0x22,0x22,0x00},
{0x80,0x60,0x1F,0x01,0x00,0xFF,0x01,0x00,0xFF,0x49,0x49,0x7F,0x49,0x49,0x49,0x00},/*"雁",17*/
{0x00,0xFC,0x04,0x04,0xFC,0x00,0x04,0x24,0x24,0x25,0x26,0x24,0x24,0x24,0x04,0x00},
{0x00,0x0F,0x04,0x04,0x0F,0x00,0x00,0xF9,0x49,0x49,0x49,0x49,0x49,0xF9,0x00,0x00},/*"唁",18*/
{0x00,0x00,0xE4,0x24,0x2C,0x34,0x25,0x26,0x24,0x34,0xAC,0x24,0x24,0x20,0x00,0x00},
{0x80,0x60,0x1F,0x80,0x92,0x92,0x52,0x49,0x49,0x25,0x24,0x12,0x08,0x00,0x00,0x00},/*"彦",19*/
{0x80,0x70,0x00,0xFF,0x10,0x08,0x20,0x90,0x88,0x87,0x44,0x04,0x94,0x8C,0x80,0x00},
{0x80,0x60,0x18,0x07,0x08,0x30,0x00,0xFF,0x44,0x44,0x40,0x40,0x44,0x44,0xFF,0x00},/*"焰",20*/
{0x10,0x0C,0x04,0xF4,0x54,0x54,0x55,0x56,0x54,0x54,0x54,0xF4,0x04,0x14,0x0C,0x00},
{0x04,0x04,0x84,0x95,0x5D,0x57,0x25,0x25,0x25,0x55,0x4D,0x45,0x84,0x04,0x04,0x00},/*"宴",21*/
{0x40,0x40,0x42,0xCC,0x00,0x00,0xC4,0x54,0x64,0x45,0x46,0xE4,0x54,0x44,0x40,0x00},
{0x00,0x00,0x00,0x3F,0x90,0x68,0x1F,0x80,0x92,0x52,0x49,0x24,0x12,0x08,0x00,0x00},/*"谚",22*/
{0x02,0xFA,0x82,0x82,0xFE,0x80,0x40,0x20,0x50,0x4C,0x43,0x4C,0x50,0x20,0x40,0x00},
{0x08,0x18,0x48,0x84,0x44,0x3F,0x40,0x44,0x58,0x41,0x4E,0x60,0x58,0x47,0x40,0x00},/*"验",23*/
{0x04,0xC4,0x3C,0x24,0x24,0xE4,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0xF8,0x00,0x00},
{0x82,0x41,0x21,0x12,0x0C,0x03,0x82,0x43,0x22,0x1A,0x07,0x1A,0x22,0x43,0x82,0x00},/*"殃",24*/
{0x00,0x00,0x00,0xF8,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0xF8,0x00,0x00,0x00,0x00},
{0x82,0x82,0x42,0x43,0x22,0x12,0x0E,0x03,0x0E,0x12,0x22,0x43,0x42,0x82,0x82,0x00},/*"央",25*/
{0x90,0x90,0x90,0x5E,0x52,0x52,0xB2,0x1F,0x32,0x52,0x52,0x5E,0x90,0x90,0x90,0x00},
{0x00,0x40,0x40,0x5E,0x52,0x53,0x56,0x5A,0x52,0x5A,0x1E,0x50,0x90,0x70,0x00,0x00},/*"鸯",26*/
{0x24,0x24,0xA4,0xFE,0x23,0x22,0x00,0xF8,0x08,0x08,0xFF,0x08,0x08,0xF8,0x00,0x00},
{0x08,0x06,0x01,0xFF,0x01,0x06,0x82,0x43,0x22,0x1A,0x07,0x1A,0x22,0x43,0x82,0x00},/*"秧",27*/
{0x10,0x10,0xD0,0xFF,0x90,0x10,0x00,0x42,0xE2,0x52,0x4A,0xC6,0x42,0x40,0xC0,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x23,0x10,0x8C,0x43,0x20,0x18,0x47,0x80,0x40,0x3F,0x00},/*"杨",28*/
{0x10,0x10,0x10,0xFF,0x10,0x90,0x00,0x42,0xE2,0x52,0x4A,0xC6,0x42,0x40,0xC0,0x00},
{0x04,0x44,0x82,0x7F,0x01,0x20,0x10,0x8C,0x43,0x20,0x18,0x47,0x80,0x40,0x3F,0x00},/*"扬",29*/
{0x00,0x80,0x60,0xF8,0x07,0x10,0x91,0x96,0x90,0xF0,0x90,0x94,0x93,0x10,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x04,0x00},/*"佯",30*/
{0x10,0x60,0x00,0xFC,0x04,0x04,0x14,0x94,0x55,0x56,0x34,0x14,0x04,0x04,0x04,0x00},
{0x84,0x42,0x31,0x0F,0x40,0x20,0x19,0x87,0x41,0x31,0x4F,0x81,0x41,0x3F,0x00,0x00},/*"疡",31*/
{0x00,0x08,0x88,0x88,0x89,0x8E,0x88,0xF8,0x88,0x8C,0x8B,0x88,0x88,0x08,0x00,0x00},
{0x08,0x08,0x08,0x08,0x08,0x08,0x08,0xFF,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00},/*"羊",32*/
{0x10,0x60,0x02,0x8C,0x00,0x10,0x91,0x96,0x90,0xF0,0x90,0x94,0x93,0x10,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x00,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x04,0x00},/*"洋",33*/
{0x00,0xFE,0x02,0x22,0xDA,0x06,0x00,0xFC,0x04,0x04,0x04,0x04,0x04,0xFC,0x00,0x00},
{0x00,0xFF,0x08,0x10,0x08,0x07,0x00,0xFF,0x41,0x41,0x41,0x41,0x41,0xFF,0x00,0x00},/*"阳",34*/
{0x08,0x24,0x23,0x6A,0xAA,0x2A,0xAA,0x6A,0x2A,0x2A,0x2A,0xEA,0x02,0x02,0x00,0x00},
{0x10,0x11,0x15,0x15,0x15,0xFF,0x15,0x15,0x15,0x11,0x10,0x0F,0x30,0x40,0xF8,0x00},/*"氧",35*/
{0x00,0x80,0x60,0xF8,0x07,0x00,0xFC,0x04,0x02,0x00,0xFC,0x04,0x04,0xFC,0x00,0x00},
{0x01,0x00,0x00,0xFF,0x00,0x00,0x1F,0x08,0x04,0x00,0xFF,0x04,0x08,0x07,0x00,0x00},/*"仰",36*/
{0x10,0x60,0x00,0xFC,0x04,0x24,0x24,0x2C,0x35,0xE6,0x34,0x2C,0x24,0x24,0x04,0x00},
{0x84,0x42,0x31,0x0F,0x00,0x08,0x09,0x09,0x09,0xFF,0x09,0x09,0x09,0x08,0x00,0x00},/*"痒",37*/
{0x80,0x88,0xA8,0xA8,0xA9,0xAA,0xE8,0xB8,0xA8,0xAA,0xA9,0xA8,0xA8,0x88,0x80,0x00},
{0x08,0x08,0x84,0x44,0x22,0x1D,0x00,0x00,0x00,0xFD,0x02,0x04,0x04,0x08,0x08,0x00},/*"养",38*/
{0x10,0x10,0xD0,0xFF,0x90,0x00,0x10,0x91,0x96,0x90,0xF0,0x90,0x94,0x93,0x10,0x00},
{0x04,0x03,0x00,0xFF,0x00,0x01,0x04,0x04,0x04,0x04,0xFF,0x04,0x04,0x04,0x04,0x00},/*"样",39*/
{0x10,0x60,0x02,0x8C,0x00,0x44,0x55,0x56,0x54,0xFC,0x54,0x56,0x55,0x44,0x00,0x00},
{0x04,0x04,0x7E,0x01,0x40,0x48,0x28,0x5A,0x82,0x7E,0x09,0x10,0x28,0x44,0x40,0x00},/*"漾",40*/
{0x40,0x42,0xCC,0x00,0x7C,0x56,0xD5,0x54,0x7C,0x40,0x20,0x9E,0x10,0xF0,0x10,0x00},
{0x80,0x40,0x3F,0x51,0x89,0x87,0x95,0xA5,0x9D,0xA1,0x90,0x89,0x86,0x89,0xB0,0x00},/*"邀",41*/
{0x00,0xFE,0x22,0x22,0xFE,0x00,0xF2,0x92,0x92,0xFE,0x92,0xFE,0x92,0x92,0xF2,0x00},
{0x80,0x7F,0x02,0x82,0xFF,0x04,0x84,0x94,0x5C,0x66,0x24,0x54,0x4C,0x84,0x04,0x00},/*"腰",42*/
{0x10,0x10,0xF0,0x1F,0x10,0xF0,0x00,0x44,0x44,0x44,0xFE,0x42,0x43,0x42,0x40,0x00},
{0x40,0x22,0x15,0x08,0x16,0x21,0x80,0x40,0x30,0x0E,0x01,0x0E,0x30,0x40,0x80,0x00},/*"妖",43*/
{0x44,0x44,0xFC,0x44,0x44,0x00,0x94,0x64,0x44,0x54,0xE2,0x42,0x63,0x5A,0x00,0x00},
{0x10,0x30,0x1F,0x08,0x08,0x00,0x02,0x7A,0x42,0x42,0x7F,0x42,0x42,0xFA,0x02,0x00},/*"瑶",44*/
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