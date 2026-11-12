// rea decompile_all
// name: FUN_200facde
// address: 0x200facde
// body: available
// range: 0x200facde-0x200fade7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200facde(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = param_4;
  uVar5 = param_2 * param_3;
  if (uVar5 == 0) {
    param_3 = 0;
  }
  else {
    uVar4 = uVar5;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((piVar1[3] & 0x108U) == 0) || (uVar6 = piVar1[1], uVar6 == 0)) {
        if (param_4 <= uVar4) {
          if (((piVar1[3] & 0x108U) != 0) && (iVar2 = FUN_200ff8e0(piVar1), iVar2 != 0)) {
LAB_200faddf:
            return (uVar5 - uVar4) / param_2;
          }
          uVar6 = uVar4;
          if (param_4 != (int *)0x0) {
            uVar6 = uVar4 - uVar4 % (uint)param_4;
          }
          uVar3 = FUN_201005ea(piVar1[4],param_1,uVar6);
          if ((uVar3 == 0xffffffff) || (uVar4 = uVar4 - uVar3, uVar3 < uVar6)) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_200faddf;
          }
          goto LAB_200fad96;
        }
        iVar2 = FUN_2010046e((int)*param_1,piVar1);
        if (iVar2 == -1) goto LAB_200faddf;
        param_1 = param_1 + 1;
        param_4 = (int *)piVar1[6];
        uVar4 = uVar4 - 1;
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        uVar3 = uVar4;
        if (uVar6 <= uVar4) {
          uVar3 = uVar6;
        }
        FUN_200fe470(*piVar1,param_1,uVar3);
        piVar1[1] = piVar1[1] - uVar3;
        *piVar1 = *piVar1 + uVar3;
        uVar4 = uVar4 - uVar3;
LAB_200fad96:
        param_1 = param_1 + uVar3;
      }
    } while (uVar4 != 0);
  }
  return param_3;
}

