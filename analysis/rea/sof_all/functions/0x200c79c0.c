// rea decompile_all
// name: FUN_200c79c0
// address: 0x200c79c0
// body: available
// range: 0x200c79c0-0x200c7b34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c79c0(void)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  void *in_stack_00001008;
  char *in_stack_00001018;
  char in_stack_0000101c;
  undefined4 uStack_c;
  undefined1 *local_8;
  char *local_4;
  
  local_4 = (char *)0xffffffff;
  local_8 = &LAB_2010e05b;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_200fa720();
  if ((DAT_20406560 == 0) || (in_stack_0000101c != '\0')) {
    iVar1 = -(int)in_stack_00001018;
    do {
      cVar3 = *in_stack_00001018;
      in_stack_00001018[(int)(&stack0x00000008 + iVar1)] = cVar3;
      in_stack_00001018 = in_stack_00001018 + 1;
    } while (cVar3 != '\0');
    pcVar4 = (char *)FUN_200fb453(&stack0x00000008,PTR_DAT_20158354);
    pvVar2 = uStack_c;
    while (pcVar4 != (char *)0x0) {
      uVar6 = 0xffffffff;
      uStack_c._3_1_ = (undefined1)((uint)pvVar2 >> 0x18);
      pcVar9 = pcVar4;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar3 != '\0');
      uVar7 = ~uVar6 - 1;
      uVar6 = (uint)local_8 >> 8;
      local_8 = (undefined1 *)CONCAT31((int3)uVar6,uStack_c._3_1_);
      local_4 = (char *)0x0;
      uStack_c = pvVar2;
      cVar3 = FUN_2000a6c0(uVar7,1);
      if (cVar3 != '\0') {
        pcVar9 = local_4;
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar7 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar9 = pcVar9 + 1;
        }
        local_4[uVar7] = '\0';
      }
      iVar1 = DAT_2040655c;
      piVar8 = *(int **)(DAT_2040655c + 4);
      piVar5 = operator_new(0x18);
      *piVar5 = iVar1;
      if (piVar8 == (int *)0x0) {
        piVar8 = piVar5;
      }
      piVar5[1] = (int)piVar8;
      *(int **)(iVar1 + 4) = piVar5;
      *(int **)piVar5[1] = piVar5;
      FUN_200279a0(piVar5 + 2,&local_8);
      DAT_20406560 = DAT_20406560 + 1;
      if (local_4 != (char *)0x0) {
        if (local_4[-1] == '\0') {
          FUN_200f9f75(local_4 + -1);
        }
        else {
          local_4[-1] = local_4[-1] + -1;
        }
      }
      local_4 = (char *)0x0;
      pcVar4 = (char *)FUN_200fb453(0,PTR_DAT_20158354);
      pvVar2 = uStack_c;
    }
  }
  ExceptionList = in_stack_00001008;
  return;
}

