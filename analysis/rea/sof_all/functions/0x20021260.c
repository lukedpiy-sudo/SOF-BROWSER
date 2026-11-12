// rea decompile_all
// name: FUN_20021260
// address: 0x20021260
// body: available
// range: 0x20021260-0x2002169e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200215d0) */
/* WARNING: Removing unreachable block (ram,0x200215c3) */
/* WARNING: Removing unreachable block (ram,0x20021583) */
/* WARNING: Removing unreachable block (ram,0x20021559) */
/* WARNING: Removing unreachable block (ram,0x2002152f) */
/* WARNING: Removing unreachable block (ram,0x200214f1) */
/* WARNING: Removing unreachable block (ram,0x200214cb) */
/* WARNING: Removing unreachable block (ram,0x200214a5) */
/* WARNING: Removing unreachable block (ram,0x2002147b) */
/* WARNING: Removing unreachable block (ram,0x20021451) */
/* WARNING: Removing unreachable block (ram,0x2002141e) */
/* WARNING: Removing unreachable block (ram,0x2002137e) */
/* WARNING: Removing unreachable block (ram,0x200212f1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_20021260(int *param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  byte in_ID;
  char local_2c [4];
  char local_28 [4];
  char local_24 [4];
  char local_20 [4];
  char local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  _DAT_20390c20 = FUN_200221b0(s_cpu_mmx_20130c18,&DAT_2011c4ac,8);
  DAT_203906e8 = FUN_200221b0(s_cpu_amd3d_20130c0c,&DAT_2011c4ac,8);
  piVar12 = param_1;
  for (iVar7 = 0x25; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar12 = 0;
    piVar12 = piVar12 + 1;
  }
  param_1[4] = 0;
  *param_1 = -1;
  param_1[1] = -1;
  param_1[3] = -1;
  if ((uint)((in_ID & 1) != 1) * 0x200000 != (uint)(in_ID & 1) * 0x200000) {
    piVar12 = (int *)cpuid_basic_info(0);
    DAT_2024afc4 = *piVar12;
    iVar13 = piVar12[1];
    iVar10 = piVar12[2];
    iVar7 = piVar12[3];
    if (((iVar13 == 0x756e6547) && (iVar10 == 0x49656e69)) && (iVar7 == 0x6c65746e)) {
      iVar7 = 0;
    }
    else if (((iVar13 == 0x68747541) && (iVar10 == 0x69746e65)) && (iVar7 == 0x444d4163)) {
      iVar7 = 1;
    }
    else if (((iVar13 == 0x69727943) && (iVar10 == 0x736e4978)) && (iVar7 == 0x64616574)) {
      iVar7 = 2;
    }
    else {
      iVar7 = 3;
    }
    *param_1 = iVar7;
    if (0 < DAT_2024afc4) {
      piVar12 = (int *)cpuid_Version_info(1);
      DAT_2024afc8 = *piVar12;
      uVar11 = piVar12[2];
      param_1[2] = uVar11 & 0x84f3ff;
      param_1[1] = DAT_2024afc8 >> 0xc & 3;
      if ((uVar11 & 0x10) != 0) {
        iVar7 = FUN_20021150();
        param_1[3] = iVar7;
      }
      uVar11 = DAT_2024afc8 >> 8 & 0xf;
      if ((3 < uVar11) && (uVar11 < 7)) {
        pcVar8 = (&PTR_s_486DX_201306c0)
                 [(*param_1 * 3 + -4 + uVar11) * 0x10 + (DAT_2024afc8 >> 4 & 0xfU)];
        piVar12 = param_1 + 0xd;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          *(char *)piVar12 = cVar1;
          piVar12 = (int *)((int)piVar12 + 1);
        } while (cVar1 != '\0');
        iVar7 = *param_1;
        if (iVar7 == 0) {
          if (2 < DAT_2024afc4) {
            param_1[4] = 1;
            local_c = &local_18;
            puVar3 = (undefined4 *)cpuid_Version_info(1);
            local_10 = *puVar3;
            iVar7 = cpuid_serial_info(3);
            local_14 = *(undefined4 *)(iVar7 + 8);
            local_18 = *(int *)(iVar7 + 0xc);
            local_2c[0] = s_0123456789ABCDEF_20130bf8[0];
            local_2c[1] = s_0123456789ABCDEF_20130bf8[1];
            local_2c[2] = s_0123456789ABCDEF_20130bf8[2];
            local_2c[3] = s_0123456789ABCDEF_20130bf8[3];
            local_28[0] = s_0123456789ABCDEF_20130bf8[4];
            local_28[1] = s_0123456789ABCDEF_20130bf8[5];
            local_28[2] = s_0123456789ABCDEF_20130bf8[6];
            local_28[3] = s_0123456789ABCDEF_20130bf8[7];
            local_24[0] = s_0123456789ABCDEF_20130bf8[8];
            local_24[1] = s_0123456789ABCDEF_20130bf8[9];
            local_24[2] = s_0123456789ABCDEF_20130bf8[10];
            local_24[3] = s_0123456789ABCDEF_20130bf8[0xb];
            piVar12 = param_1 + 5;
            local_20[0] = s_0123456789ABCDEF_20130bf8[0xc];
            local_20[1] = s_0123456789ABCDEF_20130bf8[0xd];
            local_20[2] = s_0123456789ABCDEF_20130bf8[0xe];
            local_20[3] = s_0123456789ABCDEF_20130bf8[0xf];
            local_1c = s_0123456789ABCDEF_20130bf8[0x10];
            iVar7 = 0;
            uVar5 = s_0123456789ABCDEF_20130bf8._12_4_;
            do {
              local_8 = (int *)CONCAT22(SUB42(uVar5,2),*(undefined2 *)((int)&local_18 + iVar7 * 2));
              iVar10 = 4;
              do {
                piVar9 = piVar12;
                piVar4 = local_8;
                local_8 = (int *)CONCAT22(local_8._2_2_,(short)local_8 >> 4);
                piVar12 = (int *)((int)piVar9 + 1);
                iVar10 = iVar10 + -1;
                uVar5._0_1_ = '\0';
                uVar5._1_1_ = '\0';
                uVar5._2_1_ = '\0';
                uVar5._3_1_ = '\0';
                *(char *)piVar9 = local_2c[(uint)piVar4 & 0xf];
              } while (iVar10 != 0);
              if (iVar7 != 5) {
                *(undefined1 *)piVar12 = 0x2d;
                piVar12 = (int *)((int)piVar9 + 2);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 6);
          }
        }
        else if (iVar7 == 1) {
          puVar2 = (uint *)cpuid(0x80000000);
          DAT_2024afcc = *puVar2 & 0x7fffffff;
          if (DAT_2024afcc != 0) {
            piVar12 = (int *)cpuid(0x80000001);
            DAT_2024afc8 = *piVar12;
            if (piVar12[2] < 0) {
              param_1[2] = param_1[2] | 0x80000000;
            }
          }
          if (3 < (int)DAT_2024afcc) {
            local_8 = param_1 + 0x19;
            piVar12 = (int *)cpuid_brand_part1_info(0x80000002);
            iVar13 = piVar12[1];
            iVar10 = piVar12[2];
            iVar7 = piVar12[3];
            *local_8 = *piVar12;
            param_1[0x1a] = iVar13;
            param_1[0x1b] = iVar7;
            param_1[0x1c] = iVar10;
            piVar12 = (int *)cpuid_brand_part2_info(0x80000003);
            iVar13 = piVar12[1];
            iVar10 = piVar12[2];
            iVar7 = piVar12[3];
            param_1[0x1d] = *piVar12;
            param_1[0x1e] = iVar13;
            param_1[0x1f] = iVar7;
            param_1[0x20] = iVar10;
            local_c = param_1 + 0x21;
            piVar12 = (int *)cpuid_brand_part3_info(0x80000004);
            iVar13 = piVar12[1];
            iVar10 = piVar12[2];
            iVar7 = piVar12[3];
            *local_c = *piVar12;
            param_1[0x22] = iVar13;
            param_1[0x23] = iVar7;
            param_1[0x24] = iVar10;
          }
        }
        else if (iVar7 == 2) {
          puVar2 = (uint *)cpuid(0x80000000);
          DAT_2024afcc = *puVar2 & 0x7fffffff;
          if (3 < DAT_2024afcc) {
            local_8 = param_1 + 0x19;
            piVar12 = (int *)cpuid_brand_part1_info(0x80000002);
            iVar13 = piVar12[1];
            iVar10 = piVar12[2];
            iVar7 = piVar12[3];
            *local_8 = *piVar12;
            param_1[0x1a] = iVar13;
            param_1[0x1b] = iVar7;
            param_1[0x1c] = iVar10;
            piVar12 = (int *)cpuid_brand_part2_info(0x80000003);
            iVar13 = piVar12[1];
            iVar10 = piVar12[2];
            iVar7 = piVar12[3];
            param_1[0x1d] = *piVar12;
            param_1[0x1e] = iVar13;
            param_1[0x1f] = iVar7;
            param_1[0x20] = iVar10;
            local_c = param_1 + 0x21;
            piVar12 = (int *)cpuid_brand_part3_info(0x80000004);
            iVar13 = piVar12[1];
            iVar10 = piVar12[2];
            iVar7 = piVar12[3];
            *local_c = *piVar12;
            param_1[0x22] = iVar13;
            param_1[0x23] = iVar7;
            param_1[0x24] = iVar10;
          }
        }
        puVar6 = &DAT_2011d31c;
        if ((param_1[2] & 0x800000U) == 0) {
          puVar6 = &DAT_2011c4ac;
        }
        _DAT_20390c20 = FUN_200221b0(s_cpu_mmx_20130c18,puVar6,8);
        puVar6 = &DAT_2011d31c;
        if (-1 < param_1[2]) {
          puVar6 = &DAT_2011c4ac;
        }
        DAT_203906e8 = FUN_200221b0(s_cpu_amd3d_20130c0c,puVar6,8);
      }
    }
  }
  return;
}

