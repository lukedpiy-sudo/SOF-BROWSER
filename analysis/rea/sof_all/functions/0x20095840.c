// rea decompile_all
// name: FUN_20095840
// address: 0x20095840
// body: available
// range: 0x20095840-0x20095a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20095840(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  int iVar6;
  float local_c;
  float local_8;
  float local_4;
  
  fVar5 = (float10)FUN_20068d50(param_1);
  FUN_200c2c00(param_2,param_3,param_4,param_5,(float)fVar5);
  fVar5 = (float10)FUN_20068d50(param_1);
  FUN_200c2c00(param_2,param_3,param_4,param_5,(float)fVar5);
  fVar5 = (float10)FUN_20068d50(param_1);
  FUN_200c2c00(param_2,param_3,param_4,param_5,(float)fVar5);
  FUN_20068f80(param_1,&local_c);
  if (*(char *)(in_ECX + 5) == '\0') {
    *(undefined1 *)(in_ECX + 4) = 1;
    *(undefined1 *)(in_ECX + 5) = 1;
    *(float *)(in_ECX + 8) = local_c;
    *(float *)(in_ECX + 0xc) = local_8;
    *(float *)(in_ECX + 0x10) = local_4;
  }
  if ((((*(char *)(in_ECX + 4) == '\0') || (*(float *)(in_ECX + 8) != local_c)) ||
      (*(float *)(in_ECX + 0xc) != local_8)) || (*(float *)(in_ECX + 0x10) != local_4)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)(in_ECX + 4) = cVar2;
  if (cVar2 == '\0') {
    uVar3 = FUN_200b93c0();
    if (uVar3 < param_4) {
      uVar1 = *(undefined4 *)(in_ECX + 0x1c);
      iVar6 = in_ECX + 8;
      iVar4 = FUN_200b93c0(iVar6);
      FUN_20068790(uVar1,param_4 - iVar4,iVar6);
    }
    else {
      uVar3 = FUN_200b93c0();
      if (param_4 < uVar3) {
        FUN_2009a6c0(*(int *)(in_ECX + 0x18) + param_4 * 0xc,*(undefined4 *)(in_ECX + 0x1c));
      }
    }
    FUN_20068a80(*(undefined4 *)(in_ECX + 0x1c),&local_c);
  }
  FUN_20068f80(param_1,&local_c);
  if (*(char *)(in_ECX + 0x25) == '\0') {
    *(undefined1 *)(in_ECX + 0x24) = 1;
    *(undefined1 *)(in_ECX + 0x25) = 1;
    *(float *)(in_ECX + 0x28) = local_c;
    *(float *)(in_ECX + 0x2c) = local_8;
    *(float *)(in_ECX + 0x30) = local_4;
  }
  if (((*(char *)(in_ECX + 0x24) == '\0') || (*(float *)(in_ECX + 0x28) != local_c)) ||
     ((*(float *)(in_ECX + 0x2c) != local_8 || (*(float *)(in_ECX + 0x30) != local_4)))) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)(in_ECX + 0x24) = cVar2;
  if (cVar2 == '\0') {
    FUN_20068550(param_4,in_ECX + 0x28);
    FUN_20068790(*(undefined4 *)(in_ECX + 0x3c),1,&local_c);
  }
  FUN_200c2c00(param_2,param_3,param_4,param_5,
               SQRT(local_8 * local_8 + local_4 * local_4 + local_c * local_c));
  return;
}

