// rea decompile_all
// name: FUN_20023d90
// address: 0x20023d90
// body: available
// range: 0x20023d90-0x200241a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_20023d90(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  HKEY local_8;
  DWORD local_4;
  
  RegCreateKeyExA((HKEY)0x80000000,&DAT_20131140,0,s_REG_SZ_20131144,0,0xf003f,
                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = s_A3d_Object_20131134;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,(BYTE *)s_A3d_Object_20131134,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_A3d_CLSID_20131128,0,s_REG_SZ_20131144,0,0xf003f,
                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_20131100;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,&DAT_20131100,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_CLSID__d8f1eee0_f634_11cf_8700_0_201310d0,0,s_REG_SZ_20131144,0
                  ,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = s_A3d_Object_20131134;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,(BYTE *)s_A3d_Object_20131134,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_CLSID__d8f1eee0_f634_11cf_8700_0_20131094,0,s_REG_SZ_20131144,0
                  ,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_2013108c;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,&DAT_2013108c,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_CLSID__d8f1eee0_f634_11cf_8700_0_20131094,0,s_REG_SZ_20131144,0
                  ,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = s_Apartment_20131080;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,s_ThreadingModel_20131070,0,1,(BYTE *)s_Apartment_20131080,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_A3dApi_20131068,0,s_REG_SZ_20131144,0,0xf003f,
                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = s_A3dApi_Object_20131058;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,(BYTE *)s_A3dApi_Object_20131058,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_A3dApi_CLSID_20131048,0,s_REG_SZ_20131144,0,0xf003f,
                  (LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_20131020;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,&DAT_20131020,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_CLSID__92FA2C24_253C_11d2_90FB_0_20130ff0,0,s_REG_SZ_20131144,0
                  ,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = s_A3dApi_Object_20131058;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,(BYTE *)s_A3dApi_Object_20131058,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_CLSID__92FA2C24_253C_11d2_90FB_0_20130ff0,0,s_REG_SZ_20131144,0
                  ,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_20130fc8;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,s_AppID_20130fc0,0,1,&DAT_20130fc8,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_CLSID__92FA2C24_253C_11d2_90FB_0_20130f84,0,s_REG_SZ_20131144,0
                  ,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = &DAT_20130f78;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,&DAT_2015ee44,0,1,&DAT_20130f78,~uVar2 - 1);
  RegCloseKey(local_8);
  RegCreateKeyExA((HKEY)0x80000000,s_CLSID__92FA2C24_253C_11d2_90FB_0_20130f84,0,s_REG_SZ_20131144,0
                  ,0xf003f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,&local_4);
  uVar2 = 0xffffffff;
  pcVar3 = s_Apartment_20131080;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  RegSetValueExA(local_8,s_ThreadingModel_20131070,0,1,(BYTE *)s_Apartment_20131080,~uVar2 - 1);
  RegCloseKey(local_8);
  FUN_200241b0(s_A3dDAL_20130f60,&DAT_2015ee44,s_A3dDAL_Object_20130f68);
  FUN_200241b0(s_A3dDAL_CLSID_20130f28,&DAT_2015ee44,s__442D12A1_2641_11d2_90FB_006008A_20130f38);
  FUN_200241b0(s_CLSID__442D12A1_2641_11d2_90FB_0_20130ef8,&DAT_2015ee44,s_A3dDAL_Object_20130f68);
  FUN_200241b0(s_CLSID__442D12A1_2641_11d2_90FB_0_20130ef8,s_AppID_20130fc0,
               s__442D12A1_2641_11D2_90FB_006008A_20130ed0);
  FUN_200241b0(s_CLSID__442D12A1_2641_11d2_90FB_0_20130e94,&DAT_2015ee44,&DAT_2013108c);
  FUN_200241b0(s_CLSID__442D12A1_2641_11d2_90FB_0_20130e94,s_ThreadingModel_20131070,
               s_Apartment_20131080);
  return 0;
}

