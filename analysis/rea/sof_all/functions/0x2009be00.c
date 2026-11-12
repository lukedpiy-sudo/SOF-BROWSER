// rea decompile_all
// name: FUN_2009be00
// address: 0x2009be00
// body: available
// range: 0x2009be00-0x2009c075 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009be00(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 uStack_4;
  
  uStack_4 = in_ECX;
  FUN_2009b2f0((int)&uStack_4 + 3,(int)&uStack_4 + 2,(int)&uStack_4 + 1);
  puVar1 = *(undefined1 **)(in_ECX + 0xc);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_201116cc;
  }
  FUN_200faa48(param_2,s_Name__s_2015737c,puVar1);
  puVar7 = &DAT_20157378;
  if (*(int *)(in_ECX + 0x1c) != 1) {
    puVar7 = &DAT_20157374;
  }
  puVar10 = &DAT_20157378;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    puVar10 = &DAT_20157374;
  }
  puVar6 = &DAT_20157378;
  if (uStack_4._1_1_ == '\0') {
    puVar6 = &DAT_20157374;
  }
  puVar5 = &DAT_20157378;
  if (uStack_4._2_1_ == '\0') {
    puVar5 = &DAT_20157374;
  }
  puVar2 = &DAT_20157378;
  if (uStack_4._3_1_ == '\0') {
    puVar2 = &DAT_20157374;
  }
  FUN_200faa48(param_2,s_opaque__s_specular__s_tex__s_two_20157330,puVar2,puVar5,puVar6,puVar10,
               puVar7);
  FUN_20069380(param_1,in_ECX + 8);
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x18));
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x19));
  FUN_200692e0(param_1,*(undefined4 *)(in_ECX + 0x1c));
  FUN_200692e0(param_1,2);
  iVar9 = 0;
  iVar8 = 0;
  do {
    iVar3 = iVar8 + *(int *)(in_ECX + 0x24);
    if (*(char *)(iVar8 + 0x8c + *(int *)(in_ECX + 0x24)) != '\0') {
      puVar7 = &DAT_20157378;
      if (*(char *)(iVar3 + 0x18) != '\0') {
        puVar7 = &DAT_20157374;
      }
      puVar1 = *(undefined1 **)(iVar3 + 8);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = &DAT_201116cc;
      }
      FUN_200faa48(param_2,s_Tex_Map__2d___s_Animates__s_20157308,iVar9,puVar1,puVar7);
      iVar3 = *(int *)(in_ECX + 0x24) + iVar8;
      if ((*(char *)(iVar3 + 0x18) != '\0') && (iVar3 != -0x1a)) {
        if (*(char *)(iVar3 + 0x18) == '\0') {
          pcVar4 = (char *)0x0;
        }
        else {
          pcVar4 = (char *)(iVar3 + 0x1a);
        }
        if (*pcVar4 != '\0') {
          FUN_200faa48(param_2,s_Warning__Frame___does_not_animat_201572cc);
        }
      }
    }
    FUN_2009ab70(param_1);
    iVar8 = iVar8 + 0xd8;
    iVar9 = iVar9 + 1;
  } while (iVar8 < 0x1b0);
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x30));
  if (*(char *)(in_ECX + 0x30) == '\0') {
    if (*(int *)(in_ECX + 0x44) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)(in_ECX + 0x48) - *(int *)(in_ECX + 0x44)) / 0xc;
    }
    FUN_200692e0(param_1,iVar8);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 0x44),iVar8 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x34,0xc);
  }
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x50));
  if (*(char *)(in_ECX + 0x50) == '\0') {
    if (*(int *)(in_ECX + 100) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100)) / 0xc;
    }
    FUN_200692e0(param_1,iVar8);
    FUN_20069280(param_1,*(undefined4 *)(in_ECX + 100),iVar8 * 0xc);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x54,0xc);
  }
  FUN_200c2b90(param_1);
  FUN_200c2b90(param_1);
  FUN_200c2b90(param_1);
  FUN_200c2b90(param_1);
  return;
}

