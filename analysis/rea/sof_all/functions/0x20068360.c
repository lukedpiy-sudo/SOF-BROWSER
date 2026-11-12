// rea decompile_all
// name: FUN_20068360
// address: 0x20068360
// body: available
// range: 0x20068360-0x2006847a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x2006844d) */

void FUN_20068360(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 float *param_5)

{
  char cVar1;
  char *in_ECX;
  uint uVar2;
  int iVar3;
  
  if (in_ECX[1] == '\0') {
    *in_ECX = '\x01';
    in_ECX[1] = '\x01';
    *(float *)(in_ECX + 4) = *param_5;
    *(float *)(in_ECX + 8) = param_5[1];
    *(float *)(in_ECX + 0xc) = param_5[2];
  }
  if ((((*in_ECX == '\0') || (*(float *)(in_ECX + 4) != *param_5)) ||
      (*(float *)(in_ECX + 8) != param_5[1])) || (*(float *)(in_ECX + 0xc) != param_5[2])) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  *in_ECX = cVar1;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(in_ECX + 0x14);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(int *)(in_ECX + 0x18) - iVar3) / 0xc;
    }
    if (uVar2 < param_3) {
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (*(int *)(in_ECX + 0x18) - iVar3) / 0xc;
      }
      FUN_20068790(*(undefined4 *)(in_ECX + 0x18),param_3 - iVar3,in_ECX + 4);
    }
    else if ((iVar3 != 0) && (param_3 < (uint)((*(int *)(in_ECX + 0x18) - iVar3) / 0xc))) {
      *(uint *)(in_ECX + 0x18) = iVar3 + param_3 * 0xc;
    }
    FUN_20068790(*(undefined4 *)(in_ECX + 0x18),1,param_5);
  }
  return;
}

