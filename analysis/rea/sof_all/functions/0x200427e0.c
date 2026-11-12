// rea decompile_all
// name: FUN_200427e0
// address: 0x200427e0
// body: available
// range: 0x200427e0-0x20042ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200427e0(void)

{
  float *pfVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint *in_ECX;
  undefined2 extraout_var;
  uint *puVar8;
  float local_c;
  float local_8;
  
  *in_ECX = 0;
  uVar2 = FUN_2001e260(&DAT_20367ebc);
  in_ECX[0x1a] = uVar2;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 4) != 0) {
        uVar2 = FUN_2001e290(&DAT_20367ebc);
        in_ECX[0x1b] = uVar2;
        if ((in_ECX[0x1a] & 8) == 0) {
          in_ECX[0x1c] = *(uint *)(&DAT_2015ef94 + uVar2 * 0x18c);
        }
        else {
          uVar2 = FUN_2001e290(&DAT_20367ebc);
          in_ECX[0x1c] = uVar2;
        }
        uVar2 = FUN_2001e290(&DAT_20367ebc);
        in_ECX[0x1d] = uVar2;
        piVar5 = (int *)FUN_20069630(1,0);
        iVar7 = (**(code **)(*piVar5 + 0x24))(CONCAT22(extraout_var,(short)in_ECX[0x1c]));
        if (in_ECX[0x1d] == 0) {
          in_ECX[0x1f] = 1;
          uVar2 = FUN_20042720(iVar7);
          in_ECX[0x1d] = uVar2;
        }
        if (iVar7 == 0) {
          in_ECX[3] = 0;
          in_ECX[4] = 0;
          in_ECX[5] = 0;
        }
        else {
          if ((in_ECX[0x1a] & 0x40) == 0) {
            puVar3 = in_ECX + 0xc;
            puVar6 = in_ECX + 0xf;
            puVar8 = in_ECX + 9;
          }
          else {
            puVar3 = in_ECX + 9;
            puVar6 = in_ECX + 0xc;
            puVar8 = in_ECX + 0xf;
          }
          uVar4 = FUN_20030570(&DAT_2015ef6c + in_ECX[0x1b] * 0x18c,iVar7,
                               CONCAT22((short)((uint)puVar6 >> 0x10),(short)in_ECX[0x1d]),0,
                               in_ECX + 3,puVar8,puVar6,puVar3);
          uVar4 = FUN_20030540(&DAT_2015ef6c + in_ECX[0x1b] * 0x18c,uVar4);
          FUN_200303c0(uVar4);
        }
      }
    }
    else {
      uVar2 = FUN_2001e290(&DAT_20367ebc);
      in_ECX[0x1b] = uVar2;
      puVar3 = (uint *)FUN_20030540(&DAT_2015ef6c + uVar2 * 0x18c);
      in_ECX[3] = *puVar3;
      in_ECX[4] = puVar3[1];
      in_ECX[5] = puVar3[2];
      uVar4 = FUN_20030570(&DAT_2015ef6c + in_ECX[0x1b] * 0x18c,in_ECX + 9,in_ECX + 0xf,in_ECX + 0xc
                          );
      FUN_20054b30(uVar4);
    }
  }
  else {
    FUN_2001e4c0(&DAT_20367ebc,in_ECX + 3);
  }
  if ((char)(byte)in_ECX[0x1a] < '\0') {
    uVar2 = FUN_2001e260(&DAT_20367ebc);
    *in_ECX = uVar2;
    if ((uVar2 & 1) != 0) {
      iVar7 = FUN_2001e290(&DAT_20367ebc);
      in_ECX[1] = (uint)((float)iVar7 * 0.0078125);
    }
    if ((*in_ECX & 2) != 0) {
      uVar2 = FUN_2001e260(&DAT_20367ebc);
      in_ECX[2] = uVar2;
    }
    if ((*in_ECX & 4) != 0) {
      FUN_2001e4c0(&DAT_20367ebc,in_ECX + 6);
    }
    if ((*in_ECX & 8) != 0) {
      pfVar1 = (float *)(in_ECX + 9);
      FUN_2001e4c0(&DAT_20367ebc,pfVar1);
      *pfVar1 = *pfVar1 * 0.00048828125;
      in_ECX[10] = (uint)((float)in_ECX[10] * 0.00048828125);
      in_ECX[0xb] = (uint)((float)in_ECX[0xb] * 0.00048828125);
      FUN_2002fe60(pfVar1,&local_c);
      local_c = local_c * 57.29578;
      local_8 = local_8 * 57.29578;
      FUN_20054b30(&local_c,pfVar1,in_ECX + 0xf,in_ECX + 0xc);
    }
    if ((*in_ECX & 0x10) != 0) {
      FUN_2001e4c0(&DAT_20367ebc,in_ECX + 0x12);
    }
    if ((*in_ECX & 0x20) != 0) {
      FUN_2001e4c0(&DAT_20367ebc,in_ECX + 0x15);
    }
    if ((*in_ECX & 0x40) != 0) {
      iVar7 = FUN_2001e290(&DAT_20367ebc);
      in_ECX[0x18] = (uint)((float)iVar7 * 0.0078125);
    }
    if ((char)(byte)*in_ECX < '\0') {
      iVar7 = FUN_2001e260(&DAT_20367ebc);
      in_ECX[0x19] = (uint)(float)iVar7;
    }
  }
  return;
}

