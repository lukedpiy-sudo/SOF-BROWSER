// rea decompile_all
// name: FUN_200f7d90
// address: 0x200f7d90
// body: available
// range: 0x200f7d90-0x200f7e71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_200f7d90(char *param_1,char *param_2,char *param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = _malloc(0xa0);
  *puVar2 = 0;
  uVar3 = FUN_200f4400(4,0x40,&LAB_200f76d0);
  puVar2[1] = uVar3;
  uVar3 = FUN_200f94a0(4,500,4,&LAB_200f7cd0,&LAB_200f7d50,&LAB_200f7d80);
  puVar2[0x25] = uVar3;
  puVar2[0x1b] = param_4;
  puVar4 = _malloc(param_4 * 0x1c);
  puVar2[2] = puVar4;
  for (uVar5 = (uint)(param_4 * 0x1c) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  iVar6 = 0xc - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[(int)puVar2 + iVar6] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0x2c - (int)param_3;
  do {
    cVar1 = *param_3;
    param_3[(int)puVar2 + iVar6] = cVar1;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0x4c - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[(int)puVar2 + iVar6] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  puVar2[0x1e] = param_5;
  puVar2[0x1f] = param_7;
  puVar2[0x20] = &DAT_2015ee44;
  puVar2[0x26] = 0;
  FUN_200f96b0();
  return puVar2;
}

