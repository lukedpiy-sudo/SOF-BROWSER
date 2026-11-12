// rea decompile_all
// name: FUN_20098140
// address: 0x20098140
// body: available
// range: 0x20098140-0x200985ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20098140(float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar1 = param_1;
  fVar3 = (float10)FUN_20068d50(param_1);
  FUN_200c2c00(param_2,param_3,param_4,param_5,(float)fVar3);
  fVar3 = (float10)FUN_20068d50(param_1);
  param_1 = (float)fVar3;
  if (fVar3 < (float10)0.0) {
    param_1 = 10000.0;
  }
  FUN_200c2c00(param_2,param_3,param_4,param_5,param_1);
  fVar3 = (float10)FUN_20068d50(uVar1);
  param_1 = (float)fVar3;
  if (fVar3 < (float10)0.0) {
    param_1 = 10000.0;
  }
  FUN_200c2c00(param_2,param_3,param_4,param_5,param_1);
  FUN_20068f80(uVar1,&local_30);
  if (*(char *)(in_ECX + 5) == '\0') {
    *(undefined1 *)(in_ECX + 4) = 1;
    *(undefined1 *)(in_ECX + 5) = 1;
    FUN_200802f0(&local_30);
  }
  if (*(char *)(in_ECX + 4) == '\0') {
LAB_2009825f:
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_20068320(&local_30);
    if (cVar2 == '\0') goto LAB_2009825f;
    cVar2 = '\x01';
  }
  *(char *)(in_ECX + 4) = cVar2;
  if (cVar2 == '\0') {
    FUN_20068550(param_4,in_ECX + 8);
    FUN_20068790(*(undefined4 *)(in_ECX + 0x1c),1,&local_30);
  }
  FUN_20068f80(uVar1,&local_30);
  if (*(char *)(in_ECX + 0x25) == '\0') {
    *(undefined1 *)(in_ECX + 0x24) = 1;
    *(undefined1 *)(in_ECX + 0x25) = 1;
    FUN_200802f0(&local_30);
  }
  if (*(char *)(in_ECX + 0x24) == '\0') {
LAB_200982d5:
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_20068320(&local_30);
    if (cVar2 == '\0') goto LAB_200982d5;
    cVar2 = '\x01';
  }
  *(char *)(in_ECX + 0x24) = cVar2;
  if (cVar2 == '\0') {
    FUN_20068550(param_4,in_ECX + 0x28);
    FUN_20068a80(*(undefined4 *)(in_ECX + 0x3c),&local_30);
  }
  FUN_200c2c00(param_2,param_3,param_4,param_5,
               SQRT(local_30 * local_30 + local_28 * local_28 + local_2c * local_2c));
  FUN_20068f80(uVar1,&local_24);
  fVar3 = (float10)FUN_20068d50(uVar1);
  fVar3 = (float10)fcos(fVar3 * (float10)0.008726389);
  FUN_200c2c00(param_2,param_3,param_4,param_5,(float)fVar3);
  fVar3 = (float10)FUN_20068d50(uVar1);
  fVar3 = (float10)fcos(fVar3 * (float10)0.008726389);
  FUN_200c2c00(param_2,param_3,param_4,param_5,(float)fVar3);
  FUN_20068f80(uVar1,&local_18);
  fVar3 = (float10)FUN_20068d50(uVar1);
  param_1 = (float)fVar3;
  if (fVar3 < (float10)0.01) {
    param_1 = 1.0;
  }
  FUN_200c2c00(param_2,param_3,param_4,param_5,param_1);
  FUN_200c3870(SQRT(local_24 * local_24 + local_20 * local_20 + local_1c * local_1c));
  FUN_200c3870(SQRT(local_18 * local_18 + local_10 * local_10 + local_14 * local_14));
  local_c = local_24;
  local_4 = local_1c;
  local_8 = local_20;
  FUN_200c38a0(&local_18);
  FUN_200c3870(SQRT(local_c * local_c + local_8 * local_8 + local_4 * local_4));
  if (*(char *)(in_ECX + 0xc1) == '\0') {
    *(undefined1 *)(in_ECX + 0xc0) = 1;
    *(undefined1 *)(in_ECX + 0xc1) = 1;
    FUN_200802f0(&local_24);
  }
  if (*(char *)(in_ECX + 0xc0) == '\0') {
LAB_2009850c:
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_20068320(&local_24);
    if (cVar2 == '\0') goto LAB_2009850c;
    cVar2 = '\x01';
  }
  *(char *)(in_ECX + 0xc0) = cVar2;
  if (cVar2 == '\0') {
    FUN_20068550(param_4,in_ECX + 0xc4);
    FUN_20068a80(*(undefined4 *)(in_ECX + 0xd8),&local_24);
  }
  if (*(char *)(in_ECX + 0x111) == '\0') {
    *(undefined1 *)(in_ECX + 0x110) = 1;
    *(undefined1 *)(in_ECX + 0x111) = 1;
    FUN_200802f0(&local_18);
  }
  if (*(char *)(in_ECX + 0x110) != '\0') {
    cVar2 = FUN_20068320(&local_18);
    if (cVar2 != '\0') {
      cVar2 = '\x01';
      goto LAB_2009858c;
    }
  }
  cVar2 = '\0';
LAB_2009858c:
  *(char *)(in_ECX + 0x110) = cVar2;
  if (cVar2 == '\0') {
    FUN_20068550(param_4,in_ECX + 0x114);
    FUN_20068a80(*(undefined4 *)(in_ECX + 0x128),&local_18);
  }
  FUN_20068360(param_2,param_3,param_4,param_5,&local_c);
  return;
}

