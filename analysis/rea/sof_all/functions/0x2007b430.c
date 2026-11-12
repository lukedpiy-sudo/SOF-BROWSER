// rea decompile_all
// name: FUN_2007b430
// address: 0x2007b430
// body: available
// range: 0x2007b430-0x2007b609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007b430(float param_1,undefined4 param_2,char param_3,char param_4,int param_5,
                 undefined4 param_6,char param_7)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  int *in_ECX;
  float unaff_EBX;
  ushort uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float unaff_retaddr;
  
  uVar1 = param_1;
  uVar4 = SUB42(param_1,0);
  if (uVar4 == 0) {
    return;
  }
  uVar3 = (**(code **)(*(int *)in_ECX[0x71] + 0x10))();
  iVar2 = param_5;
  if (uVar3 < uVar4) {
    return;
  }
  bVar5 = *(char *)((int)in_ECX + 0xa9) == param_7;
  *(char *)((int)in_ECX + 0xa9) = param_7;
  *(undefined1 *)(in_ECX + 0x2a) = 0;
  fVar6 = (float10)(**(code **)(*in_ECX + 0x6c))(param_1,param_5,in_ECX + 0x4c);
  in_ECX[0x4b] = (int)(float)fVar6;
  if ((((uVar4 == *(ushort *)((int)in_ECX + 0xae)) && (iVar2 == in_ECX[0x2c])) &&
      (param_1._0_1_ == '\0')) && (bVar5)) {
    return;
  }
  if ((param_3 == '\0') || ((*(ushort *)((int)in_ECX + 0xae) == uVar4 && (bVar5)))) {
    fVar6 = (float10)unaff_retaddr;
  }
  else {
    fVar6 = (float10)FUN_2007d090(unaff_EBX,&param_4,&param_3);
    param_1 = (float)fVar6;
    if ((!bVar5) && (param_4 == '\0')) {
      param_1 = 1.0 - param_1;
    }
    fVar6 = (float10)(**(code **)(*in_ECX + 0x6c))(uVar1,iVar2,0);
    fVar6 = fVar6 * (float10)param_1 + (float10)unaff_retaddr;
    unaff_retaddr = (float)fVar6;
  }
  in_ECX[0x2c] = iVar2;
  *(ushort *)((int)in_ECX + 0xae) = uVar4;
  in_ECX[0x48] = (int)unaff_EBX;
  in_ECX[0x28] = (int)unaff_EBX;
  in_ECX[0x27] = (int)(float)((float10)unaff_EBX - fVar6);
  if (iVar2 == 3) {
    fVar6 = (float10)(**(code **)(*in_ECX + 0x6c))(uVar1,0,0);
    if ((float10)0.0 < fVar6) {
      fVar6 = (float10)unaff_retaddr / fVar6;
      if (fVar6 < (float10)0.0) {
        fVar7 = (float10)FUN_200fc9ed((double)-fVar6);
        fVar6 = fVar7 + (float10)(float)fVar6;
        if (fVar6 < (float10)0.0) goto LAB_2007b5c2;
      }
      if ((float10)1.0 < fVar6) {
        fVar6 = (float10)1.0;
      }
      goto LAB_2007b5ca;
    }
  }
  else if ((float)in_ECX[0x4b] != 0.0) goto LAB_2007b5ca;
LAB_2007b5c2:
  fVar6 = (float10)0.0;
LAB_2007b5ca:
  if ((float)in_ECX[0x4b] == 0.0) {
    in_ECX[0x28] = (int)(float)fVar6;
  }
  if (*(short *)((int)in_ECX + 0xae) != 0) {
    fVar6 = (float10)FUN_2007d2e0();
    in_ECX[0x49] = (int)(float)fVar6;
  }
  return;
}

