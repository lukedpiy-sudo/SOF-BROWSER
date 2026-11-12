// rea decompile_all
// name: FUN_2001b020
// address: 0x2001b020
// body: available
// range: 0x2001b020-0x2001b127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001b020(undefined4 *param_1,undefined4 *param_2,float *param_3,undefined1 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_14;
  float local_c [3];
  
  iVar1 = param_5[1];
  if (iVar1 != 0) {
    local_14 = 0;
    if (0 < iVar1) {
      iVar3 = (int)param_1 - (int)param_2;
      param_1 = (undefined4 *)(DAT_20244c58 + param_5[2] * 8);
      do {
        iVar6 = 3;
        pfVar2 = (float *)*param_1;
        puVar5 = param_2;
        do {
          if (0.0 <= *(float *)(((int)pfVar2 - (int)param_2) + (int)puVar5)) {
            uVar4 = *(undefined4 *)(iVar3 + (int)puVar5);
          }
          else {
            uVar4 = *puVar5;
          }
          *(undefined4 *)((int)puVar5 + ((int)local_c - (int)param_2)) = uVar4;
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (0.0 < (pfVar2[2] * param_3[2] + *param_3 * *pfVar2 + param_3[1] * pfVar2[1]) -
                  (pfVar2[3] -
                  (local_c[0] * *pfVar2 + local_c[1] * pfVar2[1] + local_c[2] * pfVar2[2]))) {
          return;
        }
        local_14 = local_14 + 1;
        param_1 = param_1 + 2;
      } while (local_14 < iVar1);
    }
    *param_4 = 1;
    param_4[1] = 1;
    *(undefined4 *)(param_4 + 4) = 0;
    *(undefined4 *)(param_4 + 0x2c) = *param_5;
  }
  return;
}

