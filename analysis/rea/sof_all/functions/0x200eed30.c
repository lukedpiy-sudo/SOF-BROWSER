// rea decompile_all
// name: FUN_200eed30
// address: 0x200eed30
// body: available
// range: 0x200eed30-0x200eee0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200eed30(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_18 [6];
  
  iVar2 = param_1;
  iVar3 = FUN_200f44a0(*(undefined4 *)(param_1 + 0x390));
  iVar6 = 0;
  param_1 = 0;
  if (0 < iVar3) {
    do {
      puVar4 = (undefined4 *)FUN_200f44b0(*(undefined4 *)(iVar2 + 0x390),iVar6);
      if ((puVar4[5] == 0) || (iVar5 = FUN_200ef3b0(iVar2,puVar4[5]), iVar5 != 0)) {
        if (((puVar4[5] == 0) || (iVar5 = FUN_200ef5e0(iVar2,puVar4[5]), iVar5 != 0)) &&
           ((param_2 == 0 || (puVar4[4] == param_2)))) {
          uVar1 = *(undefined4 *)(iVar2 + 0x390);
          puVar7 = local_18;
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          FUN_200f45a0(uVar1,iVar6);
          FUN_200eea90(iVar2,local_18);
          if (param_2 != 0) {
            return;
          }
        }
        else {
          iVar6 = iVar6 + 1;
        }
      }
      else {
        FUN_200edbb0(puVar4);
        FUN_200f45a0(*(undefined4 *)(iVar2 + 0x390),iVar6);
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar3);
  }
  return;
}

