// rea decompile_all
// name: FUN_2006c430
// address: 0x2006c430
// body: available
// range: 0x2006c430-0x2006c66d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_2006c430(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  void *local_24;
  int local_20;
  void *local_1c;
  int local_18;
  undefined1 local_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010b9cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_20 = in_ECX;
  FUN_2001fd60(&local_18,&param_1);
  local_24 = operator_new(0x14);
  local_4 = 0;
  local_1c = local_24;
  if (local_24 == (void *)0x0) {
    local_24 = (void *)0x0;
  }
  else {
    FUN_20071720(&local_29,0,&local_2a);
  }
  uVar2 = param_3;
  uVar4 = param_2;
  local_4 = 0xffffffff;
  local_2b = 0;
  if (local_18 != *(int *)(in_ECX + 0xc0)) {
    local_28 = 0;
    local_1c = (void *)**(int **)(in_ECX + 0xd4);
    if (local_1c != *(int **)(in_ECX + 0xd4)) {
      do {
        cVar5 = FUN_200bdbc0();
        if (cVar5 != '\0') {
          local_28 = 0;
          in_ECX = local_20;
          goto LAB_2006c579;
        }
        if ((short)local_28 != 0) {
          FUN_20071790(local_14,&local_28);
        }
        local_28 = 0;
        cVar5 = FUN_2007a300(param_1,uVar4,uVar2,param_4);
        if (cVar5 != '\0') {
          local_28 = (**(code **)(**(int **)((int)local_1c + 0x10) + 0x9c))();
        }
        FUN_20085230();
      } while (local_1c != *(void **)(local_20 + 0xd4));
      in_ECX = local_20;
      if (((short)local_28 != 0) && (cVar5 = FUN_200bdbc0(), in_ECX = local_20, cVar5 == '\0')) {
        FUN_20071790(local_14,&local_28);
        in_ECX = local_20;
      }
    }
LAB_2006c579:
    if (*(int *)((int)local_24 + 0x10) != 0) {
      param_2 = 0;
      param_3 = param_3 & 0xffffff00;
      FUN_200bdca0(&param_3,1);
      iVar1 = *(int *)(local_18 + 0x10);
      uVar2 = *(uint *)(iVar1 + 0x18);
      param_4 = uVar4;
      while (99 < uVar2) {
        FUN_20083550(&param_3);
        iVar3 = *(int *)(param_3 + 0x10);
        if (iVar3 != 0) {
          FUN_2006ec40();
          FUN_200f9f75(iVar3);
        }
        FUN_20083550(&param_2);
        FUN_2006f670(&local_18,param_2);
        in_ECX = local_20;
        uVar2 = *(uint *)(iVar1 + 0x18);
      }
      puVar6 = (undefined4 *)FUN_200820a0(&param_4);
      local_2b = 1;
      *puVar6 = local_24;
      goto LAB_2006c63b;
    }
  }
  if (local_24 != (void *)0x0) {
    FUN_2006ec40();
    FUN_200f9f75(local_24);
  }
LAB_2006c63b:
  FUN_20072b00(&local_24,**(undefined4 **)(in_ECX + 0xd4),*(undefined4 **)(in_ECX + 0xd4));
  ExceptionList = pvStack_c;
  return local_2b;
}

