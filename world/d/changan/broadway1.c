// Room: /changan/broadway1.c
//cglaem...12/12/96.

inherit ROOM;

void create ()
{
  set ("short", "��ٵ�");
  set ("long", @LONG

����һ��������ֱ�Ĺٵ�������ݵ���ʮ�����ۡ�����ͨ��
�ϲ��غ���������ֱ����ƹ��������ǡ�������һ�����С
·����֪ͨ��δ���
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"fendui.c",
  //"west" : "/d/moon/xiaolu3",
  "south" : __DIR__"zhongnan",
  "north" : __DIR__"sbridge",
]));
  set("outdoors", 2);

  set("objects", ([ "/d/obj/weapon/throwing/shi.c" : 1, ]));
  setup();
}





