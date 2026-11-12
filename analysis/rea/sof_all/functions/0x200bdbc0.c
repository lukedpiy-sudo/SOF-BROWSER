// rea decompile_all
// name: FUN_200bdbc0
// address: 0x200bdbc0
// body: available
// range: 0x200bdbc0-0x200bdc95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200bdc46) */

int FUN_200bdbc0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int *in_ECX;
  uint uVar5;
  undefined4 uStack_4;
  
  iVar1 = in_ECX[6] + -1;
  iVar1 = iVar1 + (iVar1 >> 0x1f & 7U);
  if (iVar1 >> 3 < *in_ECX) {
    in_ECX[1] = in_ECX[6];
    return (uint)(uint3)(iVar1 >> 0xb) << 8;
  }
  in_ECX[6] = in_ECX[1];
  iVar2 = in_ECX[1] + -1;
  iVar1 = in_ECX[3];
  uVar3 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) + 1;
  uStack_4 = (uint)in_ECX & 0xffffff;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = in_ECX[4] - iVar1;
  }
  if (uVar5 < uVar3) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = in_ECX[4] - iVar1;
    }
    FUN_2009dd40(in_ECX[4],uVar3 - iVar1,(int)&uStack_4 + 3);
  }
  else if ((iVar1 != 0) && (uVar3 < (uint)(in_ECX[4] - iVar1))) {
    in_ECX[4] = iVar1 + uVar3;
  }
  pbVar4 = (byte *)in_ECX[6];
  uVar3 = (uint)pbVar4 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  if (uVar3 != 0) {
    pbVar4 = (byte *)(((int)(pbVar4 + -1 + ((int)(pbVar4 + -1) >> 0x1f & 7)) >> 3) + in_ECX[3]);
    *pbVar4 = *pbVar4 & (byte)(0xff >> (8U - (char)uVar3 & 0x1f));
  }
  return CONCAT31((int3)((uint)pbVar4 >> 8),1);
}

