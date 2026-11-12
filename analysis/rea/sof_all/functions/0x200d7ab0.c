// rea decompile_all
// name: FUN_200d7ab0
// address: 0x200d7ab0
// body: available
// range: 0x200d7ab0-0x200d7d48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200d7ab0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 unaff_EBX;
  short sVar6;
  float fStack_b8;
  int iStack_b4;
  undefined **local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 local_7f;
  undefined1 uStack_7a;
  undefined4 uStack_74;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 auStack_64 [17];
  undefined4 local_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined1 local_4;
  
  local_20 = 0;
  local_b0 = &PTR_LAB_20112a3c;
  local_4 = 0;
  local_7f = 0;
  local_6c = 0;
  local_68 = 0;
  if (in_ECX[0x24] != 0) {
    FUN_200d7a00();
    (**(code **)(*in_ECX + 0x10))();
    cVar4 = FUN_200cf570(&fStack_b8,&iStack_b4);
    if (*(char *)(**(int **)in_ECX[1] + 0x8e) == '\0') {
      (**(code **)(*(int *)in_ECX[0x24] + 0xb4))
                (*(undefined4 *)(*(int *)(**(int **)in_ECX[1] + 0x14) + 0x28));
    }
    FUN_200d7950();
    if (cVar4 == '\0') {
      if (((in_ECX[0x20] == 2) || (in_ECX[0x20] == 3)) && (iVar1 = in_ECX[0x1a], iVar1 != 0)) {
        iVar2 = in_ECX[0xb];
        iVar3 = in_ECX[10];
        *(float *)(iVar1 + 0x10) = fStack_b8;
        *(int *)(iVar1 + 0x18) = iVar3;
        *(int *)(iVar1 + 0x14) = iStack_b4;
        *(int *)(iVar1 + 0x1c) = iVar2;
        FUN_200c48f0(in_ECX);
      }
    }
    else {
      uStack_ac = *(undefined4 *)(*(int *)(**(int **)in_ECX[1] + 0x14) + 0x28);
      fStack_b8 = (float)(int)fStack_b8;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_94 = 0x43480000;
      fStack_9c = fStack_b8 + 50.0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      fStack_98 = (float)iStack_b4 + 50.0;
      uStack_83 = 0;
      uStack_82 = 0;
      uStack_81 = 1;
      uStack_80 = 0;
      local_7f = 0;
      auStack_64[0] = 0;
      uStack_7a = 0.5 < *(float *)(DAT_20406550 + 0x18);
      uStack_74 = 0x3f800000;
      uVar5 = (**(code **)(*(int *)in_ECX[0x23] + 0x1c))(s_forced_camera_20158d00);
      uStack_c = 0x3f800000;
      sVar6 = (short)uVar5;
      uStack_10 = 0;
      uStack_14 = 0;
      if (sVar6 == 0) {
        fStack_b8 = (float)(int)fStack_b8;
        uStack_18 = 0xc3480000;
        local_20 = unaff_EBX;
        fStack_1c = fStack_b8;
        FUN_200a0d50(unaff_EBX,fStack_b8,0);
      }
      else {
        local_20 = 0;
        fStack_1c = 0.0;
        uStack_18 = 0;
        (**(code **)(*(int *)in_ECX[0x24] + 200))
                  (*(undefined4 *)(*(int *)(**(int **)in_ECX[1] + 0x14) + 0x28),auStack_64,uVar5,7,1
                  );
      }
      (*DAT_20403628)(sVar6 != 0);
      (**(code **)(*(int *)in_ECX[0x24] + 0xa4))(&iStack_b4);
      (*DAT_20403624)(sVar6 != 0);
      if (in_ECX[0x1a] != 0) {
        FUN_200c48f0(in_ECX);
        return;
      }
    }
  }
  return;
}

