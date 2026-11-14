// rea decompile_all
// name: FUN_1000b8a0
// address: 0x1000b8a0
// body: available
// range: 0x1000b8a0-0x1000bb19 inclusive
// range: 0x1000bb20-0x1000bbe9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_1000b8a0(void *this,char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *unaff_EDI;
  char *pcVar8;
  int local_2c;
  int local_28;
  int local_24;
  char *local_20;
  char *local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  local_20 = param_1;
  *unaff_EDI = 0;
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 4) = 0;
  local_1c = this;
  if (param_1 == (char *)0x0) {
    if (this == (void *)0x0) goto LAB_1000bbd6;
LAB_1000b97b:
    (*DAT_10029630)();
    uVar2 = (*DAT_10029a4c)(0x8b30);
    *(undefined4 *)(unaff_EDI + 0xc) = uVar2;
    pcVar5 = local_1c;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_28 = (int)pcVar5 - (int)(local_1c + 1);
    (*DAT_10029a50)(uVar2,1,&local_1c,&local_28);
    (*DAT_10029a54)(*(undefined4 *)(unaff_EDI + 0xc));
    iVar3 = (*DAT_10029630)();
    if ((iVar3 != 0) ||
       ((*DAT_10029a80)(*(undefined4 *)(unaff_EDI + 0xc),0x8b81,&local_24), local_24 == 0)) {
      (*(code *)PTR_FUN_10028344)();
      FUN_10001c50("Failed to compile fragment shader:\n\n%s\n");
      FUN_1000bbf0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    (*DAT_10029630)();
    uVar2 = (*DAT_10029a4c)(0x8b31);
    *(undefined4 *)(unaff_EDI + 8) = uVar2;
    pcVar5 = local_20;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_2c = (int)pcVar5 - (int)(local_20 + 1);
    (*DAT_10029a50)(uVar2,1,&local_20,&local_2c);
    (*DAT_10029a54)(*(undefined4 *)(unaff_EDI + 8));
    iVar3 = (*DAT_10029630)();
    if ((iVar3 != 0) ||
       ((*DAT_10029a80)(*(undefined4 *)(unaff_EDI + 8),0x8b81,&local_24), local_24 == 0)) {
      (*(code *)PTR_FUN_10028344)();
      FUN_10001c50("Failed to compile vertex shader:\n\n%s\n");
      FUN_1000bbf0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_1c != (char *)0x0) goto LAB_1000b97b;
  }
  uVar2 = (*DAT_10029a58)();
  *(undefined4 *)(unaff_EDI + 4) = uVar2;
  if (local_20 != (char *)0x0) {
    (*DAT_10029a5c)(uVar2,*(undefined4 *)(unaff_EDI + 8));
  }
  if (local_1c != (char *)0x0) {
    (*DAT_10029a5c)(*(undefined4 *)(unaff_EDI + 4),*(undefined4 *)(unaff_EDI + 0xc));
  }
  (*DAT_10029630)();
  (*DAT_10029a60)(*(undefined4 *)(unaff_EDI + 4));
  iVar3 = (*DAT_10029630)();
  if (iVar3 == 0) {
    (*DAT_10029a80)(*(undefined4 *)(unaff_EDI + 4),0x8b82,&local_24);
    if (local_24 == 0) {
      pcVar5 = local_1c;
      if (local_1c == (char *)0x0) {
        pcVar5 = "none";
      }
      pcVar4 = local_20;
      if (local_20 == (char *)0x0) {
        pcVar4 = "none";
      }
      pcVar8 = "Failed to link shaders!\n\nVertex:\n%s\n\nFragment:\n%s\n";
      (*(code *)PTR_FUN_10028344)
                ("Failed to link shaders!\n\nVertex:\n%s\n\nFragment:\n%s\n",pcVar4,pcVar5);
      FUN_10001c50(pcVar8);
      FUN_1000bbf0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    (*DAT_10029a64)(*(undefined4 *)(unaff_EDI + 4));
    puVar6 = (undefined4 *)(unaff_EDI + 0x10);
    uVar2 = extraout_ECX;
    do {
      FUN_1000bc60(uVar2,local_18,"Local%i");
      uVar2 = (*DAT_10029a6c)(*(undefined4 *)(unaff_EDI + 4),local_18);
      *puVar6 = uVar2;
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 1;
      uVar2 = extraout_ECX_00;
    } while (iVar7 < 8);
    iVar7 = 0;
    do {
      FUN_1000bc60(uVar2,local_18,"Texture%i");
      iVar3 = (*DAT_10029a6c)(*(undefined4 *)(unaff_EDI + 4),local_18);
      uVar2 = extraout_ECX_01;
      if (iVar3 != -1) {
        (*DAT_10029a70)(iVar3,iVar7);
        uVar2 = extraout_ECX_02;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    (*DAT_10029a68)(*(undefined4 *)(unaff_EDI + 4));
    (*DAT_10029a80)(*(undefined4 *)(unaff_EDI + 4),0x8b83,&local_24);
    if (local_24 != 0) {
      (*DAT_10029a64)(0);
      *unaff_EDI = 1;
LAB_1000bbd6:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    pcVar5 = local_1c;
    if (local_1c == (char *)0x0) {
      pcVar5 = "none";
    }
    pcVar4 = local_20;
    if (local_20 == (char *)0x0) {
      pcVar4 = "none";
    }
    pcVar8 = "Failed to validate shaders!\n\nVertex:\n%s\n\nFragment:\n%s\n";
  }
  else {
    pcVar5 = local_1c;
    if (local_1c == (char *)0x0) {
      pcVar5 = "none";
    }
    pcVar4 = local_20;
    if (local_20 == (char *)0x0) {
      pcVar4 = "none";
    }
    pcVar8 = "Failed to link shaders!\n\nVertex:\n%s\n\nFragment:\n%s\n";
  }
  (*(code *)PTR_FUN_10028344)(pcVar8,pcVar4,pcVar5);
  FUN_10001c50(pcVar8);
  FUN_1000bbf0();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

