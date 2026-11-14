// rea decompile_all
// name: FUN_10009250
// address: 0x10009250
// body: available
// range: 0x10009250-0x10009504 inclusive
// range: 0x10009510-0x1000969a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009250(HWND param_1)

{
  ATOM AVar1;
  HMODULE hInstance;
  HDC hDC;
  int iVar2;
  int unaff_EBX;
  HDC unaff_EDI;
  HDC pHVar3;
  undefined4 uVar4;
  HDC pHVar5;
  HDC pHVar6;
  char *pcVar7;
  HDC__ HVar8;
  HWND local_bc;
  HDC local_b8;
  undefined4 local_ac;
  WNDCLASSA local_98;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  uint uStack_18;
  uint local_c;
  
  local_c = DAT_10027040 ^ (uint)&local_bc;
  local_ac = 0;
  if (*(char *)(unaff_EBX + 0x44) == '\0') {
    local_98.style = 0;
    local_98.cbClsExtra = 0;
    local_98.cbWndExtra = 0;
    local_98.hInstance = (HINSTANCE)0x0;
    local_98.hIcon = (HICON)0x0;
    local_98.hCursor = (HCURSOR)0x0;
    local_98.hbrBackground = (HBRUSH)0x0;
    local_98.lpszMenuName = (LPCSTR)0x0;
    local_98.lpszClassName = (LPCSTR)0x0;
    local_98.lpfnWndProc = DefWindowProcA_exref;
    local_98.hInstance = GetModuleHandleA((LPCSTR)0x0);
    local_98.lpszClassName = "QeffectsGL";
    AVar1 = RegisterClassA(&local_98);
    if (AVar1 == 0) {
      pcVar7 = "ChooseMultisamplePixelFormat: RegisterClass failed\n";
      goto LAB_100092d6;
    }
    *(undefined1 *)(unaff_EBX + 0x44) = 1;
  }
  HVar8.unused = 0;
  hInstance = GetModuleHandleA((LPCSTR)0x0);
  local_bc = CreateWindowExA(0,"QeffectsGL","",0x80000000,0,0,1,1,(HWND)0x0,(HMENU)0x0,hInstance,
                             (LPVOID)HVar8.unused);
  if (local_bc == (HWND)0x0) {
    pcVar7 = "ChooseMultisamplePixelFormat: CreateWindowEx failed\n";
    local_bc = (HWND)0x0;
LAB_100092d6:
    (*(code *)PTR_FUN_10028344)();
    FUN_10001c50(pcVar7);
    __security_check_cookie(local_c ^ (uint)&local_bc);
    return;
  }
  hDC = GetDC(local_bc);
  local_b8 = hDC;
  if (hDC == (HDC)0x0) {
    pcVar7 = "ChooseMultisamplePixelFormat: GetDC failed\n";
    (*(code *)PTR_FUN_10028344)();
    FUN_10001c50(pcVar7);
    DestroyWindow(local_bc);
    __security_check_cookie(local_c ^ (uint)&local_bc);
    return;
  }
  pHVar3 = hDC;
  HVar8.unused = (int)unaff_EDI;
  iVar2 = (*DAT_100299e4)();
  if (iVar2 == 0) {
    pcVar7 = "ChooseMultisamplePixelFormat: SetPixelFormat failed\n";
  }
  else {
    pHVar6 = hDC;
    HVar8.unused = (*DAT_100299f0)();
    if ((HDC)HVar8.unused == (HDC)0x0) {
      (*(code *)PTR_FUN_10028344)();
      FUN_10001c50((char *)pHVar6);
      goto LAB_100093ae;
    }
    iVar2 = (*DAT_10029a04)();
    if (iVar2 != 0) {
      pHVar5 = (HDC)&stack0xffffff3c;
      uVar4 = 0x80a8;
      (*DAT_10029638)();
      if (pHVar3 != (HDC)0x0) {
        *(undefined1 *)(unaff_EBX + 0xb) = 1;
      }
      param_1 = (HWND)(*DAT_10029a00)();
      if (param_1 == (HWND)0x0) {
        (*DAT_10029a04)();
        (*DAT_100299f4)(uVar4);
        pcVar7 = "missing extension WGL_ARB_pixel_format\n";
        (*(code *)PTR_FUN_10028344)();
        FUN_10001cb0(pcVar7);
        (*(code *)PTR_FUN_10028344)("multisample is not supported\n");
        FUN_10001cb0((char *)pHVar6);
        goto LAB_100093ae;
      }
      if (1 < *(int *)(unaff_EBX + 0x8c)) {
        do {
          uStack_68 = (uint)(byte)unaff_EDI[4].unused;
          iStack_60 = (-(uint)(0x10 < *(byte *)((int)&unaff_EDI[5].unused + 3)) & 8) + 0x10;
          uStack_58 = (uint)(byte)unaff_EDI[6].unused;
          uStack_50 = unaff_EDI[1].unused & 1;
          uStack_40 = *(undefined4 *)(unaff_EBX + 0x8c);
          uStack_3c = 0;
          uStack_38 = 0;
          local_98.cbClsExtra = 1;
          local_98.hInstance = (HMODULE)0x1;
          uStack_48 = 1;
          local_98.lpfnWndProc = (WNDPROC)0x2001;
          local_98.cbWndExtra = 0x2010;
          local_98.hIcon = (HICON)0x2013;
          local_98.hCursor = (HCURSOR)0x202b;
          local_98.hbrBackground = (HBRUSH)0x2003;
          local_98.lpszMenuName = (LPCSTR)0x2027;
          local_98.lpszClassName = (char *)0x2014;
          uStack_70 = 0x20;
          uStack_6c = 0x201b;
          uStack_64 = 0x2022;
          uStack_5c = 0x2023;
          uStack_54 = 0x2011;
          uStack_4c = 0x2041;
          uStack_44 = 0x2042;
          iVar2 = (*(code *)param_1)(hDC,&local_98.lpfnWndProc,&stack0xffffff3c,1);
          if ((iVar2 != 0) && (hDC = pHVar5, pHVar3 != (HDC)0x0)) break;
          (*(code *)PTR_FUN_10028344)();
          hDC = pHVar5;
          FUN_10001cb0("%ix FSAA is not supported\n");
          iVar2 = *(int *)(unaff_EBX + 0x8c);
          if (iVar2 < 9) {
            iVar2 = iVar2 + -2;
          }
          else {
            iVar2 = iVar2 >> 1;
          }
          *(int *)(unaff_EBX + 0x8c) = iVar2;
          pHVar5 = hDC;
        } while (1 < iVar2);
        pHVar5 = hDC;
        if (1 < *(int *)(unaff_EBX + 0x8c)) {
          (*(code *)PTR_FUN_10028344)();
          FUN_10001bf0("Using %ix FSAA\n");
          goto LAB_100094c1;
        }
      }
      hDC = pHVar5;
      pcVar7 = "FSAA is not supported by hardware\n";
      (*(code *)PTR_FUN_10028344)();
      FUN_10001cb0(pcVar7);
LAB_100094c1:
      pHVar3 = hDC;
      (*DAT_10029a04)();
      (*DAT_100299f4)(uVar4);
      ReleaseDC((HWND)pHVar3,hDC);
      DestroyWindow((HWND)pHVar3);
      __security_check_cookie(uStack_3c ^ (uint)&stack0xffffff14);
      return;
    }
    (*DAT_100299f4)();
    pcVar7 = "ChooseMultisamplePixelFormat: wglMakeCurrent failed\n";
  }
  (*(code *)PTR_FUN_10028344)();
  FUN_10001c50(pcVar7);
LAB_100093ae:
  ReleaseDC(param_1,(HDC)HVar8.unused);
  DestroyWindow(param_1);
  __security_check_cookie(uStack_18 ^ (uint)&stack0xffffff38);
  return;
}

