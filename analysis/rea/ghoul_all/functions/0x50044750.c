// rea decompile_all
// name: FUN_50044750
// address: 0x50044750
// body: available
// range: 0x50044750-0x50044c78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50044750(void *this,float *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  float10 fVar7;
  longlong lVar8;
  undefined4 uVar9;
  float afStack_f8 [3];
  int local_ec;
  int local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_bc;
  float afStack_b8 [4];
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  char local_70;
  char cStack_6f;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  char cStack_38;
  char cStack_37;
  float fStack_34;
  
  local_ec = -0x90;
  do {
    local_bc = (float)local_ec;
    local_e8 = -0x90;
    do {
      local_e4 = local_bc + *param_1;
      local_dc = param_1[2];
      local_e0 = (float)local_e8 + param_1[1];
      (*DAT_5015cac0)(param_1,&DAT_5018bf0c,&DAT_5018bf0c,&local_e4,0,3,&local_70);
      if ((ABS(local_e4 - fStack_68) <= 48.0) && (ABS(local_e0 - fStack_64) <= 48.0)) {
        local_e4 = fStack_68;
        local_e0 = fStack_64;
        local_dc = fStack_60;
        iVar3 = 0;
        do {
          lVar8 = __ftol();
          iVar4 = iVar3 + 4;
          fVar1 = (float)((((int)lVar8 + 0x1000) / 0x30) * 0x30 + -0x1000);
          *(float *)((int)afStack_f8 + iVar3) = fVar1;
          *(float *)((int)afStack_b8 + iVar3) = fVar1 + 48.0;
          iVar3 = iVar4;
        } while (iVar4 < 8);
        fStack_7c = fStack_68;
        fStack_74 = fStack_60 - 256.0;
        fStack_78 = fStack_64;
        (*DAT_5015cac0)(&local_e4,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_7c,0,3,&local_70);
        afStack_b8[2] = fStack_60 + 16.0;
        iVar3 = 0;
        afStack_f8[2] = fStack_60;
        if (0 < *(int *)this) {
          pfVar5 = (float *)((int)this + 0xc);
          do {
            afStack_b8[3] = pfVar5[-2] - afStack_f8[0];
            fStack_a8 = pfVar5[-1] - afStack_f8[1];
            if (ABS(*pfVar5 - afStack_f8[2]) <= 32.0) {
              uStack_a4 = 0;
              fVar7 = FUN_500fe130(afStack_b8 + 3);
              if (fVar7 < (float10)3.0) {
                bVar2 = *(byte *)((int)this + iVar3 * 100 + 0x1e);
                goto LAB_50044b7a;
              }
            }
            iVar3 = iVar3 + 1;
            pfVar5 = pfVar5 + 0x19;
          } while (iVar3 < *(int *)this);
        }
        afStack_b8[2] = afStack_f8[2] + 64.0;
        fStack_d8 = afStack_f8[0] + 8.0;
        fStack_d4 = afStack_f8[1] + 8.0;
        fStack_d0 = afStack_f8[2] + 16.0;
        fStack_88 = afStack_b8[0] - 8.0;
        fStack_84 = afStack_b8[1] - 8.0;
        fStack_80 = afStack_b8[2];
        (*DAT_5015cac0)(&DAT_5018bf0c,&fStack_d8,&fStack_88,&DAT_5018bf0c,0,3,&local_70);
        bVar2 = 0;
        if (((fStack_6c < 1.0) || (cStack_6f != '\0')) || (local_70 != '\0')) {
          bVar2 = 1;
        }
        fStack_cc = fStack_d8 + 16.0;
        uVar6 = 0;
        fStack_c4 = fStack_d0;
        fStack_c8 = fStack_d4 + 16.0;
        fStack_c0 = fStack_d0 - 41.0;
        do {
          fStack_8c = fStack_c4;
          fStack_a0 = (float)(int)(((uint)((int)uVar6 < 2) * 2 + -1) * 0x10) + fStack_cc;
          fStack_98 = fStack_c0;
          fStack_9c = (float)(int)(((-(uint)((uVar6 & 1) != 0) & 0xfffffffe) + 1) * 0x10) +
                      fStack_c8;
          fStack_94 = fStack_a0;
          fStack_90 = fStack_9c;
          (*DAT_5015cac0)(&fStack_94,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_a0,0,3,&cStack_38);
          if (((0.99 < fStack_34) && (cStack_37 == '\0')) && (cStack_38 == '\0')) {
            bVar2 = bVar2 | 0x20;
            break;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 4);
        if (*(int *)this < 15999) {
          pfVar5 = (float *)((int)this + *(int *)this * 100 + 4);
          *pfVar5 = afStack_f8[0];
          pfVar5[1] = afStack_f8[1];
          pfVar5[2] = afStack_f8[2];
          *(byte *)((int)this + *(int *)this * 100 + 0x1e) = bVar2;
          *(int *)this = *(int *)this + 1;
          FUN_500adb20((byte *)s__d_regions_in_use_now_5014272c);
        }
        else {
          FUN_500adb20((byte *)s_Out_of_regions____Huge_problem__50142708);
        }
LAB_50044b7a:
        if ((DAT_50142688 != 0) && (lVar8 = __ftol(), (iVar3 - (int)lVar8) % 5 == 0)) {
          (*DAT_5015ca70)(1);
          (*DAT_5015ca70)(0x40);
          (*DAT_5015ca84)(afStack_f8);
          (*DAT_5015ca84)(afStack_b8);
          if ((bVar2 & 0x20) == 0) {
            if ((bVar2 & 1) == 0) {
              (*DAT_5015ca70)(0);
              (*DAT_5015ca70)(0);
              uVar9 = 0xff;
            }
            else {
              (*DAT_5015ca70)(0xff);
              (*DAT_5015ca70)(0);
              uVar9 = 0;
            }
          }
          else {
            (*DAT_5015ca70)(0);
            (*DAT_5015ca70)(0xff);
            uVar9 = 0;
          }
          (*DAT_5015ca70)(uVar9);
          (*DAT_5015ca60)(DAT_5015d1ec + 4,1);
        }
      }
      local_e8 = local_e8 + 0x30;
    } while (local_e8 < 0xc0);
    local_ec = local_ec + 0x30;
    if (0xbf < local_ec) {
      return;
    }
  } while( true );
}

