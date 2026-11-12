// rea decompile_all
// name: FUN_20065860
// address: 0x20065860
// body: available
// range: 0x20065860-0x20065af6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_20065860(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_300;
  undefined4 local_2ff;
  undefined1 local_200;
  undefined4 local_1ff;
  undefined1 local_100;
  undefined4 local_ff;
  
  if ((DAT_20249618 != 0) && (*(float *)(DAT_20249618 + 0x18) != 0.0)) {
    if ((DAT_20403540 != '\0') && (DAT_20403541 == '\0')) {
      FUN_200faaad(&DAT_2011d114,&DAT_20365ea0 + DAT_20367ea4 * 0x100);
      DAT_20403540 = '\0';
    }
    iVar2 = FUN_200fc278();
    while (iVar2 != 0) {
      uVar3 = FUN_200fc1a7();
      switch(uVar3) {
      case 0:
      case 0xe0:
        iVar2 = FUN_200fc1a7();
        if (iVar2 == 0x48) {
          local_100 = 0xd;
          puVar6 = &local_ff;
          for (uVar4 = DAT_20365e9c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = &DAT_20202020;
            puVar6 = puVar6 + 1;
          }
          for (uVar4 = DAT_20365e9c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar6 = 0x20;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          *(undefined1 *)((int)&local_ff + DAT_20365e9c) = 0xd;
          *(undefined1 *)((int)&local_ff + DAT_20365e9c + 1) = 0;
          FUN_200faaad(&local_100);
          FUN_2004b870(0x26,0);
          FUN_200faaad(&DAT_2011d114,&DAT_20365ea0 + DAT_20367ea4 * 0x100);
        }
        else {
          if (iVar2 == 0x4b) goto switchD_200658eb_caseD_8;
          if (iVar2 == 0x50) {
            local_300 = 0xd;
            puVar6 = &local_2ff;
            for (uVar4 = DAT_20365e9c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar6 = &DAT_20202020;
              puVar6 = puVar6 + 1;
            }
            for (uVar4 = DAT_20365e9c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar6 = 0x20;
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
            *(undefined1 *)((int)&local_2ff + DAT_20365e9c) = 0xd;
            *(undefined1 *)((int)&local_2ff + DAT_20365e9c + 1) = 0;
            FUN_200faaad(&local_300);
            FUN_2004b870(0x28,0);
            FUN_200faaad(&DAT_2011d114,&DAT_20365ea0 + DAT_20367ea4 * 0x100);
          }
        }
        break;
      default:
        iVar2 = FUN_2004b870(0,uVar3);
        if (iVar2 != 0) {
          FUN_200faaad(&DAT_2013a9b0,uVar3);
        }
        break;
      case 8:
switchD_200658eb_caseD_8:
        iVar2 = FUN_2004b870(8,0);
        if (iVar2 != 0) {
          FUN_200faaad(&DAT_2013a9b4);
        }
        break;
      case 9:
        local_200 = 0xd;
        puVar6 = &local_1ff;
        for (uVar4 = DAT_20365e9c >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = &DAT_20202020;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = DAT_20365e9c & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = 0x20;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined1 *)((int)&local_1ff + DAT_20365e9c) = 0xd;
        *(undefined1 *)((int)&local_1ff + DAT_20365e9c + 1) = 0;
        FUN_200faaad(&local_200);
        FUN_2004b870(9,0);
        FUN_200faaad(&DAT_2011d114,&DAT_20365ea0 + DAT_20367ea4 * 0x100);
        break;
      case 0xd:
        iVar2 = DAT_20367ea4 * 0x100;
        pcVar5 = &DAT_20365ea1 + iVar2;
        FUN_200faaad(&DAT_2011dd40);
        FUN_2004b870(0xd,0);
        cVar1 = *pcVar5;
        DAT_20403541 = '\0';
        DAT_20403540 = '\x01';
        if (cVar1 != '\0') {
          if ((cVar1 == '\\') || (cVar1 == '/')) {
            pcVar5 = &DAT_20365ea2 + iVar2;
          }
          return pcVar5;
        }
      }
      iVar2 = FUN_200fc278();
    }
  }
  return (char *)0x0;
}

