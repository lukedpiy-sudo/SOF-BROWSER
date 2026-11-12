// rea decompile_all
// name: FUN_2004fec0
// address: 0x2004fec0
// body: available
// range: 0x2004fec0-0x200500b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_2004fec0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int unaff_retaddr;
  void *in_stack_0009c410;
  char *in_stack_0009c420;
  undefined4 uStack_c;
  undefined1 *local_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  local_8 = &LAB_2010b42c;
  uStack_c = ExceptionList;
  ExceptionList = &uStack_c;
  FUN_200fa720();
  iVar3 = FUN_200faa9a(in_stack_0009c420,&DAT_201311d4);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_200fb1ba(&stack0x00000000,1,0xc,iVar3);
    if (unaff_retaddr == 0x4b434150) {
      local_4 = param_2 >> 6;
      if (local_4 < 0x2711) {
        FUN_200faf40(iVar3,param_1,0);
        FUN_200fb1ba(&stack0x00000010,1,param_2,iVar3);
        puVar4 = operator_new(0x20030);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *(undefined1 *)(puVar4 + 1) = uStack_c._3_1_;
          *(undefined1 *)((int)puVar4 + 5) = uStack_c._3_1_;
          *(undefined1 *)(puVar4 + 4) = 0;
          pvVar5 = operator_new(0x28);
          *(undefined4 *)((int)pvVar5 + 4) = 0;
          *(undefined1 *)((int)pvVar5 + 0x24) = 1;
          *(undefined1 *)((int)pvVar5 + 0x25) = 0;
          puVar4[3] = pvVar5;
          *(undefined1 *)((int)pvVar5 + 0x25) = 1;
          *(undefined4 *)puVar4[3] = 0;
          *(undefined4 *)(puVar4[3] + 8) = 0;
          uVar1 = puVar4[3];
          pvVar5 = operator_new(0x28);
          *(undefined4 *)((int)pvVar5 + 4) = uVar1;
          *(undefined1 *)((int)pvVar5 + 0x24) = 0;
          *(undefined1 *)((int)pvVar5 + 0x25) = 0;
          puVar4[2] = pvVar5;
          *(void **)pvVar5 = pvVar5;
          *(undefined4 *)(puVar4[2] + 8) = puVar4[2];
          puVar4[5] = 0;
          *(undefined1 *)(puVar4 + 6) = uStack_c._3_1_;
          uVar6 = 0xffffffff;
          puVar4[7] = 0;
          puVar4[8] = 0;
          puVar4[9] = 0;
          pcVar8 = in_stack_0009c420;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar2 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar2 != '\0');
          local_8 = (undefined1 *)(~uVar6 - 1);
          cVar2 = FUN_2000a6c0(local_8,1);
          if (cVar2 != '\0') {
            pcVar8 = (char *)puVar4[7];
            for (uVar6 = (uint)local_8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)in_stack_0009c420;
              in_stack_0009c420 = in_stack_0009c420 + 4;
              pcVar8 = pcVar8 + 4;
            }
            for (uVar6 = (uint)local_8 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar8 = *in_stack_0009c420;
              in_stack_0009c420 = in_stack_0009c420 + 1;
              pcVar8 = pcVar8 + 1;
            }
            puVar4[8] = local_8;
            local_8[puVar4[7]] = 0;
          }
          puVar4[0x800a] = 0xffffffff;
          *puVar4 = &PTR_LAB_20111e54;
        }
        if (0 < (int)local_4) {
          puVar7 = (undefined4 *)&stack0x00000048;
          uVar6 = local_4;
          do {
            FUN_2004f820(puVar7 + -0xe,*puVar7,puVar7[1]);
            puVar7 = puVar7 + 0x10;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        FUN_200fa9ae(iVar3);
        puVar4 = (undefined4 *)0x0;
      }
    }
    else {
      FUN_200fa9ae(iVar3);
      puVar4 = (undefined4 *)0x0;
    }
  }
  ExceptionList = in_stack_0009c410;
  return puVar4;
}

