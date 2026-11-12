// rea decompile_all
// name: FUN_20042af0
// address: 0x20042af0
// body: available
// range: 0x20042af0-0x20042d91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20042af0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined2 extraout_var;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined1 local_38 [56];
  
  if (*(int *)(in_ECX + 0x80) == 0) {
    uVar1 = *(uint *)(in_ECX + 0x68);
    if (((uVar1 & 6) != 0) &&
       (*(int *)(&DAT_2015f054 + *(int *)(in_ECX + 0x6c) * 0x18c) != DAT_201e7e64)) {
      *(undefined4 *)(in_ECX + 0x80) = 1;
      return;
    }
    puVar5 = *(undefined4 **)(in_ECX + 0x78);
    if ((puVar5 != (undefined4 *)0x0) && ((float)puVar5[0x1b] < DAT_2027c478)) {
      *(undefined4 *)(in_ECX + 0x78) = 0;
      *(undefined4 *)(in_ECX + 0x80) = 1;
      return;
    }
    if (((uVar1 & 6) != 0) &&
       ((*(uint *)(&DAT_2015ef9c + *(int *)(in_ECX + 0x6c) * 0x18c) & 0x4000) != 0)) {
      *(undefined4 *)(in_ECX + 0x80) = 1;
      return;
    }
    if (puVar5 == (undefined4 *)0x0) {
      if ((uVar1 & 2) == 0) {
        if ((uVar1 & 4) != 0) {
          piVar3 = (int *)FUN_20069630(1,0);
          iVar7 = (**(code **)(*piVar3 + 0x24))
                            (CONCAT22(extraout_var,*(undefined2 *)(in_ECX + 0x70)));
          if (*(int *)(in_ECX + 0x7c) != 0) {
            uVar2 = FUN_20042720(iVar7);
            *(undefined4 *)(in_ECX + 0x74) = uVar2;
          }
          if ((iVar7 == 0) || (*(int *)(in_ECX + 0x74) == 0)) {
            *(undefined4 *)(in_ECX + 0x80) = 1;
          }
          else {
            if ((*(byte *)(in_ECX + 0x68) & 0x40) == 0) {
              iVar8 = in_ECX + 0x30;
              iVar4 = in_ECX + 0x3c;
              iVar6 = in_ECX + 0x24;
            }
            else {
              iVar8 = in_ECX + 0x24;
              iVar4 = in_ECX + 0x30;
              iVar6 = in_ECX + 0x3c;
            }
            uVar2 = FUN_20030570(&DAT_2015ef6c + *(int *)(in_ECX + 0x6c) * 0x18c,iVar7,
                                 CONCAT22((short)((uint)iVar4 >> 0x10),
                                          *(undefined2 *)(in_ECX + 0x74)),0,in_ECX + 0xc,iVar6,iVar4
                                 ,iVar8);
            uVar2 = FUN_20030540(&DAT_2015ef6c + *(int *)(in_ECX + 0x6c) * 0x18c,uVar2);
            FUN_200303c0(uVar2);
          }
        }
      }
      else {
        puVar5 = (undefined4 *)FUN_20030540(&DAT_2015ef6c + *(int *)(in_ECX + 0x6c) * 0x18c);
        *(undefined4 *)(in_ECX + 0xc) = *puVar5;
        *(undefined4 *)(in_ECX + 0x10) = puVar5[1];
        *(undefined4 *)(in_ECX + 0x14) = puVar5[2];
        uVar2 = FUN_20030570(&DAT_2015ef6c + *(int *)(in_ECX + 0x6c) * 0x18c,in_ECX + 0x24,
                             in_ECX + 0x3c,in_ECX + 0x30);
        FUN_20054b30(uVar2);
      }
    }
    else {
      if ((*(byte *)(puVar5 + 0x1d) & 8) == 0) {
        *(undefined4 *)(in_ECX + 0xc) = *puVar5;
        *(undefined4 *)(in_ECX + 0x10) = puVar5[1];
        uVar2 = puVar5[2];
      }
      else {
        *(undefined4 *)(in_ECX + 0xc) = puVar5[10];
        *(undefined4 *)(in_ECX + 0x10) = puVar5[0xb];
        uVar2 = puVar5[0xc];
      }
      *(undefined4 *)(in_ECX + 0x14) = uVar2;
      iVar7 = *(int *)(in_ECX + 0x78);
      *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(iVar7 + 0x94);
      *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(iVar7 + 0x98);
      *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar7 + 0x9c);
      VectorNormalize((undefined4 *)(in_ECX + 0x24));
    }
    if ((*(byte *)(in_ECX + 0x68) & 0x20) != 0) {
      local_7c = *(float *)(in_ECX + 0x24) * 1024.0 + *(float *)(in_ECX + 0xc);
      local_78 = *(float *)(in_ECX + 0x28) * 1024.0 + *(float *)(in_ECX + 0x10);
      local_74 = *(float *)(in_ECX + 0x2c) * 1024.0 + *(float *)(in_ECX + 0x14);
      puVar5 = (undefined4 *)
               FUN_2002fdb0(local_38,(float *)(in_ECX + 0xc),&DAT_20390c24,&DAT_20390c24,&local_7c);
      puVar9 = local_70;
      for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)(in_ECX + 0x18) = local_70[2];
      *(undefined4 *)(in_ECX + 0x1c) = local_70[3];
      *(undefined4 *)(in_ECX + 0x20) = local_60;
    }
  }
  return;
}

