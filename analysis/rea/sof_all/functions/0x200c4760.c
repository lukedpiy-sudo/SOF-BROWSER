// rea decompile_all
// name: FUN_200c4760
// address: 0x200c4760
// body: available
// range: 0x200c4760-0x200c48e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c4760(int param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  
  if (param_3 != '\0') {
    iVar7 = in_ECX[5] + param_2;
    iVar8 = in_ECX[4] + param_1;
    piVar1 = in_ECX + 3;
    (*DAT_204035e4)(iVar8,iVar7,in_ECX[6],*in_ECX,piVar1);
    (*DAT_204035e4)(iVar8,in_ECX[7] + iVar7,in_ECX[6],-*in_ECX,piVar1);
    iVar2 = *in_ECX;
    (*DAT_204035e4)(iVar8,iVar2 + iVar7,iVar2,in_ECX[7] + iVar2 * -2,piVar1);
    iVar2 = *in_ECX;
    (*DAT_204035e4)(in_ECX[6] + iVar8,iVar2 + iVar7,-iVar2,in_ECX[7] + iVar2 * -2,piVar1);
  }
  iVar2 = in_ECX[1];
  if ((iVar2 != 0) && (piVar1 = in_ECX + 2, in_ECX[2] != 0)) {
    iVar8 = *in_ECX - iVar2;
    iVar7 = in_ECX[7];
    param_1 = in_ECX[4] + (iVar8 >> 1) + param_1;
    param_2 = in_ECX[5] + (iVar8 >> 1) + param_2;
    fVar3 = (float)param_2;
    fVar4 = (float)((in_ECX[6] - iVar8) + param_1);
    fVar5 = (float)param_1;
    (*DAT_204035ec)(fVar5,fVar3,fVar4,fVar3,(float)iVar2,piVar1);
    fVar6 = (float)((iVar7 - iVar8) + param_2);
    (*DAT_204035ec)(fVar4,fVar3,fVar4,fVar6,(float)in_ECX[1],piVar1);
    (*DAT_204035ec)(fVar4,fVar6,fVar5,fVar6,(float)in_ECX[1],piVar1);
    (*DAT_204035ec)(fVar5,fVar6,fVar5,fVar3,(float)in_ECX[1],piVar1);
  }
  return;
}

