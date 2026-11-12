// rea decompile_all
// name: FUN_200eba20
// address: 0x200eba20
// body: available
// range: 0x200eba20-0x200ebe51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200eba20(int param_1)

{
  tagPOINT tVar1;
  CFeelDXDevice *pCVar2;
  CFeelMouse *pCVar3;
  int iVar4;
  CFeelMouse *this;
  CFeelDXDevice *this_00;
  CFeelSpring *this_01;
  int iVar5;
  bool bVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_20110471;
  pvStack_c = ExceptionList;
  iVar4 = DAT_2040658c + 1;
  bVar6 = DAT_2040658c == 0;
  DAT_2040658c = iVar4;
  ExceptionList = &pvStack_c;
  if (bVar6) {
    ExceptionList = &pvStack_c;
    Cmd_AddCommand(s_ff_usemouse_2015985c,&LAB_200eb800);
    Cmd_AddCommand(s_ff_usejoy_20159850,&LAB_200eb810);
    Cmd_AddCommand(s_ff_tension_20159844,&LAB_200eb820);
    Cmd_AddCommand(s_ff_spring_20159838,&LAB_200eb920);
  }
  if ((DAT_20406588 != (int *)0x0) || (DAT_20406580 != (undefined4 *)0x0)) {
    Com_Printf(&DAT_2015980c);
    if (DAT_20406588 != (int *)0x0) {
      Com_Printf(s____closing_return_spring_201597f0);
      if (DAT_20406588 != (int *)0x0) {
        (**(code **)*DAT_20406588)(1);
      }
      DAT_20406588 = (int *)0x0;
    }
    if (DAT_20406580 != (undefined4 *)0x0) {
      Com_Printf(s____closing_feedback_device_201597d4);
      iVar4 = 0;
      do {
        if ((&DAT_20406570)[iVar4] != 0x21) {
          FUN_200edab0(iVar4);
        }
        (&DAT_20406570)[iVar4] = 0x21;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      if (DAT_20406580 != (undefined4 *)0x0) {
        (**(code **)*DAT_20406580)(1);
      }
      DAT_20406580 = (undefined4 *)0x0;
    }
  }
  Com_Printf(&DAT_201597a0);
  DAT_2040656c = Cvar_Get(s_use_ff_20159798,&DAT_2011d31c,1,0);
  if (*(float *)(DAT_2040656c + 0x18) != 0.0) {
    Com_Printf(s_Creating_feedback_device__20159758);
    pCVar3 = (CFeelMouse *)DAT_20406580;
    if (param_1 != 0) {
      this = operator_new(0x28);
      uStack_4 = 0;
      if (this == (CFeelMouse *)0x0) {
        this = (CFeelMouse *)0x0;
      }
      else {
        CFeelMouse::CFeelMouse(this);
        *(undefined ***)this = &PTR_FUN_2011333c;
      }
      uStack_4 = 0xffffffff;
      pCVar3 = (CFeelMouse *)DAT_20406580;
      if ((this != (CFeelMouse *)0x0) &&
         (iVar4 = CFeelMouse::Initialize(this,DAT_20403510,DAT_20403564,4), pCVar3 = this,
         iVar4 == 0)) {
        (*(code *)**(undefined4 **)this)(1);
        pCVar3 = (CFeelMouse *)DAT_20406580;
      }
    }
    DAT_20406580 = (undefined4 *)pCVar3;
    if (DAT_20406580 == (undefined4 *)0x0) {
      this_00 = operator_new(0x30);
      uStack_4 = 1;
      if (this_00 == (CFeelDXDevice *)0x0) {
        this_00 = (CFeelDXDevice *)0x0;
      }
      else {
        CFeelDXDevice::CFeelDXDevice(this_00);
        *(undefined ***)this_00 = &PTR_FUN_20113320;
      }
      uStack_4 = 0xffffffff;
      pCVar2 = (CFeelDXDevice *)DAT_20406580;
      if ((this_00 != (CFeelDXDevice *)0x0) &&
         (iVar4 = CFeelDXDevice::Initialize
                            (this_00,DAT_20403510,DAT_20403564,(IDirectInputA *)0x0,
                             (IDirectInputDevice2A *)0x0), pCVar2 = this_00, iVar4 == 0)) {
        (*(code *)**(undefined4 **)this_00)(1);
        pCVar2 = (CFeelDXDevice *)DAT_20406580;
      }
      DAT_20406580 = (undefined4 *)pCVar2;
      if (DAT_20406580 == (undefined4 *)0x0) {
        Com_Printf(s____no_feedback_devices_found_20159738);
        ExceptionList = pvStack_c;
        return;
      }
    }
    FUN_200ec130();
    DAT_20406570 = 0x21;
    DAT_20406574 = 0x21;
    _DAT_20406578 = 0x21;
    _DAT_2040657c = 0x21;
    if (DAT_20406580[2] == 2) {
      Com_Printf(s____found_FEELit_Mouse_20159720);
      CFeelDevice::UsesWin32MouseServices((CFeelDevice *)DAT_20406580,0);
      ExceptionList = pvStack_c;
      return;
    }
    if (DAT_20406580[2] == 3) {
      Com_Printf(s____found_feedback_device_20159704);
      this_01 = operator_new(0xbc);
      uStack_4 = 2;
      if (this_01 == (CFeelSpring *)0x0) {
        this_01 = (CFeelSpring *)0x0;
      }
      else {
        CFeelSpring::CFeelSpring(this_01);
        *(undefined ***)this_01 = &PTR_FUN_20113300;
      }
      uStack_4 = 0xffffffff;
      DAT_20406588 = (int *)this_01;
      iVar4 = (**(code **)(*(int *)this_01 + 0x18))
                        (DAT_20406580,2000,10000,1000,3,0x7fffffff,0x7fffffff,1,1,1);
      if (iVar4 == 0) {
        Com_Printf(s_____no_device_return_spring__201596e4);
        if (DAT_20406588 != (int *)0x0) {
          (**(code **)*DAT_20406588)(1);
        }
        DAT_20406588 = (int *)0x0;
        ExceptionList = pvStack_c;
        return;
      }
      Com_Printf(s____device_return_spring_ok_201596c8);
      iVar4 = DAT_20159644;
      if ((DAT_20406580 != (undefined4 *)0x0) && (DAT_20406588 != (int *)0x0)) {
        if (DAT_20159644 == 0) {
          if ((DAT_20406590 == 0) || (iVar4 = (**(code **)(*DAT_20406588 + 0x14))(), iVar4 != 0)) {
            DAT_20406590 = 0;
          }
        }
        else if ((DAT_20406590 != 0) ||
                (iVar5 = (**(code **)(*DAT_20406588 + 0x10))(1,0), iVar5 != 0)) {
          DAT_20406590 = 1;
          tVar1.y = DAT_20406598;
          tVar1.x = DAT_20406594;
          CFeelSpring::ChangeParameters
                    ((CFeelSpring *)DAT_20406588,tVar1,iVar4,0x80000000,0x80000000,-0x80000000,
                     -0x80000000);
          ExceptionList = pvStack_c;
          return;
        }
      }
    }
    ExceptionList = pvStack_c;
    return;
  }
  Com_Printf(s____inhibited__not_initializing_20159774);
  ExceptionList = pvStack_c;
  return;
}

