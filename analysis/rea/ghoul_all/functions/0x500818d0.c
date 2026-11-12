// rea decompile_all
// name: FUN_500818d0
// address: 0x500818d0
// body: available
// range: 0x500818d0-0x50081f70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_500818d0(void *this,uint param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)((int)this + 0x108) != 0) {
    return *(int *)((int)this + 0x108);
  }
  if ((*(byte *)((int)this + 0x124) & 8) != 0) {
    FUN_50081800(this,(byte *)s_________________________________5014585c);
    FUN_50081800(this,(byte *)s_Script___s_50145850);
    FUN_50081800(this,(byte *)s_DEBUG_at__d_50145840);
    FUN_50081800(this,(byte *)s_Current_Time___10_1f_50145ecc);
    FUN_50081800(this,(byte *)s_________________________________5014585c);
  }
  if (param_1 != 0) {
    *(uint *)((int)this + 0x11c) = param_1;
  }
  if (param_2 != 0) {
    *(int *)((int)this + 0x120) = param_2;
  }
  local_14 = 0;
  param_1 = 0;
LAB_50081960:
  local_14 = local_14 + 1;
  if (1000 < local_14) {
    FUN_500817d0(this,(byte *)s_Runaway_loop_for_script_OR_more_t_50145e94);
  }
  uVar1 = *(undefined1 *)(*(int *)((int)this + 0x114) + *(int *)((int)this + 0x104));
  *(int *)((int)this + 0x114) = *(int *)((int)this + 0x114) + 1;
  cVar3 = DAT_5015d8d5;
  switch(uVar1) {
  case 0:
    puVar8 = FUN_5007b2e0(this,&local_1c);
    uVar9 = FUN_50076840((int)puVar8);
    if ((char)uVar9 == '\0') {
      uVar7 = FUN_500767d0((byte *)(puVar8 + 1));
      *(undefined4 *)((int)this + local_1c * 4 + 0x188) = uVar7;
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)*puVar8)(1);
      }
    }
    break;
  case 1:
    piVar5 = FUN_5007b2e0(this,&local_18);
    (**(code **)(*piVar5 + 0x18))(this);
    uVar9 = FUN_50076840((int)piVar5);
    if ((char)uVar9 == '\0') {
      uVar7 = FUN_500767d0((byte *)(piVar5 + 1));
      *(undefined4 *)((int)this + local_18 * 4 + 0x188) = uVar7;
      (**(code **)*piVar5)(1);
    }
    break;
  case 2:
    puVar8 = FUN_5007b2e0(this,&local_10);
    FUN_50082050(this,(int)puVar8);
    break;
  case 3:
    piVar5 = FUN_5007b2e0(this,&local_c);
    (**(code **)(*piVar5 + 0x18))(this);
    FUN_50082050(this,(int)piVar5);
    break;
  case 4:
    piVar5 = FUN_5007b2e0(this,&local_8);
    FUN_50082120(this,piVar5);
    break;
  case 5:
    piVar5 = FUN_5007b2e0(this,&local_4);
    (**(code **)(*piVar5 + 0x18))(this);
    FUN_50082120(this,piVar5);
    break;
  case 6:
    FUN_5007b5f0((int)this);
    break;
  case 7:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((puVar8 == (undefined4 *)0x0) || (piVar5 == (int *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_Add_50145794);
    }
    (**(code **)(*piVar5 + 0x44))(puVar8);
    goto LAB_50081d01;
  case 8:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((piVar5 == (int *)0x0) || (puVar8 == (undefined4 *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_Add_50145794);
    }
    iVar4 = (**(code **)(*piVar5 + 0x34))(puVar8);
    FUN_5007b530(this,iVar4);
    goto LAB_50081c9d;
  case 9:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((piVar5 == (int *)0x0) || (puVar8 == (undefined4 *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_Subtract_501457ac);
    }
    iVar4 = (**(code **)(*piVar5 + 0x38))(puVar8);
    FUN_5007b530(this,iVar4);
    goto LAB_50081d01;
  case 10:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((piVar5 == (int *)0x0) || (puVar8 == (undefined4 *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_Multiply_501457c8);
    }
    iVar4 = (**(code **)(*piVar5 + 0x3c))(puVar8);
    FUN_5007b530(this,iVar4);
    goto LAB_50081c9d;
  case 0xb:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((piVar5 == (int *)0x0) || (puVar8 == (undefined4 *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_Divide_501457e4);
    }
    iVar4 = (**(code **)(*piVar5 + 0x40))(puVar8);
    FUN_5007b530(this,iVar4);
    goto LAB_50081d01;
  case 0xc:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((puVar8 == (undefined4 *)0x0) || (piVar5 == (int *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_AddAssignment_50145880);
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x34))(puVar8);
    goto LAB_50081c87;
  case 0xd:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((puVar8 == (undefined4 *)0x0) || (piVar5 == (int *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_SubtractAssign_501458a0);
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x38))(puVar8);
    goto LAB_50081ceb;
  case 0xe:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((puVar8 == (undefined4 *)0x0) || (piVar5 == (int *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_MultiplyAssign_501458c8);
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x3c))(puVar8);
LAB_50081c87:
    (**(code **)(*piVar5 + 0x44))(puVar6);
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
LAB_50081c9d:
    (**(code **)*piVar5)(1);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    break;
  case 0xf:
    piVar5 = (int *)FUN_5007b590((int)this);
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if ((puVar8 == (undefined4 *)0x0) || (piVar5 == (int *)0x0)) {
      FUN_500817d0(this,(byte *)s_Invalid_stack_for_DivideAssignme_501458f0);
    }
    puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x40))(puVar8);
LAB_50081ceb:
    (**(code **)(*piVar5 + 0x44))(puVar6);
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
LAB_50081d01:
    (**(code **)*piVar5)(1);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    break;
  case 0x10:
    uVar7 = FUN_5007b260((int)this);
    *(undefined4 *)((int)this + 0x114) = uVar7;
    break;
  case 0x11:
    FUN_5007bf20((int)this);
    break;
  case 0x12:
    puVar8 = (undefined4 *)FUN_5007b590((int)this);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
    break;
  case 0x13:
    FUN_5007c5a0(this,'\0');
    break;
  case 0x14:
    *(undefined4 *)((int)this + 0x108) = 1;
  default:
    goto switchD_500819a6_caseD_15;
  case 0x16:
    uVar9 = FUN_5007c4a0(this);
    param_1 = uVar9 & 0xff;
    break;
  case 0x17:
    uVar9 = FUN_5007c350(this,'\x01');
    param_1 = uVar9 & 0xff;
    break;
  case 0x18:
    uVar9 = FUN_5007c350(this,'\0');
    param_1 = uVar9 & 0xff;
    break;
  case 0x19:
    FUN_5007d430(this);
    break;
  case 0x1a:
    FUN_5007c210((int)this);
    break;
  case 0x1b:
    bVar2 = *(int *)(DAT_5015cca0 + 0x750) < 1;
    if (((DAT_5015d8d5 != '\0') && (bVar2)) ||
       ((FUN_5007e1f0((int)this), cVar3 != DAT_5015d8d5 && (_DAT_5015c50c = DAT_5015ccdc, bVar2))))
    {
      FUN_50075190('\0');
      goto switchD_500819a6_caseD_15;
    }
    break;
  case 0x1c:
    FUN_5007d860(this);
    break;
  case 0x1d:
    FUN_5007ca10((int)this);
    break;
  case 0x1e:
    FUN_5007ccb0((int)this);
    break;
  case 0x1f:
    FUN_5007d1a0(this,'\x01');
    break;
  case 0x20:
    FUN_5007d1a0(this,'\0');
    break;
  case 0x21:
    FUN_5007ec40(this);
    break;
  case 0x22:
    FUN_5007b2b0((int)this);
    FUN_50081800(this,&DAT_50142fa8);
    break;
  case 0x23:
    FUN_5007d290((int)this);
    break;
  case 0x24:
    FUN_50080e20((int)this);
    break;
  case 0x25:
    FUN_50080f10((int)this);
    break;
  case 0x26:
    FUN_50081060((int)this);
    break;
  case 0x27:
    FUN_5007e290((int)this);
    break;
  case 0x28:
    FUN_5007e300(this);
    break;
  case 0x29:
    FUN_5007dc90(this);
    break;
  case 0x2a:
    FUN_50080b00((int)this);
    break;
  case 0x2b:
    FUN_50080b90((int)this);
    break;
  case 0x2c:
    FUN_5007d0a0((int)this);
    break;
  case 0x2d:
    FUN_5007e870(this);
    break;
  case 0x2f:
    FUN_5007d3b0((int)this);
    break;
  case 0x30:
    FUN_5007d330((int)this);
    break;
  case 0x31:
    FUN_50080ca0((int)this);
    break;
  case 0x32:
    FUN_5007d120((int)this);
    break;
  case 0x33:
    FUN_5007c780((int)this);
    break;
  case 0x34:
    FUN_5007c9d0((int)this);
    goto switchD_500819a6_caseD_15;
  case 0x35:
    FUN_50080a50((int)this);
  }
LAB_50081e2e:
  if (*(int *)((int)this + 0x110) <= *(int *)((int)this + 0x114)) {
    *(undefined4 *)((int)this + 0x108) = 1;
    goto LAB_50081f61;
  }
  if ((char)param_1 != '\0') {
LAB_50081f61:
    return *(int *)((int)this + 0x108);
  }
  goto LAB_50081960;
switchD_500819a6_caseD_15:
  param_1 = 1;
  goto LAB_50081e2e;
}

