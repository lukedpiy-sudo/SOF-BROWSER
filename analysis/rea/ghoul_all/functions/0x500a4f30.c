// rea decompile_all
// name: FUN_500a4f30
// address: 0x500a4f30
// body: available
// range: 0x500a4f30-0x500a503f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500a4f30(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    local_1c = *(int *)((int)this + 0x14);
    piVar3 = (int *)**(undefined4 **)((int)this + 8);
    local_10 = this;
    if (0 < local_1c) {
      do {
        if (*(char *)(piVar3[2] + 0x15) == '\0') {
          piVar2 = (int *)FUN_500a6ce0((int *)piVar3[2]);
LAB_500a4f8e:
          piVar4 = piVar2;
        }
        else {
          piVar2 = (int *)piVar3[1];
          piVar4 = piVar3;
          if (piVar3 == (int *)piVar2[2]) {
            do {
              piVar4 = piVar2;
              piVar2 = (int *)piVar4[1];
            } while (piVar4 == (int *)piVar2[2]);
          }
          if ((int *)piVar4[2] != piVar2) goto LAB_500a4f8e;
        }
        pvVar1 = (void *)piVar3[4];
        if (*(int *)((int)pvVar1 + 0x10) == param_1) {
          if ((pvVar1 != (void *)0x0) &&
             (local_20 = pvVar1, FUN_5006b100(&DAT_5018b4b8,(int *)&local_18,(uint *)&local_20),
             piVar2 = local_18, local_18 != DAT_5018b4bc)) {
            FUN_5006b1a0(&DAT_5018b4cc,(int *)&local_14,local_18 + 4);
            FUN_500c4640(&DAT_5018b4cc,&local_c,local_14);
            FUN_500c4640(&DAT_5018b4b8,&local_8,piVar2);
            if (local_20 != (void *)0x0) {
              FUN_500a4dc0(local_20,1);
            }
          }
          piVar3[4] = 0;
          FUN_500c4640((void *)((int)local_10 + 4),&local_4,piVar3);
        }
        local_1c = local_1c + -1;
        piVar3 = piVar4;
      } while (local_1c != 0);
    }
  }
  return;
}

