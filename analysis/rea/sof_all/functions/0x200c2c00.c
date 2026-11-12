// rea decompile_all
// name: FUN_200c2c00
// address: 0x200c2c00
// body: available
// range: 0x200c2c00-0x200c2e05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x200c2ca2) */
/* WARNING: Removing unreachable block (ram,0x200c2dc7) */
/* WARNING: Removing unreachable block (ram,0x200c2ddc) */
/* WARNING: Removing unreachable block (ram,0x200c2de8) */
/* WARNING: Removing unreachable block (ram,0x200c2df1) */

void FUN_200c2c00(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 float param_5)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  char *in_ECX;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  
  if (in_ECX[1] == '\0') {
    *in_ECX = '\x01';
    in_ECX[1] = '\x01';
    *(float *)(in_ECX + 4) = param_5;
LAB_200c2c1c:
    if (*(float *)(in_ECX + 4) == param_5) {
      cVar2 = '\x01';
      goto LAB_200c2c33;
    }
  }
  else if (*in_ECX != '\0') goto LAB_200c2c1c;
  cVar2 = '\0';
LAB_200c2c33:
  *in_ECX = cVar2;
  if (cVar2 == '\0') {
    iVar6 = *(int *)(in_ECX + 0xc);
    if (iVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(int *)(in_ECX + 0x10) - iVar6 >> 2;
    }
    if (uVar5 < param_3) {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(in_ECX + 0x10) - iVar6 >> 2;
      }
      FUN_200a8890(*(undefined4 *)(in_ECX + 0x10),param_3 - iVar6,in_ECX + 4);
    }
    else if ((iVar6 != 0) && (param_3 < (uint)(*(int *)(in_ECX + 0x10) - iVar6 >> 2))) {
      *(uint *)(in_ECX + 0x10) = iVar6 + param_3 * 4;
    }
    pfVar7 = *(float **)(in_ECX + 0x10);
    if (*(int *)(in_ECX + 0x14) - (int)pfVar7 >> 2 == 0) {
      uVar5 = FUN_2008c740();
      if (uVar5 < 2) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_2008c740();
      }
      iVar3 = FUN_2008c740();
      iVar3 = iVar3 + iVar6;
      iVar6 = iVar3;
      if (iVar3 < 0) {
        iVar6 = 0;
      }
      pvVar4 = operator_new(iVar6 << 2);
      iVar6 = FUN_2008dea0(*(undefined4 *)(in_ECX + 0xc),pfVar7,pvVar4);
      FUN_200a9240(iVar6,1,&param_5);
      FUN_2008dea0(pfVar7,*(undefined4 *)(in_ECX + 0x10),iVar6 + 4);
      FUN_2008c730(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10));
      FUN_200f9f75(*(undefined4 *)(in_ECX + 0xc));
      *(void **)(in_ECX + 0x14) = (void *)((int)pvVar4 + iVar3 * 4);
      iVar6 = FUN_2008c740();
      *(void **)(in_ECX + 0xc) = pvVar4;
      *(int *)(in_ECX + 0x10) = (int)pvVar4 + iVar6 * 4 + 4;
      return;
    }
    FUN_2008dea0(pfVar7,pfVar7,pfVar7 + 1);
    FUN_200a9240(*(int *)(in_ECX + 0x10),1 - (*(int *)(in_ECX + 0x10) - (int)pfVar7 >> 2),&param_5);
    pfVar1 = *(float **)(in_ECX + 0x10);
    if (pfVar7 != pfVar1) {
      do {
        *pfVar7 = param_5;
        pfVar7 = pfVar7 + 1;
      } while (pfVar7 != pfVar1);
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 4;
      return;
    }
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 4;
  }
  return;
}

