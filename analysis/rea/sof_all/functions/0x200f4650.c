// rea decompile_all
// name: FUN_200f4650
// address: 0x200f4650
// body: available
// range: 0x200f4650-0x200f474a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_200f4650(int *param_1,undefined4 param_2,code *param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *param_1;
  bVar1 = true;
  if (iVar2 != 0) {
    if (param_5 == 0) {
      iVar4 = param_1[2];
      iVar2 = iVar2 - param_4;
      iVar6 = iVar4 * param_4 + param_1[5];
      iVar7 = 0;
      param_4 = iVar6;
      if (0 < iVar2) {
        do {
          iVar3 = (*param_3)(param_2,param_4);
          if (iVar3 == 0) {
            iVar6 = iVar7 * iVar4 + iVar6;
            goto LAB_200f472e;
          }
          iVar7 = iVar7 + 1;
          param_4 = param_4 + iVar4;
        } while (iVar7 < iVar2);
      }
    }
    else {
      iVar7 = param_1[2];
      iVar6 = iVar7 * param_4 + param_1[5];
      iVar4 = 0;
      iVar2 = (iVar2 - param_4) + -1;
      bVar1 = false;
      if (-1 < iVar2) {
        do {
          iVar5 = iVar4 + iVar2 >> 1;
          iVar3 = (*param_3)(iVar5 * iVar7 + iVar6,param_2);
          if (iVar3 == 0) {
            bVar1 = true;
LAB_200f46ba:
            iVar2 = iVar5 + -1;
          }
          else {
            if (-1 < iVar3) goto LAB_200f46ba;
            iVar4 = iVar5 + 1;
          }
        } while (iVar4 <= iVar2);
      }
      iVar6 = iVar4 * iVar7 + iVar6;
LAB_200f472e:
      if ((iVar6 != 0) && (bVar1)) {
        return (iVar6 - param_1[5]) / param_1[2];
      }
    }
  }
  return -1;
}

