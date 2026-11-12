// rea decompile_all
// name: FUN_50054fc0
// address: 0x50054fc0
// body: available
// range: 0x50054fc0-0x50055271 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50054fc0(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint in_EAX;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  iVar7 = *(int *)(param_1 + 0x45c);
  if (((*(int *)(iVar7 + 0x30) != 0) || (iVar6 = *(int *)(iVar7 + 0x80), iVar6 == 0)) ||
     (uVar1 = (ushort)(*(float *)(iVar7 + 0x84) < DAT_5015ccdc),
     uVar2 = (ushort)(*(float *)(iVar7 + 0x84) == DAT_5015ccdc),
     in_EAX = (uint)(ushort)(uVar1 << 8 | uVar2 << 0xe), uVar1 != 0 || uVar2 != 0)) {
LAB_50055269:
    return in_EAX & 0xffffff00;
  }
  if (iVar6 == 1) {
    iVar6 = FUN_500537f0(param_1,(float *)(iVar7 + 0x68));
    iVar7 = *(int *)(param_1 + 0x45c);
    if (iVar6 == 0) {
      local_18 = *(float *)(iVar7 + 0x68) - *(float *)(param_1 + 4);
      local_4 = *(float *)(iVar7 + 0x70);
      local_14 = *(float *)(iVar7 + 0x6c) - *(float *)(param_1 + 8);
      local_10 = local_4 - *(float *)(param_1 + 0xc);
      FUN_500c3570(&local_18,&local_c);
      *(float *)(*(int *)(param_1 + 0x74) + 0x4fc) = local_c;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x500) = local_8;
      iVar7 = FUN_50053cf0(param_1);
      if (iVar7 == 0) {
        FUN_50054070(param_1);
      }
      else {
        *(float *)(*(int *)(param_1 + 0x45c) + 0x28) = DAT_5015ccdc + 1.0;
      }
      lVar8 = __ftol();
      *(short *)(param_2 + 10) = (short)lVar8;
      iVar7 = *(int *)(param_1 + 0x45c);
      fVar3 = *(float *)(param_1 + 4) - *(float *)(iVar7 + 0x68);
      fVar5 = *(float *)(param_1 + 8) - *(float *)(iVar7 + 0x6c);
      fVar4 = *(float *)(param_1 + 0xc) - *(float *)(iVar7 + 0x70);
      if (fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 < 900.0) {
        *(undefined4 *)(iVar7 + 0x80) = 2;
      }
LAB_50055226:
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x14) = 0;
      lVar8 = __ftol();
      *(short *)(param_2 + 6) = (short)lVar8;
      goto LAB_5005524d;
    }
  }
  else {
    if (iVar6 != 2) goto LAB_50055269;
    iVar6 = FUN_500537f0(param_1,(float *)(iVar7 + 0x74));
    iVar7 = *(int *)(param_1 + 0x45c);
    if (iVar6 == 0) {
      local_18 = *(float *)(iVar7 + 0x74) - *(float *)(param_1 + 4);
      local_4 = *(float *)(iVar7 + 0x7c);
      local_14 = *(float *)(iVar7 + 0x78) - *(float *)(param_1 + 8);
      local_10 = local_4 - *(float *)(param_1 + 0xc);
      FUN_500c3570(&local_18,&local_c);
      *(float *)(*(int *)(param_1 + 0x74) + 0x4fc) = local_c;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x500) = local_8;
      lVar8 = __ftol();
      *(short *)(param_2 + 10) = (short)lVar8;
      iVar7 = *(int *)(param_1 + 0x45c);
      fVar3 = *(float *)(param_1 + 4) - *(float *)(iVar7 + 0x74);
      fVar5 = *(float *)(param_1 + 8) - *(float *)(iVar7 + 0x78);
      fVar4 = *(float *)(param_1 + 0xc) - *(float *)(iVar7 + 0x7c);
      if (fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4 < 900.0) {
        *(undefined4 *)(iVar7 + 0x80) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x84) = 0;
      }
      goto LAB_50055226;
    }
  }
  *(undefined4 *)(iVar7 + 0x80) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  lVar8 = __ftol();
  *(short *)(param_2 + 6) = (short)lVar8;
LAB_5005524d:
  lVar8 = __ftol();
  *(undefined2 *)(param_2 + 8) = 0;
  *(short *)(param_2 + 4) = (short)lVar8;
  return CONCAT31((int3)((ulonglong)lVar8 >> 8),1);
}

