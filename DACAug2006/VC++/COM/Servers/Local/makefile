all:		traderps.dll trader.res trader.exe

traderps.dll:	trader.idl
		midl trader.idl
		cl /o traderps.dll /MD /LD /DWIN32 /D_WIN32_WINNT=0x0500 /DREGISTER_PROXY_DLL trader_p.c trader_i.c dlldata.c rpcrt4.lib comexp.def

trader.res:	trader.idl
		rc trader.rc

trader.exe:	trader.idl trader.cpp
		cl /MD trader.cpp trader.res trader_i.c ole32.lib user32.lib advapi32.lib

