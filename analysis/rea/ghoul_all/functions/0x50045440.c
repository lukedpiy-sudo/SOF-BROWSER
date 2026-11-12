// rea decompile_all
// name: FUN_50045440
// address: 0x50045440
// body: available
// range: 0x50045440-0x500457bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50045440(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_38;
  char cStack_37;
  float fStack_34;
  
  bVar5 = false;
  if (param_2 != -1) {
    local_5c = *(float *)((int)this + param_1 * 100 + 4);
    local_58 = *(float *)((int)this + param_1 * 100 + 8);
    iVar1 = param_1 * 100;
    fVar3 = *(float *)((int)this + param_2 * 100 + 4) - local_5c;
    fVar4 = *(float *)((int)this + param_2 * 100 + 8) - local_58;
    local_5c = local_5c + 24.0;
    local_58 = local_58 + 24.0;
    iVar8 = param_2;
    iVar9 = param_2;
    do {
      fVar2 = *(float *)((int)this + param_1 * 100 + 8);
      if (5.0 <= ABS(*(float *)((int)this + param_1 * 100 + 4) -
                     *(float *)((int)this + param_2 * 100 + 4))) {
        if (5.0 <= ABS(fVar2 - *(float *)((int)this + param_2 * 100 + 8))) {
          if ((fVar3 <= 0.0) || (fVar4 <= 0.0)) {
            if ((0.0 <= fVar3) || (fVar4 <= 0.0)) {
              if ((fVar3 <= 0.0) || (0.0 <= fVar4)) {
                if ((fVar3 < 0.0) && (fVar4 < 0.0)) {
                  iVar8 = (int)*(short *)((int)this + param_1 * 100 + 0x16);
                  iVar9 = (int)*(short *)((int)this + param_1 * 100 + 0x1c);
                }
              }
              else {
                iVar8 = (int)*(short *)((int)this + param_1 * 100 + 0x18);
                iVar9 = (int)*(short *)((int)this + param_1 * 100 + 0x16);
              }
            }
            else {
              iVar8 = (int)*(short *)((int)this + param_1 * 100 + 0x1c);
              iVar9 = (int)*(short *)((int)this + param_1 * 100 + 0x1a);
            }
          }
          else {
            iVar8 = (int)*(short *)((int)this + param_1 * 100 + 0x1a);
            iVar9 = (int)*(short *)((int)this + param_1 * 100 + 0x18);
          }
          iVar6 = param_1 * 100;
          iVar7 = param_1 * 100;
          param_1 = iVar9;
          if (((*(float *)((int)this + iVar7 + 4) + 24.0) - local_5c) * -fVar4 +
              fVar3 * ((*(float *)((int)this + iVar6 + 8) + 24.0) - local_58) <= 0.0) {
            param_1 = iVar8;
          }
        }
        else if (*(float *)((int)this + param_1 * 100 + 4) <=
                 *(float *)((int)this + param_2 * 100 + 4)) {
          param_1 = (int)*(short *)((int)this + param_1 * 100 + 0x18);
        }
        else {
          param_1 = (int)*(short *)((int)this + param_1 * 100 + 0x1c);
        }
      }
      else if (fVar2 <= *(float *)((int)this + param_2 * 100 + 8)) {
        param_1 = (int)*(short *)((int)this + param_1 * 100 + 0x1a);
      }
      else {
        param_1 = (int)*(short *)((int)this + param_1 * 100 + 0x16);
      }
      if (param_1 == -1) break;
      if ((ABS(*(float *)((int)this + param_1 * 100 + 4) - *(float *)((int)this + param_2 * 100 + 4)
              ) < 5.0) &&
         (ABS(*(float *)((int)this + param_1 * 100 + 8) - *(float *)((int)this + param_2 * 100 + 8))
          < 5.0)) {
        bVar5 = true;
      }
      if (*(char *)((int)this + param_1 * 100 + 0x1e) != '\0') {
        bVar5 = true;
      }
      if (param_1 < 0) break;
      if (param_1 == param_2) goto LAB_500456ac;
    } while (!bVar5);
    if (param_1 == param_2) {
LAB_500456ac:
      if (param_3 == 0) {
        return 1;
      }
      local_54 = *(float *)((int)this + iVar1 + 0xc) + 16.0;
      local_44 = 0xc1800000;
      local_40 = 0xc1800000;
      local_3c = 0xc1800000;
      local_68 = *(float *)((int)this + param_2 * 100 + 4) + 24.0;
      local_50 = 0x41800000;
      local_4c = 0x41800000;
      local_48 = 0x41800000;
      local_64 = *(float *)((int)this + param_2 * 100 + 8) + 24.0;
      local_60 = *(float *)((int)this + param_2 * 100 + 0xc) + 16.0;
      if (param_3 == 2) {
        puVar11 = &local_50;
        puVar10 = &local_44;
      }
      else {
        puVar11 = &DAT_5018bf0c;
        puVar10 = &DAT_5018bf0c;
      }
      (*DAT_5015cac0)(&local_5c,puVar10,puVar11,&local_68,0,0x2020003,&local_38);
      if (((0.99 < fStack_34) && (cStack_37 == '\0')) && (local_38 == '\0')) {
        return 1;
      }
    }
  }
  return 0;
}

