// rea decompile_all
// name: FUN_500660b0
// address: 0x500660b0
// body: available
// range: 0x500660b0-0x50066287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall
FUN_500660b0(void *this,int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,char *param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined1 *this_00;
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501142fe;
  local_c = ExceptionList;
  this_00 = (undefined1 *)((int)this + 0x148);
  ExceptionList = &local_c;
  *this_00 = param_1._0_1_;
  *(undefined1 *)((int)this + 0x149) = param_1._0_1_;
  *(undefined1 *)((int)this + 0x154) = 0;
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)((int)this + 0x150) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  **(undefined4 **)((int)this + 0x150) = 0;
  *(undefined4 *)(*(int *)((int)this + 0x150) + 8) = 0;
  uVar3 = FUN_5006b2e0(*(undefined4 *)((int)this + 0x150),0);
  *(undefined4 *)((int)this + 0x14c) = uVar3;
  *(undefined4 *)uVar3 = uVar3;
  *(int *)(*(int *)((int)this + 0x14c) + 8) = *(int *)((int)this + 0x14c);
  *(undefined4 *)((int)this + 0x158) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_5012872c;
  _strncpy((char *)((int)this + 4),(char *)param_1,0x40);
  *(int **)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = param_3;
  *(undefined4 *)((int)this + 0x4c) = param_5;
  *(undefined4 *)((int)this + 0x50) = param_6;
  *(undefined4 *)((int)this + 0xac) = param_4;
  *(undefined4 *)((int)this + 0x54) = param_7;
  _strncpy((char *)((int)this + 0x58),param_8,0x40);
  *(undefined4 *)((int)this + 0x9c) = param_10;
  *(undefined4 *)((int)this + 0xa0) = param_11;
  *(undefined4 *)((int)this + 0x98) = param_9;
  *(undefined4 *)((int)this + 0xa4) = 0;
  puVar5 = (undefined4 *)((int)this + 0xb0);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0xf0) = 0x3f800000;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  puVar5 = (undefined4 *)((int)this + 0x104);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x144) = 0;
  piVar6 = *(int **)((int)this + 0x14c);
  param_2 = (int *)*piVar6;
  piVar1 = param_2;
  if (*(int *)((int)this + 0x158) == 0) {
    while (piVar1 != piVar6) {
      param_2 = piVar1;
      FUN_5006b290((int *)&param_2);
      FUN_500c4640(this_00,&param_1,piVar1);
      piVar1 = param_2;
    }
  }
  else {
    piVar6 = (int *)piVar6[1];
    if (piVar6 != *(int **)((int)this + 0x150)) {
      do {
        param_1 = piVar6;
        FUN_5006b210(this_00,(int *)piVar6[2]);
        piVar6 = (int *)*piVar6;
        FUN_50106b60((undefined *)param_1);
      } while (piVar6 != (int *)*(int *)((int)this + 0x150));
    }
    *(undefined4 *)(*(int *)((int)this + 0x14c) + 4) = *(undefined4 *)((int)this + 0x150);
    *(undefined4 *)((int)this + 0x158) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 0x14c) = *(undefined4 *)((int)this + 0x14c);
    *(int *)(*(int *)((int)this + 0x14c) + 8) = *(int *)((int)this + 0x14c);
  }
  ExceptionList = local_c;
  return this;
}

