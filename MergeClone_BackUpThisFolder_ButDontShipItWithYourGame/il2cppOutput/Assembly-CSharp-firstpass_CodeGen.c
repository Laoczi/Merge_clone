#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 SimpleEventBus.Interfaces.IEventBus EventStreams::get_UserInterface()
extern void EventStreams_get_UserInterface_mEEEB90D00978AAA4E5F8257A1762DFB9D0572446 (void);
// 0x00000002 System.Void EventStreams::.cctor()
extern void EventStreams__cctor_mD999AD5240871533C866F8518FF46B87B89F7C90 (void);
// 0x00000003 System.Collections.ObjectModel.ReadOnlyCollection`1<T> UI.Screens.Common.MonoBehaviourPool`1::get_UsedItems()
// 0x00000004 System.Void UI.Screens.Common.MonoBehaviourPool`1::set_UsedItems(System.Collections.ObjectModel.ReadOnlyCollection`1<T>)
// 0x00000005 System.Void UI.Screens.Common.MonoBehaviourPool`1::.ctor(T,UnityEngine.Transform,System.Int32)
// 0x00000006 T UI.Screens.Common.MonoBehaviourPool`1::Take()
// 0x00000007 System.Void UI.Screens.Common.MonoBehaviourPool`1::ReleaseAll()
// 0x00000008 System.Void UI.Screens.Common.MonoBehaviourPool`1::SortBySiblingIndexUnused()
// 0x00000009 System.Void UI.Screens.Common.MonoBehaviourPool`1::Release(T)
// 0x0000000A System.Void UI.Screens.Common.MonoBehaviourPool`1::Release(System.Collections.Generic.List`1<T>)
// 0x0000000B System.Void UI.Screens.Common.MonoBehaviourPool`1::AddNewItemInPool()
// 0x0000000C System.Void UI.Screens.Common.MonoBehaviourPool`1/<>c::.cctor()
// 0x0000000D System.Void UI.Screens.Common.MonoBehaviourPool`1/<>c::.ctor()
// 0x0000000E System.Int32 UI.Screens.Common.MonoBehaviourPool`1/<>c::<SortBySiblingIndexUnused>b__11_0(T,T)
// 0x0000000F System.Void IngameStateMachine.IState::Initialize(IngameStateMachine.StateMachine)
// 0x00000010 System.Void IngameStateMachine.IState::OnEnter()
// 0x00000011 System.Void IngameStateMachine.IState::OnExit()
// 0x00000012 System.Void IngameStateMachine.StateMachine::.ctor(IngameStateMachine.IState[])
extern void StateMachine__ctor_mC808B1F15DFB6BB9290F09582BB8F6A1D78B30F5 (void);
// 0x00000013 System.Void IngameStateMachine.StateMachine::Initialize()
extern void StateMachine_Initialize_m9C33856D122D62295277AC274B973E800DE64A6E (void);
// 0x00000014 System.Void IngameStateMachine.StateMachine::Enter()
// 0x00000015 System.Void SimpleBus.Interfaces.ISubscription::Publish(SimpleEventBus.Events.EventBase)
// 0x00000016 System.Void SimpleBus.Extensions.SimpleBusExtensions::Publish(SimpleEventBus.Events.EventBase,SimpleEventBus.Interfaces.IEventBus)
extern void SimpleBusExtensions_Publish_m46CF7470A0A5E70F82B0C81A7C4108D62718938C (void);
// 0x00000017 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<SimpleEventBus.ISubscriptionHolder>> SimpleEventBus.EventBus::get_Subscriptions()
extern void EventBus_get_Subscriptions_m8A19A7233D19AB4065A0E639BE453239720F0791 (void);
// 0x00000018 System.Void SimpleEventBus.EventBus::.ctor()
extern void EventBus__ctor_m6CBBA933206715ED66F7D959B8EFEF0C00F4E612 (void);
// 0x00000019 System.IDisposable SimpleEventBus.EventBus::Subscribe(System.Action`1<TEvent>)
// 0x0000001A System.Void SimpleEventBus.EventBus::Unsubscribe(System.Type,SimpleEventBus.ISubscriptionHolder)
extern void EventBus_Unsubscribe_m30D7E091D80D67A53B59F305EA1A8665EF5455B6 (void);
// 0x0000001B System.Void SimpleEventBus.EventBus::Publish(TEvent)
// 0x0000001C System.Void SimpleEventBus.EventBus::NotifyAllSubscribers(TEventBase)
// 0x0000001D System.Void SimpleEventBus.EventBus/<>c::.cctor()
extern void U3CU3Ec__cctor_m97E5B91616F53A99207CB53990A671C640029BB3 (void);
// 0x0000001E System.Void SimpleEventBus.EventBus/<>c::.ctor()
extern void U3CU3Ec__ctor_mABC9EAA4CBDF00A34AD795F97A6BDF9EEB52B333 (void);
// 0x0000001F System.Void SimpleEventBus.EventBus/<>c::<.ctor>b__4_0(System.Collections.Generic.List`1<SimpleEventBus.ISubscriptionHolder>)
extern void U3CU3Ec_U3C_ctorU3Eb__4_0_m6925351EFAA954A9DE6DCADFCBB6DB3763013BEC (void);
// 0x00000020 System.Void SimpleEventBus.ISubscriptionHolder::Invoke(SimpleEventBus.Events.EventBase)
// 0x00000021 System.Void SimpleEventBus.SubscriptionHolder`1::.ctor(SimpleEventBus.EventBus,System.Type,System.Action`1<TEventBase>)
// 0x00000022 System.Void SimpleEventBus.SubscriptionHolder`1::Invoke(SimpleEventBus.Events.EventBase)
// 0x00000023 System.Void SimpleEventBus.SubscriptionHolder`1::Dispose()
// 0x00000024 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<SimpleEventBus.ISubscriptionHolder>> SimpleEventBus.Interfaces.IDebuggableEventBus::get_Subscriptions()
// 0x00000025 System.IDisposable SimpleEventBus.Interfaces.IEventBus::Subscribe(System.Action`1<TEventBase>)
// 0x00000026 System.Void SimpleEventBus.Interfaces.IEventBus::Publish(TEventBase)
// 0x00000027 System.Void SimpleEventBus.Events.EventBase::.ctor()
extern void EventBase__ctor_m218D629F6307F2A0F1CBD9DE450BC2D59D04F192 (void);
// 0x00000028 T SimpleEventBus.Events.EventFactory::Create()
// 0x00000029 System.Void SimpleEventBus.Events.EventFactory::Release(T)
// 0x0000002A System.Collections.Generic.Stack`1<SimpleEventBus.Events.EventBase> SimpleEventBus.Events.EventFactory::GetEventCache(System.Type)
extern void EventFactory_GetEventCache_m6B3FFF8D0D7185E2A68E1044AA34D37C192DEBEB (void);
// 0x0000002B System.Void SimpleEventBus.Events.EventFactory::.cctor()
extern void EventFactory__cctor_m063A6E65C10F2B29BAB11E30B56F16E8F7370739 (void);
// 0x0000002C System.Void SimpleEventBus.Disposables.CompositeDisposable::.ctor()
extern void CompositeDisposable__ctor_m7209889FBF7252C6B2973B7D15C9B0CBCAD5DEFC (void);
// 0x0000002D System.Void SimpleEventBus.Disposables.CompositeDisposable::.ctor(System.Int32)
extern void CompositeDisposable__ctor_m21B605958EA6403F15074F2E39E30DA60D61DFC1 (void);
// 0x0000002E System.Void SimpleEventBus.Disposables.CompositeDisposable::.ctor(System.IDisposable[])
extern void CompositeDisposable__ctor_mAF3B97DE25144B8FE0B3885CE436BD8CE151B4C5 (void);
// 0x0000002F System.Void SimpleEventBus.Disposables.CompositeDisposable::.ctor(System.Collections.Generic.IEnumerable`1<System.IDisposable>)
extern void CompositeDisposable__ctor_m3FCE619D0C59CB5C9D921C9F48273AE0FA04E8D2 (void);
// 0x00000030 System.Int32 SimpleEventBus.Disposables.CompositeDisposable::get_Count()
extern void CompositeDisposable_get_Count_mA516A095B2E803D8AAAF88B3C15C50FDA31E8A24 (void);
// 0x00000031 System.Void SimpleEventBus.Disposables.CompositeDisposable::Add(System.IDisposable)
extern void CompositeDisposable_Add_m06DFCAECF9688C67625E03A79958845FA70BCF38 (void);
// 0x00000032 System.Boolean SimpleEventBus.Disposables.CompositeDisposable::Remove(System.IDisposable)
extern void CompositeDisposable_Remove_mDF0FABBE4AB8E2DAD7D5EE5AA35A6A25E4459FC5 (void);
// 0x00000033 System.Void SimpleEventBus.Disposables.CompositeDisposable::Dispose()
extern void CompositeDisposable_Dispose_m6834444DCA241D024A4062E7F2945715A8173C98 (void);
// 0x00000034 System.Void SimpleEventBus.Disposables.CompositeDisposable::Clear()
extern void CompositeDisposable_Clear_mB532055F223F4F95D693AFF86DFA90E07A83BF38 (void);
// 0x00000035 System.Boolean SimpleEventBus.Disposables.CompositeDisposable::Contains(System.IDisposable)
extern void CompositeDisposable_Contains_mB8D0558CE5B0F635778BF6113EE337691121EE28 (void);
// 0x00000036 System.Void SimpleEventBus.Disposables.CompositeDisposable::CopyTo(System.IDisposable[],System.Int32)
extern void CompositeDisposable_CopyTo_mEFDB80B439B74408B909BCA8AD384F54276CDBE9 (void);
// 0x00000037 System.Boolean SimpleEventBus.Disposables.CompositeDisposable::get_IsReadOnly()
extern void CompositeDisposable_get_IsReadOnly_m096E27E5C0691B3280446FBA9E8586B179A14E95 (void);
// 0x00000038 System.Collections.Generic.IEnumerator`1<System.IDisposable> SimpleEventBus.Disposables.CompositeDisposable::GetEnumerator()
extern void CompositeDisposable_GetEnumerator_m88C735BA39E99F1034C8D70F24E3C1E7C16959A7 (void);
// 0x00000039 System.Collections.IEnumerator SimpleEventBus.Disposables.CompositeDisposable::System.Collections.IEnumerable.GetEnumerator()
extern void CompositeDisposable_System_Collections_IEnumerable_GetEnumerator_m95331F9C9AD5FF7D919E59F14555CBFB2AB196F0 (void);
// 0x0000003A System.Boolean SimpleEventBus.Disposables.CompositeDisposable::get_IsDisposed()
extern void CompositeDisposable_get_IsDisposed_m108D1544B85F51184EF920F449A0712217BC8629 (void);
// 0x0000003B System.Collections.IEnumerator ScreenManager.AnimationAppearingBehaviour::SetActiveAsync(System.Boolean)
extern void AnimationAppearingBehaviour_SetActiveAsync_m8F0628642605B67C3D17AB3B663485FECCD8EC75 (void);
// 0x0000003C System.Void ScreenManager.AnimationAppearingBehaviour::.ctor()
extern void AnimationAppearingBehaviour__ctor_mB470C35FBB2485E0E4ADD987E2AEC8CB88A33D83 (void);
// 0x0000003D System.Void ScreenManager.AnimationAppearingBehaviour/<SetActiveAsync>d__3::.ctor(System.Int32)
extern void U3CSetActiveAsyncU3Ed__3__ctor_m342860403839DD19340B5E1557AC7BF6B73534D9 (void);
// 0x0000003E System.Void ScreenManager.AnimationAppearingBehaviour/<SetActiveAsync>d__3::System.IDisposable.Dispose()
extern void U3CSetActiveAsyncU3Ed__3_System_IDisposable_Dispose_mF175AB258FC2AF4B32D60A1B390192C2ECEB3B12 (void);
// 0x0000003F System.Boolean ScreenManager.AnimationAppearingBehaviour/<SetActiveAsync>d__3::MoveNext()
extern void U3CSetActiveAsyncU3Ed__3_MoveNext_m4AAC55F33798FF2E338A6639FD2B98F8FE0A2B12 (void);
// 0x00000040 System.Object ScreenManager.AnimationAppearingBehaviour/<SetActiveAsync>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSetActiveAsyncU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2FA8FAEF5621BE2D59DF5A1B6A8DE5D8C600D03 (void);
// 0x00000041 System.Void ScreenManager.AnimationAppearingBehaviour/<SetActiveAsync>d__3::System.Collections.IEnumerator.Reset()
extern void U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_Reset_m45D062C25B059E8F75D5DCEFFAF30727C040529B (void);
// 0x00000042 System.Object ScreenManager.AnimationAppearingBehaviour/<SetActiveAsync>d__3::System.Collections.IEnumerator.get_Current()
extern void U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_get_Current_mD0BCD309557A16AFFF83D2AE48E3F4EA1D8FC21B (void);
// 0x00000043 System.Void ScreenManager.AppearingScreensRequest::.ctor(System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void AppearingScreensRequest__ctor_m39846CAF3B9C6DFA19617305890E441B864D677E (void);
// 0x00000044 System.Void ScreenManager.AppearingScreensRequest::ReleaseAllLists(ScreenManager.ObjectPool`1<System.Collections.Generic.List`1<ScreenManager.ScreenData>>)
extern void AppearingScreensRequest_ReleaseAllLists_m48D45F6982EF721AEB7D59C7ED974070ACF38F0C (void);
// 0x00000045 System.Void ScreenManager.CanvasGroupAppearingBehaviour::.ctor(UnityEngine.GameObject)
extern void CanvasGroupAppearingBehaviour__ctor_m94DAF1FD625FCB2CD16BC4FCAC1B09852E0D1051 (void);
// 0x00000046 System.Collections.IEnumerator ScreenManager.CanvasGroupAppearingBehaviour::SetActiveAsync(System.Boolean)
extern void CanvasGroupAppearingBehaviour_SetActiveAsync_m71C8031867DB1F4746497150B7EB12D972F8F914 (void);
// 0x00000047 System.Void ScreenManager.CanvasGroupAppearingBehaviour/<SetActiveAsync>d__3::.ctor(System.Int32)
extern void U3CSetActiveAsyncU3Ed__3__ctor_m94C1A3F77B5F94C754314C7074D6155DBAD068B2 (void);
// 0x00000048 System.Void ScreenManager.CanvasGroupAppearingBehaviour/<SetActiveAsync>d__3::System.IDisposable.Dispose()
extern void U3CSetActiveAsyncU3Ed__3_System_IDisposable_Dispose_mADA13896B31DC0ABB14BD53ACE21A20BA7230694 (void);
// 0x00000049 System.Boolean ScreenManager.CanvasGroupAppearingBehaviour/<SetActiveAsync>d__3::MoveNext()
extern void U3CSetActiveAsyncU3Ed__3_MoveNext_m6EF888594D4377B65F32F41B727555AB514A2AEF (void);
// 0x0000004A System.Object ScreenManager.CanvasGroupAppearingBehaviour/<SetActiveAsync>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSetActiveAsyncU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA88AA7AD55085877C06863731E69431B1B4AB69 (void);
// 0x0000004B System.Void ScreenManager.CanvasGroupAppearingBehaviour/<SetActiveAsync>d__3::System.Collections.IEnumerator.Reset()
extern void U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_Reset_m0BE9F1060F71F1520EB9DCC0DF7DE0DA426487DD (void);
// 0x0000004C System.Object ScreenManager.CanvasGroupAppearingBehaviour/<SetActiveAsync>d__3::System.Collections.IEnumerator.get_Current()
extern void U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_get_Current_m0354DD0C954ADE47294AEF8835238C3F76B4C0BF (void);
// 0x0000004D System.Collections.IEnumerator ScreenManager.EmptyAppearingBehaviour::SetActiveAsync(System.Boolean)
extern void EmptyAppearingBehaviour_SetActiveAsync_m7BFBD4DCF92A422BA6D9A4B13D528E92C351469F (void);
// 0x0000004E System.Void ScreenManager.EmptyAppearingBehaviour::.ctor()
extern void EmptyAppearingBehaviour__ctor_m177AE2885EF940C035B01964960344EE665B1584 (void);
// 0x0000004F System.Void ScreenManager.EmptyAppearingBehaviour/<SetActiveAsync>d__0::.ctor(System.Int32)
extern void U3CSetActiveAsyncU3Ed__0__ctor_mEC1F17B1EE31938C1AC91294CA13441FD65A5B8D (void);
// 0x00000050 System.Void ScreenManager.EmptyAppearingBehaviour/<SetActiveAsync>d__0::System.IDisposable.Dispose()
extern void U3CSetActiveAsyncU3Ed__0_System_IDisposable_Dispose_m12C94158014F6CF93D9522DB0FB512779863ADBB (void);
// 0x00000051 System.Boolean ScreenManager.EmptyAppearingBehaviour/<SetActiveAsync>d__0::MoveNext()
extern void U3CSetActiveAsyncU3Ed__0_MoveNext_mA1279F3C1B84F071174B3585A691559365610DFE (void);
// 0x00000052 System.Object ScreenManager.EmptyAppearingBehaviour/<SetActiveAsync>d__0::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSetActiveAsyncU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6FFB8A06974AEEF7EA914A7CE2C2B784F2F6C38C (void);
// 0x00000053 System.Void ScreenManager.EmptyAppearingBehaviour/<SetActiveAsync>d__0::System.Collections.IEnumerator.Reset()
extern void U3CSetActiveAsyncU3Ed__0_System_Collections_IEnumerator_Reset_m925182B15096648319A7187701A1B415CF465793 (void);
// 0x00000054 System.Object ScreenManager.EmptyAppearingBehaviour/<SetActiveAsync>d__0::System.Collections.IEnumerator.get_Current()
extern void U3CSetActiveAsyncU3Ed__0_System_Collections_IEnumerator_get_Current_mFC85D3C35C6F678EA0EE76919666EC4FFEA2C0A8 (void);
// 0x00000055 System.Collections.Generic.Queue`1<ScreenManager.AppearingScreensRequest> ScreenManager.IAppearingRequestsHolder::get_Requests()
// 0x00000056 System.Collections.Generic.Stack`1<ScreenManager.ScreenData> ScreenManager.IScreenStackHolder::get_OpenedScreens()
// 0x00000057 System.Void ScreenManager.ScreenAppearingRequestDebugInformation::SetNewRequest(ScreenManager.AppearingScreensRequest)
extern void ScreenAppearingRequestDebugInformation_SetNewRequest_mB4F5507B27E2720A038CA9FB59AC4891D1400EB5 (void);
// 0x00000058 System.Void ScreenManager.ScreenAppearingRequestDebugInformation::MarkUnloadScreensProcessed()
extern void ScreenAppearingRequestDebugInformation_MarkUnloadScreensProcessed_mEC003895DEC55C1C24C47001D0446EC5D80CF15B (void);
// 0x00000059 System.Void ScreenManager.ScreenAppearingRequestDebugInformation::MarkHideScreensProcessed()
extern void ScreenAppearingRequestDebugInformation_MarkHideScreensProcessed_m3F63CA527DF9658AA056DBC1ED6D610A8694CE97 (void);
// 0x0000005A System.Void ScreenManager.ScreenAppearingRequestDebugInformation::MarkShowScreensProcessed()
extern void ScreenAppearingRequestDebugInformation_MarkShowScreensProcessed_mA04F12B4F37077BE72E98CD54009A72523A5ADEB (void);
// 0x0000005B System.Void ScreenManager.ScreenAppearingRequestDebugInformation::.ctor()
extern void ScreenAppearingRequestDebugInformation__ctor_mC0A91E8FD3C3BFA0D215EE589B4109D447281C6F (void);
// 0x0000005C System.Collections.Generic.Queue`1<ScreenManager.AppearingScreensRequest> ScreenManager.ScreensAppearingProcessor::get_Requests()
extern void ScreensAppearingProcessor_get_Requests_mECFCB73ED5FCB825E8833FC049A58ADB68378468 (void);
// 0x0000005D System.Void ScreenManager.ScreensAppearingProcessor::.ctor(UnityEngine.MonoBehaviour,ScreenManager.ScreensCache,ScreenManager.ObjectPool`1<System.Collections.Generic.List`1<ScreenManager.ScreenData>>)
extern void ScreensAppearingProcessor__ctor_m3EF927A27CC89D5BBA35CAD0701952B7F41BAED1 (void);
// 0x0000005E System.Void ScreenManager.ScreensAppearingProcessor::GetScreenDebugDataHandler(ScreenManager.Events.GetScreenDebugDataEvent)
extern void ScreensAppearingProcessor_GetScreenDebugDataHandler_m9AEEC86581EB2D669AB171BB217A55903DF1A7BB (void);
// 0x0000005F System.Void ScreenManager.ScreensAppearingProcessor::Dispose()
extern void ScreensAppearingProcessor_Dispose_m0E54942902A8B6CB810D939B86BFB44F3612228F (void);
// 0x00000060 System.Void ScreenManager.ScreensAppearingProcessor::TryProcessNext()
extern void ScreensAppearingProcessor_TryProcessNext_mD69A4FE9D95EE5B30B988E15D920A103A707E76C (void);
// 0x00000061 System.Void ScreenManager.ScreensAppearingProcessor::AddToQueueAndTryProcess(System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_AddToQueueAndTryProcess_m714B601D5A3895C734CA9DD0AA838C18B326BF1B (void);
// 0x00000062 System.Void ScreenManager.ScreensAppearingProcessor::Process(System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_Process_m1C7958008E2A040B77C92ECF652F45DD5E54CB44 (void);
// 0x00000063 System.Boolean ScreenManager.ScreensAppearingProcessor::HasNotLoadedScreen(System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_HasNotLoadedScreen_m29E485BDCEF0E05EE312710CACF535D3EADA1B7D (void);
// 0x00000064 System.Collections.IEnumerator ScreenManager.ScreensAppearingProcessor::ShowScreens(System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>,System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_ShowScreens_m2F0FE6B861FEE2A5D88B2D3461EEE07A8379C80B (void);
// 0x00000065 System.Void ScreenManager.ScreensAppearingProcessor::UnloadAndReleaseProvidedList(System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_UnloadAndReleaseProvidedList_m63514F12AC4E763E9AABD3E9EA6CF9E964731BD9 (void);
// 0x00000066 System.Collections.IEnumerator ScreenManager.ScreensAppearingProcessor::ShowScreens(System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_ShowScreens_m25420E304C4125EFD632C5D3205B296E24CD1184 (void);
// 0x00000067 System.Void ScreenManager.ScreensAppearingProcessor::HandleExceptionAndRemoveScreenEverywhere(ScreenManager.ScreenData,System.Exception)
extern void ScreensAppearingProcessor_HandleExceptionAndRemoveScreenEverywhere_m68BB0B79861BBC84D7A19DA9F65FF4CB86365130 (void);
// 0x00000068 System.Void ScreenManager.ScreensAppearingProcessor::RemoveFromRequestAndUnload(ScreenManager.ScreenData)
extern void ScreensAppearingProcessor_RemoveFromRequestAndUnload_m0C57728163E7D7524849FDF3799FEE6D34E5B5A3 (void);
// 0x00000069 System.Void ScreenManager.ScreensAppearingProcessor::RemoveScreenMentions(System.Collections.Generic.List`1<ScreenManager.ScreenData>,ScreenManager.ScreenData)
extern void ScreensAppearingProcessor_RemoveScreenMentions_m22F7551936ACB5C45A05AEF3D7101F76B974CE11 (void);
// 0x0000006A System.Collections.IEnumerator ScreenManager.ScreensAppearingProcessor::HideScreens(System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_HideScreens_mA785A6C2B5439B4BB315A0EE9B938028F54B6835 (void);
// 0x0000006B System.Void ScreenManager.ScreensAppearingProcessor::Reset(System.Collections.Generic.IEnumerable`1<ScreenManager.ScreenData>,System.Boolean)
extern void ScreensAppearingProcessor_Reset_mD2163659DD0B2405D5DA37F51491AAC36518B8A6 (void);
// 0x0000006C System.Void ScreenManager.ScreensAppearingProcessor::ResetInstantly(System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void ScreensAppearingProcessor_ResetInstantly_m1D37C487E0E1756E88F148973DB942E0B0425218 (void);
// 0x0000006D System.Void ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__18::.ctor(System.Int32)
extern void U3CShowScreensU3Ed__18__ctor_m43AEF21342275107D7F7A0FCD3F8CE618D056D9D (void);
// 0x0000006E System.Void ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__18::System.IDisposable.Dispose()
extern void U3CShowScreensU3Ed__18_System_IDisposable_Dispose_m7737F9A4D027D2565ED85DD0B4893975DEB3DF8D (void);
// 0x0000006F System.Boolean ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__18::MoveNext()
extern void U3CShowScreensU3Ed__18_MoveNext_mA424DB643CCE85DEA92354A9DDA9A8EA1F4D2F57 (void);
// 0x00000070 System.Object ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CShowScreensU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB74DFDB94D85D8CE1EC7452EB3BF1DF101193BE1 (void);
// 0x00000071 System.Void ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__18::System.Collections.IEnumerator.Reset()
extern void U3CShowScreensU3Ed__18_System_Collections_IEnumerator_Reset_m81B229895977FC350A895406884E1FCF3DC6FCCA (void);
// 0x00000072 System.Object ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__18::System.Collections.IEnumerator.get_Current()
extern void U3CShowScreensU3Ed__18_System_Collections_IEnumerator_get_Current_m32932ED2709F751295F361650A48DFD56EA88D55 (void);
// 0x00000073 System.Void ScreenManager.ScreensAppearingProcessor/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_m57992D0A8C7112C56915AECFBDA458439A0B9686 (void);
// 0x00000074 System.Void ScreenManager.ScreensAppearingProcessor/<>c__DisplayClass20_0::<ShowScreens>b__0(System.Exception)
extern void U3CU3Ec__DisplayClass20_0_U3CShowScreensU3Eb__0_mAB7A2F07D92D14423631A2D63EEC715010F6E77E (void);
// 0x00000075 System.Void ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__20::.ctor(System.Int32)
extern void U3CShowScreensU3Ed__20__ctor_m4B156F2F6463EDF3E8AC3F01511D90981363E80B (void);
// 0x00000076 System.Void ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__20::System.IDisposable.Dispose()
extern void U3CShowScreensU3Ed__20_System_IDisposable_Dispose_mB02D0B4646837DE6E0432566C263EAA4ECDD80C0 (void);
// 0x00000077 System.Boolean ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__20::MoveNext()
extern void U3CShowScreensU3Ed__20_MoveNext_m168C132D5A83E2E8623A2A7BEF07F2AB0EAD74A6 (void);
// 0x00000078 System.Void ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__20::<>m__Finally1()
extern void U3CShowScreensU3Ed__20_U3CU3Em__Finally1_m136AD7B34C956D86E6364BCBCEC0FF1BF5994222 (void);
// 0x00000079 System.Object ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CShowScreensU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m843D96621BB8AF5F75D0DC95737B1B7AC6F085B5 (void);
// 0x0000007A System.Void ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__20::System.Collections.IEnumerator.Reset()
extern void U3CShowScreensU3Ed__20_System_Collections_IEnumerator_Reset_m1691B5FF7CA752F5CBE7C5E9B25839393FA2667B (void);
// 0x0000007B System.Object ScreenManager.ScreensAppearingProcessor/<ShowScreens>d__20::System.Collections.IEnumerator.get_Current()
extern void U3CShowScreensU3Ed__20_System_Collections_IEnumerator_get_Current_mB950B59EC37E8AB9AF5BA5155F70B957CB598916 (void);
// 0x0000007C System.Void ScreenManager.ScreensAppearingProcessor/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_mC21B5528323E1C7D8428BD106B04DDAC0305E13D (void);
// 0x0000007D System.Void ScreenManager.ScreensAppearingProcessor/<>c__DisplayClass24_0::<HideScreens>b__0(System.Exception)
extern void U3CU3Ec__DisplayClass24_0_U3CHideScreensU3Eb__0_mCF2C40E91015AE65863F3E92349CE811445DD8AB (void);
// 0x0000007E System.Void ScreenManager.ScreensAppearingProcessor/<HideScreens>d__24::.ctor(System.Int32)
extern void U3CHideScreensU3Ed__24__ctor_m2E8B17C646BCB6F2B77B659B45C8E468EED135D5 (void);
// 0x0000007F System.Void ScreenManager.ScreensAppearingProcessor/<HideScreens>d__24::System.IDisposable.Dispose()
extern void U3CHideScreensU3Ed__24_System_IDisposable_Dispose_mE66C8C18C809B7FD19E75C1371CD1F0FEB72C7A3 (void);
// 0x00000080 System.Boolean ScreenManager.ScreensAppearingProcessor/<HideScreens>d__24::MoveNext()
extern void U3CHideScreensU3Ed__24_MoveNext_m0CE857014AF0C262FDE390BF584431ACD1359B20 (void);
// 0x00000081 System.Void ScreenManager.ScreensAppearingProcessor/<HideScreens>d__24::<>m__Finally1()
extern void U3CHideScreensU3Ed__24_U3CU3Em__Finally1_m4AEFE046A366710BB790E799D16AC6B23FE9957B (void);
// 0x00000082 System.Object ScreenManager.ScreensAppearingProcessor/<HideScreens>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CHideScreensU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3BB0D5061E4AC8F994980509A882F9190D89BAF2 (void);
// 0x00000083 System.Void ScreenManager.ScreensAppearingProcessor/<HideScreens>d__24::System.Collections.IEnumerator.Reset()
extern void U3CHideScreensU3Ed__24_System_Collections_IEnumerator_Reset_mFCF64DA5A9CC1BD3ACE5BEC0950A01EBF11FB828 (void);
// 0x00000084 System.Object ScreenManager.ScreensAppearingProcessor/<HideScreens>d__24::System.Collections.IEnumerator.get_Current()
extern void U3CHideScreensU3Ed__24_System_Collections_IEnumerator_get_Current_mCAE7E2695E41F92ADE03B689F964CE1A300AA1AE (void);
// 0x00000085 System.Void ScreenManager.ScreenUnloadingHelper::.ctor(ScreenManager.IScreenStackHolder,ScreenManager.IAppearingRequestsHolder,ScreenManager.Interfaces.IScreenSettingsProvider)
extern void ScreenUnloadingHelper__ctor_m82FB4D26641DF33B8AA8EB8250DA7DA74059861B (void);
// 0x00000086 System.Boolean ScreenManager.ScreenUnloadingHelper::IsAllowedToUnload(ScreenManager.Enums.ScreenId)
extern void ScreenUnloadingHelper_IsAllowedToUnload_m6A25338945AF3212C69738999900A7A6E032A39C (void);
// 0x00000087 System.Boolean ScreenManager.ScreenUnloadingHelper::HasAnyScreenWithSameSettings(System.Collections.Generic.IEnumerable`1<ScreenManager.ScreenData>,ScreenManager.Interfaces.IScreenSettings)
extern void ScreenUnloadingHelper_HasAnyScreenWithSameSettings_m32DD033C483C6E09B82030C560FFAB2C21B8BF0E (void);
// 0x00000088 System.Boolean ScreenManager.ScreenUnloadingHelper::HasInStackWithSameSettings(ScreenManager.Interfaces.IScreenSettings)
extern void ScreenUnloadingHelper_HasInStackWithSameSettings_m5F0F50A9CEB6D8D21748AB7A3FB6D6D3BFF41573 (void);
// 0x00000089 System.Collections.IEnumerator ScreenManager.TriggerAppearingBehaviour::SetActiveAsync(System.Boolean)
extern void TriggerAppearingBehaviour_SetActiveAsync_m4EFFCBC5332F65158B9C3A0403403356BBA2A053 (void);
// 0x0000008A System.Void ScreenManager.TriggerAppearingBehaviour::.ctor()
extern void TriggerAppearingBehaviour__ctor_m1BA9A95B524FFBE8E0D2A3CDE318910BD18DF432 (void);
// 0x0000008B System.Void ScreenManager.TriggerAppearingBehaviour/<SetActiveAsync>d__4::.ctor(System.Int32)
extern void U3CSetActiveAsyncU3Ed__4__ctor_m80A640939609BD1FE21EF58C8F8F5B626403A046 (void);
// 0x0000008C System.Void ScreenManager.TriggerAppearingBehaviour/<SetActiveAsync>d__4::System.IDisposable.Dispose()
extern void U3CSetActiveAsyncU3Ed__4_System_IDisposable_Dispose_m8FEDFFEAAB6B7AE5DE04329988B6224A9F2234C7 (void);
// 0x0000008D System.Boolean ScreenManager.TriggerAppearingBehaviour/<SetActiveAsync>d__4::MoveNext()
extern void U3CSetActiveAsyncU3Ed__4_MoveNext_m9F2A58F21B39120897E47452AAA1DF1FEE072B2F (void);
// 0x0000008E System.Object ScreenManager.TriggerAppearingBehaviour/<SetActiveAsync>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CSetActiveAsyncU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1B4B175F3828C9AF7E749DF14EE8AE412C1B29CA (void);
// 0x0000008F System.Void ScreenManager.TriggerAppearingBehaviour/<SetActiveAsync>d__4::System.Collections.IEnumerator.Reset()
extern void U3CSetActiveAsyncU3Ed__4_System_Collections_IEnumerator_Reset_m0159356086F6822D158D26A1B49831388F4A0225 (void);
// 0x00000090 System.Object ScreenManager.TriggerAppearingBehaviour/<SetActiveAsync>d__4::System.Collections.IEnumerator.get_Current()
extern void U3CSetActiveAsyncU3Ed__4_System_Collections_IEnumerator_get_Current_m8ECA2B6664D61E3E879BB9A3B87F044D7CA10E0D (void);
// 0x00000091 System.Collections.Generic.Stack`1<ScreenManager.ScreenData> ScreenManager.BaseScreenManager::get_OpenedScreens()
extern void BaseScreenManager_get_OpenedScreens_m60A12F9676A9379744B1C7A54850D87969EA4521 (void);
// 0x00000092 System.Void ScreenManager.BaseScreenManager::Awake()
extern void BaseScreenManager_Awake_m4BF227D549527E7F87940BF9ADBED95CD348E68F (void);
// 0x00000093 System.Void ScreenManager.BaseScreenManager::OnDestroy()
extern void BaseScreenManager_OnDestroy_mF027B062F02D5B09F185A9FA1E88950DC579DF01 (void);
// 0x00000094 System.Void ScreenManager.BaseScreenManager::OnEnable()
extern void BaseScreenManager_OnEnable_m717DE6BC75B1460C4B60B89FAE1DF1FB991433BC (void);
// 0x00000095 ScreenManager.Interfaces.IScreenLoader ScreenManager.BaseScreenManager::GetScreenLoader()
// 0x00000096 ScreenManager.Interfaces.IScreenSettingsProvider ScreenManager.BaseScreenManager::GetScreenSettingsProvider()
// 0x00000097 System.Void ScreenManager.BaseScreenManager::OnScreenAppearingExceptionHandler(ScreenManager.Events.ScreenSetActiveException)
extern void BaseScreenManager_OnScreenAppearingExceptionHandler_m3AB4600F6BDDE283725892B07EB3F268A513D023 (void);
// 0x00000098 System.Void ScreenManager.BaseScreenManager::RemoveScreenFromStackAndFromAppearingQueue(ScreenManager.ScreenData)
extern void BaseScreenManager_RemoveScreenFromStackAndFromAppearingQueue_m269361F13E04FFCE48FF68B028D58596493D14B3 (void);
// 0x00000099 System.Void ScreenManager.BaseScreenManager::OnUpdateTopScreen()
extern void BaseScreenManager_OnUpdateTopScreen_mFEFCFD77CAC1289ABBE7859A5964B76439197387 (void);
// 0x0000009A System.Void ScreenManager.BaseScreenManager::ScreenLoadedHandler(ScreenManager.Events.ScreenLoadedEvent)
extern void BaseScreenManager_ScreenLoadedHandler_m95807E942718DCD3D7603085884D008E42DA69EB (void);
// 0x0000009B System.Void ScreenManager.BaseScreenManager::FailScreenLoadingHandler(ScreenManager.FailScreenLoadingEvent)
extern void BaseScreenManager_FailScreenLoadingHandler_m287B1541B88F6B15F6357DBA9DC06152FF861672 (void);
// 0x0000009C System.Void ScreenManager.BaseScreenManager::IsScreenOpenedHandler(ScreenManager.Events.IsScreenOpenedEvent)
extern void BaseScreenManager_IsScreenOpenedHandler_m2AB53FC6A78CF0F37B1838FEA3F3AFA8BF14EAC0 (void);
// 0x0000009D System.Void ScreenManager.BaseScreenManager::GetTopScreenHandler(ScreenManager.Events.GetTopScreenEvent)
extern void BaseScreenManager_GetTopScreenHandler_m8A1EE276689B9C5ED3ED4A1A35F47A234D8BEC9F (void);
// 0x0000009E System.Void ScreenManager.BaseScreenManager::IsOpenedOrPlannedHandler(ScreenManager.Events.IsOpenedOrPlannedEvent)
extern void BaseScreenManager_IsOpenedOrPlannedHandler_m07581F9C5A336337AD2749CB0800B535A2B59E78 (void);
// 0x0000009F System.Void ScreenManager.BaseScreenManager::GetScreenSettingsProviderHandler(ScreenManager.Events.GetScreenSettingsProviderEvent)
extern void BaseScreenManager_GetScreenSettingsProviderHandler_m5C97C4657ACB46A091122702C7A16357FBD6591E (void);
// 0x000000A0 System.Void ScreenManager.BaseScreenManager::GetScreenDebugDataHandler(ScreenManager.Events.GetScreenDebugDataEvent)
extern void BaseScreenManager_GetScreenDebugDataHandler_m1ABA8ECAA70CF433330718132CE2CF3D1E7AC816 (void);
// 0x000000A1 System.Void ScreenManager.BaseScreenManager::CloseScreensByTypeHandler(ScreenManager.Events.CloseScreensByTypeEvent)
extern void BaseScreenManager_CloseScreensByTypeHandler_mA40C5269B694FF2525F8A6F2CBBF2B8C9E84FEB6 (void);
// 0x000000A2 System.Void ScreenManager.BaseScreenManager::CloseScreenByGuidHandler(ScreenManager.Events.CloseScreenByGuidEvent)
extern void BaseScreenManager_CloseScreenByGuidHandler_m2A19229239FCB88A1A84EFA2FC5E41F69270A910 (void);
// 0x000000A3 System.Void ScreenManager.BaseScreenManager::CloseScreens(System.Predicate`1<ScreenManager.ScreenData>)
extern void BaseScreenManager_CloseScreens_m87948B72BBB25B51D0A8EDA1285CA9632E6F0BBC (void);
// 0x000000A4 System.Void ScreenManager.BaseScreenManager::CloseAllScreensHandler(ScreenManager.Events.CloseAllScreensEvent)
extern void BaseScreenManager_CloseAllScreensHandler_m8EDA93B1805DE713A82E7C9BC32471CAD1DC1A19 (void);
// 0x000000A5 System.Void ScreenManager.BaseScreenManager::OnGetOpenedScreensEventHandler(ScreenManager.Events.GetOpenedScreensEvent)
extern void BaseScreenManager_OnGetOpenedScreensEventHandler_m015B9C21BA60214E7D66E849CCA77BA5BD77D6FE (void);
// 0x000000A6 System.Void ScreenManager.BaseScreenManager::OnDisable()
extern void BaseScreenManager_OnDisable_mB1B0ECC060343FC1062F4B41B74055335AC639AB (void);
// 0x000000A7 System.Void ScreenManager.BaseScreenManager::BackEventHandler(ScreenManager.Events.BackToPreviousScreenEvent)
extern void BaseScreenManager_BackEventHandler_mAAD4851FB6E7CC02593C1CD6B8733AE29664C0DA (void);
// 0x000000A8 System.Void ScreenManager.BaseScreenManager::OpenScreenEventHandler(ScreenManager.Events.OpenScreenEvent)
extern void BaseScreenManager_OpenScreenEventHandler_m08A449724D4268714723BB38F6BC9676789A9E1D (void);
// 0x000000A9 System.Boolean ScreenManager.BaseScreenManager::IsOpened(ScreenManager.Enums.ScreenId)
extern void BaseScreenManager_IsOpened_mB3194198EA518C1C25065629F1549E78B5C9C92D (void);
// 0x000000AA System.Void ScreenManager.BaseScreenManager::BackToPrevious(ScreenManager.Enums.ScreenId)
extern void BaseScreenManager_BackToPrevious_m147D2482EB5A1F5E7C49D08B4E75B5F3170F2478 (void);
// 0x000000AB System.Void ScreenManager.BaseScreenManager::ReturnToScreen(ScreenManager.Enums.ScreenId,System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void BaseScreenManager_ReturnToScreen_mCB23AE2B8C073F208245741D8E2B893CCF6D6880 (void);
// 0x000000AC System.Collections.Generic.List`1<ScreenManager.ScreenData> ScreenManager.BaseScreenManager::GetVisibleScreens()
extern void BaseScreenManager_GetVisibleScreens_m3AC03C40349F2BB85C946AF2FB237B26B48ABAFE (void);
// 0x000000AD System.Void ScreenManager.BaseScreenManager::OpenScreen(ScreenManager.ScreenData)
extern void BaseScreenManager_OpenScreen_m9508D5ECE9B810F423176BC8773C2CB2FF6EA474 (void);
// 0x000000AE System.Void ScreenManager.BaseScreenManager::Log(System.String)
extern void BaseScreenManager_Log_mB0D996E3A09DD16355EE72439B8E71082F1B818B (void);
// 0x000000AF System.Void ScreenManager.BaseScreenManager::.ctor()
extern void BaseScreenManager__ctor_m31EDFAAE48B3F06F70B5EDD9EDD52BB586D90766 (void);
// 0x000000B0 System.Void ScreenManager.BaseScreenManager/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mF27272A28B1F5B944DE6FBEFF1AFE0C469E0737A (void);
// 0x000000B1 System.Boolean ScreenManager.BaseScreenManager/<>c__DisplayClass13_0::<RemoveScreenFromStackAndFromAppearingQueue>b__0(ScreenManager.ScreenData)
extern void U3CU3Ec__DisplayClass13_0_U3CRemoveScreenFromStackAndFromAppearingQueueU3Eb__0_mAE084748F37C0E6DBD8B52DE279A5DD90909BBFF (void);
// 0x000000B2 System.Boolean ScreenManager.BaseScreenManager/<>c__DisplayClass13_0::<RemoveScreenFromStackAndFromAppearingQueue>b__1(ScreenManager.ScreenData)
extern void U3CU3Ec__DisplayClass13_0_U3CRemoveScreenFromStackAndFromAppearingQueueU3Eb__1_mC43036D0B9092D14635514AE5DBB9DC213E1C046 (void);
// 0x000000B3 System.Void ScreenManager.BaseScreenManager/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_m5F8FBDA634A0D422CF16CB7B77161CAA30A38A5F (void);
// 0x000000B4 System.Boolean ScreenManager.BaseScreenManager/<>c__DisplayClass17_0::<IsScreenOpenedHandler>b__0(ScreenManager.ScreenData)
extern void U3CU3Ec__DisplayClass17_0_U3CIsScreenOpenedHandlerU3Eb__0_mD84134141E1DCD1FDF94812AFE995C89A7D1F856 (void);
// 0x000000B5 System.Void ScreenManager.BaseScreenManager/<>c__DisplayClass19_0::.ctor()
extern void U3CU3Ec__DisplayClass19_0__ctor_mBDFB17423B4470EBC96114E63CEBFD5644FE6C0D (void);
// 0x000000B6 System.Boolean ScreenManager.BaseScreenManager/<>c__DisplayClass19_0::<IsOpenedOrPlannedHandler>b__0(ScreenManager.ScreenData)
extern void U3CU3Ec__DisplayClass19_0_U3CIsOpenedOrPlannedHandlerU3Eb__0_m2326579B64597C1D2471DB552640242BB2FBE59B (void);
// 0x000000B7 System.Void ScreenManager.BaseScreenManager/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_mE0734B886C57CC092D46DDE103AE91B8653775F2 (void);
// 0x000000B8 System.Boolean ScreenManager.BaseScreenManager/<>c__DisplayClass22_0::<CloseScreensByTypeHandler>b__0(ScreenManager.ScreenData)
extern void U3CU3Ec__DisplayClass22_0_U3CCloseScreensByTypeHandlerU3Eb__0_mB5BBD3AA3E1DB315346E8B0005B5BE0833125DA5 (void);
// 0x000000B9 System.Void ScreenManager.BaseScreenManager/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_m69A59C11C3DB8A65A13CFAAB2F5B0B91D008BC38 (void);
// 0x000000BA System.Boolean ScreenManager.BaseScreenManager/<>c__DisplayClass23_0::<CloseScreenByGuidHandler>b__0(ScreenManager.ScreenData)
extern void U3CU3Ec__DisplayClass23_0_U3CCloseScreenByGuidHandlerU3Eb__0_m3CB044AD9E75A0B40F92B7BF7E1147BA1B113048 (void);
// 0x000000BB System.Void ScreenManager.BaseScreenManager/<>c::.cctor()
extern void U3CU3Ec__cctor_m7B6DC4E836B6A2BEA1BE76282E832EBBEB49BC27 (void);
// 0x000000BC System.Void ScreenManager.BaseScreenManager/<>c::.ctor()
extern void U3CU3Ec__ctor_m55E466967957206443381F8662D2D5712A1999CA (void);
// 0x000000BD System.Void ScreenManager.BaseScreenManager/<>c::<.ctor>b__36_0(System.Collections.Generic.List`1<ScreenManager.ScreenData>)
extern void U3CU3Ec_U3C_ctorU3Eb__36_0_mE34EB64647C427A140FBFD6BE118DCD5731FAFD3 (void);
// 0x000000BE System.Void ScreenManager.FailScreenLoadingEvent::.ctor(ScreenManager.Enums.ScreenId)
extern void FailScreenLoadingEvent__ctor_m93C7C2B4216C00C296A148A2E0467F0E12D0E535 (void);
// 0x000000BF System.Void ScreenManager.QueueScreenData::.ctor(ScreenManager.ScreenData,System.Boolean,ScreenManager.Conditions.IScreenCondition,ScreenManager.Conditions.IScreenCondition)
extern void QueueScreenData__ctor_mADB41A9245A3815592B11E09698E12D6A28512CA (void);
// 0x000000C0 System.Boolean ScreenManager.QueueScreenData::IsExpired()
extern void QueueScreenData_IsExpired_m8CCF06795254859B61C26A6C6FDFF3BFB79CC667 (void);
// 0x000000C1 System.Boolean ScreenManager.QueueScreenData::IsReadyToShow()
extern void QueueScreenData_IsReadyToShow_m8BBACC3FEF318C82ED34C009B957C62551EBA0EF (void);
// 0x000000C2 System.Void ScreenManager.QueueScreenData::Dispose()
extern void QueueScreenData_Dispose_m7E521D4C9BB71322734218A3011759A9A92F0FD7 (void);
// 0x000000C3 System.Void ScreenManager.ScreenData::.ctor(ScreenManager.Enums.ScreenId,System.Object,System.Boolean,System.Boolean)
extern void ScreenData__ctor_mA7DF289A32544C811E9FB5F90DC6C427C7AFF96C (void);
// 0x000000C4 System.Void ScreenManager.ScreenManagerStateWatcher::OnEnable()
extern void ScreenManagerStateWatcher_OnEnable_mDFE25F32502683A54EDD6D0BC2FAC0DA2467778D (void);
// 0x000000C5 System.Void ScreenManager.ScreenManagerStateWatcher::OnDisable()
extern void ScreenManagerStateWatcher_OnDisable_mBF8836D80CC05C5B30DAEAFF810FDCDBFEB46F6B (void);
// 0x000000C6 System.Void ScreenManager.ScreenManagerStateWatcher::GetScreenManagerStateHandler(ScreenManager.Events.GetScreenManagerStateEvent)
extern void ScreenManagerStateWatcher_GetScreenManagerStateHandler_mB2B063CFA4E92620075BADCF81179BF76D62396F (void);
// 0x000000C7 System.Void ScreenManager.ScreenManagerStateWatcher::OnScreenClosedHandler(ScreenManager.Events.ScreenClosedEvent)
extern void ScreenManagerStateWatcher_OnScreenClosedHandler_mFAD1CCC45B13CA78A81302544E99089173DCAC0D (void);
// 0x000000C8 System.Void ScreenManager.ScreenManagerStateWatcher::OnScreenOpeningHandler(ScreenManager.Events.ScreenOpeningEvent)
extern void ScreenManagerStateWatcher_OnScreenOpeningHandler_m7E6DA64E55BBB0724AA164E27D98BDFC4D3FDBEE (void);
// 0x000000C9 System.Void ScreenManager.ScreenManagerStateWatcher::.ctor()
extern void ScreenManagerStateWatcher__ctor_m6095711EA7954F38498B92496A37C4E955EA33E7 (void);
// 0x000000CA System.Void ScreenManager.ScreenQueue::.ctor(ScreenManager.Enums.ScreenId)
extern void ScreenQueue__ctor_mD6529FDBC60E92349B029E4F43401A4A8992EAC7 (void);
// 0x000000CB System.Void ScreenManager.ScreenQueue::ScreenClosedHandler(ScreenManager.Events.ScreenUnloadedEvent)
extern void ScreenQueue_ScreenClosedHandler_mF61520DE660137FD276C3F3B27DA7727A4E60466 (void);
// 0x000000CC System.Void ScreenManager.ScreenQueue::GetScreenDebugDataHandler(ScreenManager.Events.GetScreenDebugDataEvent)
extern void ScreenQueue_GetScreenDebugDataHandler_m38CB5E766A11D7B216850F6A8BB2A83B182A31F6 (void);
// 0x000000CD System.Void ScreenManager.ScreenQueue::Dispose()
extern void ScreenQueue_Dispose_mFD150BAC6D5665E474083A7CBD6A7FB0A9983747 (void);
// 0x000000CE System.Void ScreenManager.ScreenQueue::Remove(ScreenManager.Enums.ScreenId)
extern void ScreenQueue_Remove_m2C3822638BEF861469B0692C2B1C51A1DF36079D (void);
// 0x000000CF System.Void ScreenManager.ScreenQueue::Remove(System.Guid)
extern void ScreenQueue_Remove_m1F3B6D18FD1D8D951FFACE98434C6BF9218598E1 (void);
// 0x000000D0 System.Void ScreenManager.ScreenQueue::TryShowNext()
extern void ScreenQueue_TryShowNext_m93ACFF5377B1E4775FE7690DB5DBE513451C4BA8 (void);
// 0x000000D1 System.Boolean ScreenManager.ScreenQueue::HasScreen(ScreenManager.Enums.ScreenId)
extern void ScreenQueue_HasScreen_m8C690FF1DAD609F50D823131AE569A30CF1A4C78 (void);
// 0x000000D2 System.Void ScreenManager.ScreenQueue::Enqueue(ScreenManager.QueueScreenData)
extern void ScreenQueue_Enqueue_m94155F0A2262811295714FB5436F8C840AFA265C (void);
// 0x000000D3 System.Void ScreenManager.ScreenQueue::RemoveExpiredScreensFromQueue()
extern void ScreenQueue_RemoveExpiredScreensFromQueue_m9227AD670C622A9AE44E005844D563FFD9F9E05C (void);
// 0x000000D4 ScreenManager.QueueScreenData ScreenManager.ScreenQueue::GetFirstReadyToShowScreen()
extern void ScreenQueue_GetFirstReadyToShowScreen_m0A804EB1C1D5B09CCC4200D609EFABDA2D633858 (void);
// 0x000000D5 System.Void ScreenManager.ScreenQueue::ShowNextScreen(ScreenManager.QueueScreenData)
extern void ScreenQueue_ShowNextScreen_mA4AB26DEE8E2EB41154D776C9F1F2B3F954FDE4A (void);
// 0x000000D6 System.Void ScreenManager.ScreenQueue::Update()
extern void ScreenQueue_Update_m47928EE5CD85489052407637B4B3B35BCC6F9BD9 (void);
// 0x000000D7 System.Void ScreenManager.ScreenQueue/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m76CC6A074FD563140772D3E1702FB7621E8F3B98 (void);
// 0x000000D8 System.Boolean ScreenManager.ScreenQueue/<>c__DisplayClass10_0::<HasScreen>b__0(ScreenManager.QueueScreenData)
extern void U3CU3Ec__DisplayClass10_0_U3CHasScreenU3Eb__0_m8FBCB5D0D3EE796D130FE326F192C9AFB26D6503 (void);
// 0x000000D9 System.Void ScreenManager.ScreenQueue/<>c::.cctor()
extern void U3CU3Ec__cctor_mAE95E2440964FEC346CA022DF40528E2887277A0 (void);
// 0x000000DA System.Void ScreenManager.ScreenQueue/<>c::.ctor()
extern void U3CU3Ec__ctor_mADC4F2E013371697287882DAE973B75F6F304709 (void);
// 0x000000DB System.Int32 ScreenManager.ScreenQueue/<>c::<Enqueue>b__11_0(ScreenManager.QueueScreenData,ScreenManager.QueueScreenData)
extern void U3CU3Ec_U3CEnqueueU3Eb__11_0_m09BE8B4AEF824E974EC0A175B7AECA43E59EB2B3 (void);
// 0x000000DC System.Void ScreenManager.ScreenQueueManager::OnEnable()
extern void ScreenQueueManager_OnEnable_m8C077130B183A96F5840F3A2CA2685F7A2FEDA12 (void);
// 0x000000DD System.Void ScreenManager.ScreenQueueManager::IsPlannedHandler(ScreenManager.Events.IsPlannedEvent)
extern void ScreenQueueManager_IsPlannedHandler_m2D42BF50AE8A6275DB79B05AA0A00B2CC7454A19 (void);
// 0x000000DE System.Void ScreenManager.ScreenQueueManager::IsOpenedOrPlannedHandler(ScreenManager.Events.IsOpenedOrPlannedEvent)
extern void ScreenQueueManager_IsOpenedOrPlannedHandler_m9A47DE6A6525F15A7F41E8BA562EDAAACFAF92BE (void);
// 0x000000DF System.Void ScreenManager.ScreenQueueManager::OnDisable()
extern void ScreenQueueManager_OnDisable_m17632B378985221A6567FBEF21070AA195D56C6F (void);
// 0x000000E0 System.Void ScreenManager.ScreenQueueManager::LateUpdate()
extern void ScreenQueueManager_LateUpdate_m0DE4FE99F769BAB2CFFC6E32AD91EB406A8A6233 (void);
// 0x000000E1 System.Void ScreenManager.ScreenQueueManager::CloseAllScreensHandler(ScreenManager.Events.CloseAllScreensEvent)
extern void ScreenQueueManager_CloseAllScreensHandler_mD8D6671458B0E34C2776D690DA40F08F6B416124 (void);
// 0x000000E2 System.Void ScreenManager.ScreenQueueManager::CloseScreenByGuidHandler(ScreenManager.Events.CloseScreenByGuidEvent)
extern void ScreenQueueManager_CloseScreenByGuidHandler_m8D335F3FBE557B4E6FD84FAD43C7B0A8C3CC007C (void);
// 0x000000E3 System.Void ScreenManager.ScreenQueueManager::CloseScreensByTypeHandler(ScreenManager.Events.CloseScreensByTypeEvent)
extern void ScreenQueueManager_CloseScreensByTypeHandler_m30383DB6A977D473962FA9C6481103D10DEAE837 (void);
// 0x000000E4 System.Void ScreenManager.ScreenQueueManager::TopScreenChangedHandler(ScreenManager.Events.TopScreenChangedEvent)
extern void ScreenQueueManager_TopScreenChangedHandler_m1CECCC702FF7C44C904C23C46A09901538EA7B24 (void);
// 0x000000E5 System.Void ScreenManager.ScreenQueueManager::EnqueueScreenHandler(ScreenManager.Events.EnqueueScreenEvent)
extern void ScreenQueueManager_EnqueueScreenHandler_m7EC8C0299DBFD19C6A75C0AEE7F27C8544BD4498 (void);
// 0x000000E6 System.Void ScreenManager.ScreenQueueManager::.ctor()
extern void ScreenQueueManager__ctor_mB247259C86727730789E4AE24136A462E4B24630 (void);
// 0x000000E7 System.Void ScreenManager.ScreenQueueManager/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mD57F1F1EB8E34A4622B4ADF66AD1B0A32986BAE5 (void);
// 0x000000E8 System.Boolean ScreenManager.ScreenQueueManager/<>c__DisplayClass4_0::<IsPlannedHandler>b__0(ScreenManager.ScreenQueue)
extern void U3CU3Ec__DisplayClass4_0_U3CIsPlannedHandlerU3Eb__0_mA828A3F6C08451980DAD8486AC564711462ADD1C (void);
// 0x000000E9 System.Void ScreenManager.ScreenQueueManager/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_mF8A4299D1E9DE9EB7648D5426BF47B2282957917 (void);
// 0x000000EA System.Boolean ScreenManager.ScreenQueueManager/<>c__DisplayClass5_0::<IsOpenedOrPlannedHandler>b__0(ScreenManager.ScreenQueue)
extern void U3CU3Ec__DisplayClass5_0_U3CIsOpenedOrPlannedHandlerU3Eb__0_m29B213A5E4746DFDBEEA9B8D279E6BD069A8ADFB (void);
// 0x000000EB System.Void ScreenManager.ScreensCache::.ctor(ScreenManager.Interfaces.IScreenLoader)
extern void ScreensCache__ctor_m0061431C15CE50798FA53E68520788E256C95EDB (void);
// 0x000000EC System.Void ScreenManager.ScreensCache::GetScreenDebugDataHandler(ScreenManager.Events.GetScreenDebugDataEvent)
extern void ScreensCache_GetScreenDebugDataHandler_m28EB667A79D946EE44C7FBB299A2BADB84B5004F (void);
// 0x000000ED System.Void ScreenManager.ScreensCache::LoadScreen(ScreenManager.Enums.ScreenId,System.Boolean)
extern void ScreensCache_LoadScreen_m49B5898300AEC4EB4E0172FD37B454EBFAA18284 (void);
// 0x000000EE ScreenManager.Interfaces.IScreen ScreenManager.ScreensCache::GetScreen(ScreenManager.Enums.ScreenId)
extern void ScreensCache_GetScreen_m20FE7995EAE7BA65CF0344F0BC54C59EB7F034DC (void);
// 0x000000EF UnityEngine.AsyncOperation ScreenManager.ScreensCache::ForceUnload(ScreenManager.Enums.ScreenId)
extern void ScreensCache_ForceUnload_m3C2F4C0BB51BA092A8FC46EA154614CEEAF8DC40 (void);
// 0x000000F0 System.Void ScreenManager.ScreensCache::Unload(ScreenManager.Enums.ScreenId)
extern void ScreensCache_Unload_mE59AA25D8FD3EE4A5D89F32CEB0122A264A55961 (void);
// 0x000000F1 System.Boolean ScreenManager.ScreensCache::IsLoaded(ScreenManager.Enums.ScreenId)
extern void ScreensCache_IsLoaded_m35A8BE449D29A00FA6647AE13C99A5746FB818AA (void);
// 0x000000F2 System.Void ScreenManager.ScreensCache::OnScreenLoaded(ScreenManager.Events.ScreenLoadedEvent)
extern void ScreensCache_OnScreenLoaded_mBF8E1CCFFF26BCF7A196D37984211B40E86A551A (void);
// 0x000000F3 System.Void ScreenManager.ScreensCache::Dispose()
extern void ScreensCache_Dispose_m407FEE1548A11742E777FF76E35E7CC92961904E (void);
// 0x000000F4 System.Void ScreenManager.ScreensCache::Log(System.String)
extern void ScreensCache_Log_mA5354E813A56B8223CE7F1EF5E572462E3978431 (void);
// 0x000000F5 System.Void ScreenManager.ScreensCache::Clear()
extern void ScreensCache_Clear_m8B702F6A66FB50BEE36B1B9C216BCC707E878091 (void);
// 0x000000F6 System.Void ScreenManager.ScreensCache::SetUnloadingHelper(ScreenManager.ScreenUnloadingHelper)
extern void ScreensCache_SetUnloadingHelper_m51F396E0BABBB50647224C28A5EE5E6B06887918 (void);
// 0x000000F7 System.Boolean ScreenManager.EnumUtils::IsOneOf(T,T[])
// 0x000000F8 System.Void ScreenManager.MonoBehaviourUtils::DoAfterRealtimeDelay(UnityEngine.MonoBehaviour,System.Action,System.Single)
extern void MonoBehaviourUtils_DoAfterRealtimeDelay_m2B1DBDAB7C0035D9647366780B568B7C9BB047C5 (void);
// 0x000000F9 System.Void ScreenManager.MonoBehaviourUtils::DoAfterDelay(UnityEngine.MonoBehaviour,System.Action,System.Single)
extern void MonoBehaviourUtils_DoAfterDelay_m4733E5ECF9E248DC3C347BF1BA892F79934C84E3 (void);
// 0x000000FA System.Void ScreenManager.MonoBehaviourUtils::DoFrameLater(UnityEngine.MonoBehaviour,System.Action)
extern void MonoBehaviourUtils_DoFrameLater_m4B99BECF3221054D617357FC37B27BB1CB253A38 (void);
// 0x000000FB System.Void ScreenManager.MonoBehaviourUtils::DoEndOfFrame(UnityEngine.MonoBehaviour,System.Action)
extern void MonoBehaviourUtils_DoEndOfFrame_m1354BFEB7CFB110896BD17E9EE09A43128E38B70 (void);
// 0x000000FC UnityEngine.Coroutine ScreenManager.MonoBehaviourUtils::Await(UnityEngine.MonoBehaviour,System.Func`1<System.Boolean>,System.Func`1<System.Boolean>,System.Action)
extern void MonoBehaviourUtils_Await_m1FBA2CAD65111E4EEEF01E021655920DD3EEE8E2 (void);
// 0x000000FD System.Collections.IEnumerator ScreenManager.MonoBehaviourUtils::Await(System.Func`1<System.Boolean>,System.Func`1<System.Boolean>,System.Action)
extern void MonoBehaviourUtils_Await_m1FDBB4F901ECAC0402EA9A6C6DEC0DBFB72F837A (void);
// 0x000000FE System.Collections.IEnumerator ScreenManager.MonoBehaviourUtils::DoAfterRealtimeDelay(System.Action,System.Single)
extern void MonoBehaviourUtils_DoAfterRealtimeDelay_m39DABED048FB261041B3419C5FE26A8A2DCC4333 (void);
// 0x000000FF System.Collections.IEnumerator ScreenManager.MonoBehaviourUtils::DoAfterDelay(System.Action,System.Single)
extern void MonoBehaviourUtils_DoAfterDelay_m207B1D5C3D2CD1565D8B0DF9954B5A77FE93EE9B (void);
// 0x00000100 System.Collections.IEnumerator ScreenManager.MonoBehaviourUtils::DoFrameLater(System.Action)
extern void MonoBehaviourUtils_DoFrameLater_m46ECF343F8E05D1E537821E6F4DB1BA9C681D897 (void);
// 0x00000101 System.Collections.IEnumerator ScreenManager.MonoBehaviourUtils::DoEndOfFrame(System.Action)
extern void MonoBehaviourUtils_DoEndOfFrame_m0232B4EF65FEEBECE36F8C65585B05AE2F64193C (void);
// 0x00000102 T ScreenManager.MonoBehaviourUtils::GetComponentAlways(UnityEngine.MonoBehaviour)
// 0x00000103 System.Void ScreenManager.MonoBehaviourUtils/<Await>d__5::.ctor(System.Int32)
extern void U3CAwaitU3Ed__5__ctor_m0A71D67DC73B7A8D5F47730245499C222A158079 (void);
// 0x00000104 System.Void ScreenManager.MonoBehaviourUtils/<Await>d__5::System.IDisposable.Dispose()
extern void U3CAwaitU3Ed__5_System_IDisposable_Dispose_mC62C090CB0DBCC65AA61F8625C23595D3893994E (void);
// 0x00000105 System.Boolean ScreenManager.MonoBehaviourUtils/<Await>d__5::MoveNext()
extern void U3CAwaitU3Ed__5_MoveNext_m7BF81D24C94166CBF62D7C343C66A9973C49F2F7 (void);
// 0x00000106 System.Object ScreenManager.MonoBehaviourUtils/<Await>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CAwaitU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC18D788C30A010D1FEF23DA5803EBC0C60A2DBAD (void);
// 0x00000107 System.Void ScreenManager.MonoBehaviourUtils/<Await>d__5::System.Collections.IEnumerator.Reset()
extern void U3CAwaitU3Ed__5_System_Collections_IEnumerator_Reset_m94D27736561FD83609B8A5261C61CD66ADDA8F91 (void);
// 0x00000108 System.Object ScreenManager.MonoBehaviourUtils/<Await>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CAwaitU3Ed__5_System_Collections_IEnumerator_get_Current_mC5E6C419BF8964A681366D39B79F3066E9336127 (void);
// 0x00000109 System.Void ScreenManager.MonoBehaviourUtils/<DoAfterRealtimeDelay>d__6::.ctor(System.Int32)
extern void U3CDoAfterRealtimeDelayU3Ed__6__ctor_m6AEB2EBFA522497EA78062FCBFEBD9B79B4931E0 (void);
// 0x0000010A System.Void ScreenManager.MonoBehaviourUtils/<DoAfterRealtimeDelay>d__6::System.IDisposable.Dispose()
extern void U3CDoAfterRealtimeDelayU3Ed__6_System_IDisposable_Dispose_m9BF8ABD9391D5946FD06755D9032AFC7813281C0 (void);
// 0x0000010B System.Boolean ScreenManager.MonoBehaviourUtils/<DoAfterRealtimeDelay>d__6::MoveNext()
extern void U3CDoAfterRealtimeDelayU3Ed__6_MoveNext_m982ED93D6DB73A3A46252CE3BF7DBA6A8084455E (void);
// 0x0000010C System.Object ScreenManager.MonoBehaviourUtils/<DoAfterRealtimeDelay>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDoAfterRealtimeDelayU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1E0CE0FC4ADF97DF13B08C69866C118C5C5B1CC (void);
// 0x0000010D System.Void ScreenManager.MonoBehaviourUtils/<DoAfterRealtimeDelay>d__6::System.Collections.IEnumerator.Reset()
extern void U3CDoAfterRealtimeDelayU3Ed__6_System_Collections_IEnumerator_Reset_m78D952E3C00931703E0701176834269FB788482B (void);
// 0x0000010E System.Object ScreenManager.MonoBehaviourUtils/<DoAfterRealtimeDelay>d__6::System.Collections.IEnumerator.get_Current()
extern void U3CDoAfterRealtimeDelayU3Ed__6_System_Collections_IEnumerator_get_Current_m7AD443CE5642C621FD3715FF76CA9D33B0C5DC9D (void);
// 0x0000010F System.Void ScreenManager.MonoBehaviourUtils/<DoAfterDelay>d__7::.ctor(System.Int32)
extern void U3CDoAfterDelayU3Ed__7__ctor_m83621931A86FC92D81FC6CF2DD4B8FEF0EAA3CF5 (void);
// 0x00000110 System.Void ScreenManager.MonoBehaviourUtils/<DoAfterDelay>d__7::System.IDisposable.Dispose()
extern void U3CDoAfterDelayU3Ed__7_System_IDisposable_Dispose_m3FA458DB1F674811361CBA1E013136E01CBA2FA7 (void);
// 0x00000111 System.Boolean ScreenManager.MonoBehaviourUtils/<DoAfterDelay>d__7::MoveNext()
extern void U3CDoAfterDelayU3Ed__7_MoveNext_m70089C17577D0C62F569C27C5A3708A235036366 (void);
// 0x00000112 System.Object ScreenManager.MonoBehaviourUtils/<DoAfterDelay>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDoAfterDelayU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m319F5B91AAA739A48877BA1E8FCC17E199335BAF (void);
// 0x00000113 System.Void ScreenManager.MonoBehaviourUtils/<DoAfterDelay>d__7::System.Collections.IEnumerator.Reset()
extern void U3CDoAfterDelayU3Ed__7_System_Collections_IEnumerator_Reset_mC185131F24FC01600D6FAD462C802EDD42F36CBE (void);
// 0x00000114 System.Object ScreenManager.MonoBehaviourUtils/<DoAfterDelay>d__7::System.Collections.IEnumerator.get_Current()
extern void U3CDoAfterDelayU3Ed__7_System_Collections_IEnumerator_get_Current_mA840F55AAE4D2A91E21D59EFA01C5398C13E33DA (void);
// 0x00000115 System.Void ScreenManager.MonoBehaviourUtils/<DoFrameLater>d__8::.ctor(System.Int32)
extern void U3CDoFrameLaterU3Ed__8__ctor_mB7A5F388BD00B4DA3183FC410451C000ADD7AE63 (void);
// 0x00000116 System.Void ScreenManager.MonoBehaviourUtils/<DoFrameLater>d__8::System.IDisposable.Dispose()
extern void U3CDoFrameLaterU3Ed__8_System_IDisposable_Dispose_mA4869CC0727DCDBEB6C4DC7D8CC6275DC669D35A (void);
// 0x00000117 System.Boolean ScreenManager.MonoBehaviourUtils/<DoFrameLater>d__8::MoveNext()
extern void U3CDoFrameLaterU3Ed__8_MoveNext_m7B2D40C46B567F63DA175B69E2D2CB15AC5622B7 (void);
// 0x00000118 System.Object ScreenManager.MonoBehaviourUtils/<DoFrameLater>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDoFrameLaterU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mACFA12BA316A62EA218B4910AD20F664A18609B6 (void);
// 0x00000119 System.Void ScreenManager.MonoBehaviourUtils/<DoFrameLater>d__8::System.Collections.IEnumerator.Reset()
extern void U3CDoFrameLaterU3Ed__8_System_Collections_IEnumerator_Reset_m2FAF59FDBE710454CEF44F0C633970F1CD737C80 (void);
// 0x0000011A System.Object ScreenManager.MonoBehaviourUtils/<DoFrameLater>d__8::System.Collections.IEnumerator.get_Current()
extern void U3CDoFrameLaterU3Ed__8_System_Collections_IEnumerator_get_Current_m44F22A405BEB35912667D4362146765B18D9576F (void);
// 0x0000011B System.Void ScreenManager.MonoBehaviourUtils/<DoEndOfFrame>d__9::.ctor(System.Int32)
extern void U3CDoEndOfFrameU3Ed__9__ctor_m90A782DE4002B2E12C9C28EFB5432A67B4707DBD (void);
// 0x0000011C System.Void ScreenManager.MonoBehaviourUtils/<DoEndOfFrame>d__9::System.IDisposable.Dispose()
extern void U3CDoEndOfFrameU3Ed__9_System_IDisposable_Dispose_m6977D746A694515DD15F33FE869CB7504F4F2EF0 (void);
// 0x0000011D System.Boolean ScreenManager.MonoBehaviourUtils/<DoEndOfFrame>d__9::MoveNext()
extern void U3CDoEndOfFrameU3Ed__9_MoveNext_m385056A3444C38B2E1AE98A388B8F5E74D08A13B (void);
// 0x0000011E System.Object ScreenManager.MonoBehaviourUtils/<DoEndOfFrame>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CDoEndOfFrameU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m61FFBC910EA7395B3E6736D418660235568E63E2 (void);
// 0x0000011F System.Void ScreenManager.MonoBehaviourUtils/<DoEndOfFrame>d__9::System.Collections.IEnumerator.Reset()
extern void U3CDoEndOfFrameU3Ed__9_System_Collections_IEnumerator_Reset_m7E96D6CE7B4D950D792E2904127BF22FD4F0AED5 (void);
// 0x00000120 System.Object ScreenManager.MonoBehaviourUtils/<DoEndOfFrame>d__9::System.Collections.IEnumerator.get_Current()
extern void U3CDoEndOfFrameU3Ed__9_System_Collections_IEnumerator_get_Current_m7279BB43802C04A05F60F2563183F6C2D7A74932 (void);
// 0x00000121 System.Void ScreenManager.ObjectPool`1::.ctor(System.Action`1<T>,System.Int32)
// 0x00000122 T ScreenManager.ObjectPool`1::Get()
// 0x00000123 System.Void ScreenManager.ObjectPool`1::Release(T)
// 0x00000124 UnityEngine.Coroutine ScreenManager.Extensions.CoroutineUtils::StartThrowingTimeLimitedCoroutine(UnityEngine.MonoBehaviour,System.Collections.IEnumerator,System.Action`1<System.Exception>,System.Single)
extern void CoroutineUtils_StartThrowingTimeLimitedCoroutine_m4F135CDC921F3B21CA11B8FFDDA6E78788B45F14 (void);
// 0x00000125 System.Collections.IEnumerator ScreenManager.Extensions.CoroutineUtils::RunThrowingTimeLimitedIterator(System.Collections.IEnumerator,System.Action`1<System.Exception>,System.Single)
extern void CoroutineUtils_RunThrowingTimeLimitedIterator_m289A097E685386FD55C56294E2F28EC5E789AFF8 (void);
// 0x00000126 System.Void ScreenManager.Extensions.CoroutineUtils/<RunThrowingTimeLimitedIterator>d__1::.ctor(System.Int32)
extern void U3CRunThrowingTimeLimitedIteratorU3Ed__1__ctor_mD09FBE3E997AE57A3A304371A569537C88129B0C (void);
// 0x00000127 System.Void ScreenManager.Extensions.CoroutineUtils/<RunThrowingTimeLimitedIterator>d__1::System.IDisposable.Dispose()
extern void U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_IDisposable_Dispose_m6889F392F74736BADA2865F5B1A510B15076B120 (void);
// 0x00000128 System.Boolean ScreenManager.Extensions.CoroutineUtils/<RunThrowingTimeLimitedIterator>d__1::MoveNext()
extern void U3CRunThrowingTimeLimitedIteratorU3Ed__1_MoveNext_m75666A881D36564F2F6B7C8F379C271471A731A7 (void);
// 0x00000129 System.Object ScreenManager.Extensions.CoroutineUtils/<RunThrowingTimeLimitedIterator>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern void U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE568A369900D49CBF39216E1C2A736460466B122 (void);
// 0x0000012A System.Void ScreenManager.Extensions.CoroutineUtils/<RunThrowingTimeLimitedIterator>d__1::System.Collections.IEnumerator.Reset()
extern void U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_Collections_IEnumerator_Reset_mC606507F7F931DCA12C7D850274951F6AE8E7C78 (void);
// 0x0000012B System.Object ScreenManager.Extensions.CoroutineUtils/<RunThrowingTimeLimitedIterator>d__1::System.Collections.IEnumerator.get_Current()
extern void U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_Collections_IEnumerator_get_Current_mDC5272A81D52D9B08DCD46247ED75896251A29E3 (void);
// 0x0000012C System.Object ScreenManager.Extensions.ScreenContext::Wrap(System.Object[])
extern void ScreenContext_Wrap_m939FE135B22A1E13FB0D995EDD6E68BBF02C5CB7 (void);
// 0x0000012D T ScreenManager.Extensions.ScreenContext::Get(System.Object)
// 0x0000012E ScreenManager.Events.BackToPreviousScreenEvent ScreenManager.Events.BackToPreviousScreenEvent::Create(ScreenManager.Enums.ScreenId)
extern void BackToPreviousScreenEvent_Create_m7ADE49E864241DA006F9FB8091F499FC0013603D (void);
// 0x0000012F ScreenManager.Events.BackToPreviousScreenEvent ScreenManager.Events.BackToPreviousScreenEvent::Create()
extern void BackToPreviousScreenEvent_Create_m43E90F97C37BAA4A03949C79B319E388CBA04686 (void);
// 0x00000130 System.Void ScreenManager.Events.BackToPreviousScreenEvent::.ctor()
extern void BackToPreviousScreenEvent__ctor_m55545386C75189CD5DD4DD2DE3462B89E50D8EB1 (void);
// 0x00000131 ScreenManager.Events.CloseAllScreensEvent ScreenManager.Events.CloseAllScreensEvent::Create(System.Boolean,System.Boolean)
extern void CloseAllScreensEvent_Create_m969EAA755E5DF22406837232DA2127300C701FA3 (void);
// 0x00000132 System.Void ScreenManager.Events.CloseAllScreensEvent::.ctor()
extern void CloseAllScreensEvent__ctor_mEC116E9CD8A7CB04231385486822D3517F3386FA (void);
// 0x00000133 ScreenManager.Events.CloseScreenByGuidEvent ScreenManager.Events.CloseScreenByGuidEvent::Create(System.Guid,System.Boolean)
extern void CloseScreenByGuidEvent_Create_mB7E84F21058CE1730E5B739DD73376C8A713704E (void);
// 0x00000134 System.Void ScreenManager.Events.CloseScreenByGuidEvent::.ctor()
extern void CloseScreenByGuidEvent__ctor_mFD43E348C1E6DD8B603C6DED380CB24ACB8E0C74 (void);
// 0x00000135 ScreenManager.Events.CloseScreensByTypeEvent ScreenManager.Events.CloseScreensByTypeEvent::Create(ScreenManager.Enums.ScreenId,System.Boolean)
extern void CloseScreensByTypeEvent_Create_m18E5887E4F88EB0C3737B6ECEA8F410C3D951AE8 (void);
// 0x00000136 System.Void ScreenManager.Events.CloseScreensByTypeEvent::.ctor()
extern void CloseScreensByTypeEvent__ctor_m8AF7FA483196D1D26DE80628D30C91684CA973D6 (void);
// 0x00000137 System.Void ScreenManager.Events.ClosingAllScreensEvent::.ctor()
extern void ClosingAllScreensEvent__ctor_m07FC916CD6DC644008109FBC5C0440D234852A8D (void);
// 0x00000138 ScreenManager.Events.EnqueueScreenEvent ScreenManager.Events.EnqueueScreenEvent::Create(ScreenManager.Enums.ScreenId,System.Boolean,System.Boolean,System.Boolean)
extern void EnqueueScreenEvent_Create_mA69EACFAFE13345CA8CB4FD10D651CD31C2A58D6 (void);
// 0x00000139 ScreenManager.Events.EnqueueScreenEvent ScreenManager.Events.EnqueueScreenEvent::SetQueueParentType(ScreenManager.Enums.ScreenId)
extern void EnqueueScreenEvent_SetQueueParentType_mED9830780F87BA0A975CC579095648A96064EED7 (void);
// 0x0000013A ScreenManager.Events.EnqueueScreenEvent ScreenManager.Events.EnqueueScreenEvent::AddScreenContext(System.Object[])
extern void EnqueueScreenEvent_AddScreenContext_m7338DD973D722D89DBD7ECB1C442FD48B2AAD9D2 (void);
// 0x0000013B ScreenManager.Events.EnqueueScreenEvent ScreenManager.Events.EnqueueScreenEvent::AddShowConditions(ScreenManager.Conditions.IScreenCondition[])
extern void EnqueueScreenEvent_AddShowConditions_m9F2A04AC767AF91838963711AB95423BC3C9DD62 (void);
// 0x0000013C ScreenManager.Events.EnqueueScreenEvent ScreenManager.Events.EnqueueScreenEvent::AddExpireConditions(ScreenManager.Conditions.IScreenCondition[])
extern void EnqueueScreenEvent_AddExpireConditions_m1CE7310B0B57E23C3F7896D3044FC84964AAA64E (void);
// 0x0000013D ScreenManager.Conditions.IScreenCondition ScreenManager.Events.EnqueueScreenEvent::GetConditions(ScreenManager.Conditions.IScreenCondition[])
extern void EnqueueScreenEvent_GetConditions_mE44B33ABDCFD74515CDCD33D388435048242A1AB (void);
// 0x0000013E System.Void ScreenManager.Events.EnqueueScreenEvent::.ctor()
extern void EnqueueScreenEvent__ctor_mB593F1DDA68C587233764733C119EE5E24C8328A (void);
// 0x0000013F System.Void ScreenManager.Events.EnqueueScreenEvent/<>c::.cctor()
extern void U3CU3Ec__cctor_m94C58A30E3F7490E5744D09F82939F70C0DFD843 (void);
// 0x00000140 System.Void ScreenManager.Events.EnqueueScreenEvent/<>c::.ctor()
extern void U3CU3Ec__ctor_m0E98CAB30E42866370BC57367796189CA07AC678 (void);
// 0x00000141 System.Boolean ScreenManager.Events.EnqueueScreenEvent/<>c::<GetConditions>b__7_0(ScreenManager.Conditions.IScreenCondition)
extern void U3CU3Ec_U3CGetConditionsU3Eb__7_0_mD14A0BD2CE4F1E595B01E1EAEC8F4EC8A4FE5BCB (void);
// 0x00000142 ScreenManager.Enums.ScreenId ScreenManager.Events.ScreenManagerUtils::GetFirstScreen(System.Predicate`1<ScreenManager.ScreenData>)
extern void ScreenManagerUtils_GetFirstScreen_mE0A345DD5B03C64F8D5E212515EED8D4BCE8CA6C (void);
// 0x00000143 System.Collections.Generic.List`1<ScreenManager.ScreenData> ScreenManager.Events.GetOpenedScreensEvent::Invoke()
extern void GetOpenedScreensEvent_Invoke_m1F2507EBC2116DB98D526627E1A3B824739A139A (void);
// 0x00000144 System.Void ScreenManager.Events.GetOpenedScreensEvent::.ctor()
extern void GetOpenedScreensEvent__ctor_mBA203C4AC1ECA516351A3223D07B5AE08944D82C (void);
// 0x00000145 System.Void ScreenManager.Events.GetScreenDebugDataEvent::.ctor()
extern void GetScreenDebugDataEvent__ctor_m95086470096C0125C4E23DA7129DAE946B8613BA (void);
// 0x00000146 System.Void ScreenManager.Events.GetScreenManagerStateEvent::.ctor()
extern void GetScreenManagerStateEvent__ctor_mD2440CD049645F39FF4A356AFF32AAFD2B287DA8 (void);
// 0x00000147 System.Void ScreenManager.Events.GetScreenSettingsProviderEvent::.ctor()
extern void GetScreenSettingsProviderEvent__ctor_m7DA7E20A1F531D3CDF920DCA7DF71098DEFE3F75 (void);
// 0x00000148 System.Void ScreenManager.Events.GetTopScreenEvent::.ctor()
extern void GetTopScreenEvent__ctor_m455830EE3F96DBD12F15967554F853CDD0238A8E (void);
// 0x00000149 System.Boolean ScreenManager.Events.IsOpenedOrPlannedEvent::Check(ScreenManager.Enums.ScreenId)
extern void IsOpenedOrPlannedEvent_Check_m0B67DDDCAD4CA19995D7D10686635BBFC30F499D (void);
// 0x0000014A System.Void ScreenManager.Events.IsOpenedOrPlannedEvent::.ctor()
extern void IsOpenedOrPlannedEvent__ctor_m513D8E882C47A40B365FB8A57376B2FDBA715BE7 (void);
// 0x0000014B System.Boolean ScreenManager.Events.IsPlannedEvent::Check(ScreenManager.Enums.ScreenId)
extern void IsPlannedEvent_Check_mB5876411D4682EF13DBC66FE67CAD0A592545E2E (void);
// 0x0000014C System.Void ScreenManager.Events.IsPlannedEvent::.ctor()
extern void IsPlannedEvent__ctor_mB7FEA2B439165A69A1261E6C1003C4D2F22B822B (void);
// 0x0000014D System.Boolean ScreenManager.Events.IsScreenOpenedEvent::Check(ScreenManager.Enums.ScreenId)
extern void IsScreenOpenedEvent_Check_m39720706E35914C83C5ABAB122F3CF8B119AEEDB (void);
// 0x0000014E System.Void ScreenManager.Events.IsScreenOpenedEvent::.ctor()
extern void IsScreenOpenedEvent__ctor_mA2A6E3A54140D98D92B5E307915B06E0A12C7BBA (void);
// 0x0000014F System.Void ScreenManager.Events.LockDailyWidgetEvent::.ctor()
extern void LockDailyWidgetEvent__ctor_mF10A560B8D6542BB8F5FD19CFF75878AC861041A (void);
// 0x00000150 ScreenManager.ScreenData ScreenManager.Events.OpenScreenEvent::get_ScreenData()
extern void OpenScreenEvent_get_ScreenData_m372C3F46F87B8EAF016B088DDBA15D41F9A62782 (void);
// 0x00000151 System.Void ScreenManager.Events.OpenScreenEvent::set_ScreenData(ScreenManager.ScreenData)
extern void OpenScreenEvent_set_ScreenData_m692ED99722CFC7045E4D012589950525BE508E63 (void);
// 0x00000152 ScreenManager.Events.OpenScreenEvent ScreenManager.Events.OpenScreenEvent::Create(ScreenManager.ScreenData)
extern void OpenScreenEvent_Create_m9AEED4EA6A3A65EB2720616B8A18545B837A8C74 (void);
// 0x00000153 ScreenManager.Events.OpenScreenEvent ScreenManager.Events.OpenScreenEvent::Create(ScreenManager.Enums.ScreenId,System.Boolean,System.Boolean,System.Object)
extern void OpenScreenEvent_Create_m539A7BDD7B69B945C269E48C4FA7AC749FB506BE (void);
// 0x00000154 ScreenManager.Events.OpenScreenEvent ScreenManager.Events.OpenScreenEvent::AddScreenContext(System.Object[])
extern void OpenScreenEvent_AddScreenContext_mB5D7C1A4D59139070B0A8EC6E7D26C35F856468B (void);
// 0x00000155 System.Void ScreenManager.Events.OpenScreenEvent::.ctor()
extern void OpenScreenEvent__ctor_m80B5C14C39DBC90239B98E1A32C4EC19BE3272DC (void);
// 0x00000156 ScreenManager.ScreenData ScreenManager.Events.ScreenClosedEvent::get_ScreenData()
extern void ScreenClosedEvent_get_ScreenData_m1F683725CDB5114F2A124C5FAD89F8DAF61911E6 (void);
// 0x00000157 System.Void ScreenManager.Events.ScreenClosedEvent::set_ScreenData(ScreenManager.ScreenData)
extern void ScreenClosedEvent_set_ScreenData_mC67AE1F6422961B3FF21F7741DC338A4E51AEEFB (void);
// 0x00000158 ScreenManager.Events.ScreenClosedEvent ScreenManager.Events.ScreenClosedEvent::Create(ScreenManager.ScreenData)
extern void ScreenClosedEvent_Create_mE16FBC09AFD003F94AAB1D17AD7D0E55616431F0 (void);
// 0x00000159 System.Void ScreenManager.Events.ScreenClosedEvent::.ctor()
extern void ScreenClosedEvent__ctor_m19FBEE5CD2883AC70B47D317D99392E2F0C777C6 (void);
// 0x0000015A ScreenManager.ScreenData ScreenManager.Events.ScreenHiddenEvent::get_ScreenData()
extern void ScreenHiddenEvent_get_ScreenData_m3760291DD3BA80E66577E950CD73123845ABF7F9 (void);
// 0x0000015B System.Void ScreenManager.Events.ScreenHiddenEvent::set_ScreenData(ScreenManager.ScreenData)
extern void ScreenHiddenEvent_set_ScreenData_m2D35ADE24DEA7E7999330A030C22AAED0742D646 (void);
// 0x0000015C ScreenManager.Events.ScreenHiddenEvent ScreenManager.Events.ScreenHiddenEvent::Create(ScreenManager.ScreenData)
extern void ScreenHiddenEvent_Create_m400241C374FC92B0534DF207B987C3D8B7880F7C (void);
// 0x0000015D System.Void ScreenManager.Events.ScreenHiddenEvent::.ctor()
extern void ScreenHiddenEvent__ctor_m99CB2C9F0D041143F715B51CAFE96017A6DC27DA (void);
// 0x0000015E ScreenManager.Interfaces.IScreen ScreenManager.Events.ScreenLoadedEvent::get_Screen()
extern void ScreenLoadedEvent_get_Screen_mF863599747D4386DFB013ACE305965DEDAE616D3 (void);
// 0x0000015F System.Void ScreenManager.Events.ScreenLoadedEvent::set_Screen(ScreenManager.Interfaces.IScreen)
extern void ScreenLoadedEvent_set_Screen_mB07919DA005206EB836DDED65AF20B1DF52E6D13 (void);
// 0x00000160 ScreenManager.Enums.ScreenId ScreenManager.Events.ScreenLoadedEvent::get_Id()
extern void ScreenLoadedEvent_get_Id_mD7448C4D0D9EF7FE1F48054104AE721FC432FA78 (void);
// 0x00000161 System.Void ScreenManager.Events.ScreenLoadedEvent::set_Id(ScreenManager.Enums.ScreenId)
extern void ScreenLoadedEvent_set_Id_mA26CB8FA940B0E9F29255BF04B4642E0597CB499 (void);
// 0x00000162 ScreenManager.Events.ScreenLoadedEvent ScreenManager.Events.ScreenLoadedEvent::Create(ScreenManager.Interfaces.IScreen,ScreenManager.Enums.ScreenId)
extern void ScreenLoadedEvent_Create_m6104FB04855A9A20BCED12123B7A81817F97BEC7 (void);
// 0x00000163 System.Void ScreenManager.Events.ScreenLoadedEvent::.ctor()
extern void ScreenLoadedEvent__ctor_mCC7B6FAB16C016F99EA8EEC54603DF5247C172C7 (void);
// 0x00000164 ScreenManager.ScreenData ScreenManager.Events.ScreenOpeningEvent::get_ScreenData()
extern void ScreenOpeningEvent_get_ScreenData_m0FC4B60404FDFB58CCF75838E01AFF75C681C447 (void);
// 0x00000165 System.Void ScreenManager.Events.ScreenOpeningEvent::set_ScreenData(ScreenManager.ScreenData)
extern void ScreenOpeningEvent_set_ScreenData_mB42773ED35CC805ECE9C9E65161AEC25080BF011 (void);
// 0x00000166 ScreenManager.Events.ScreenOpeningEvent ScreenManager.Events.ScreenOpeningEvent::Create(ScreenManager.ScreenData)
extern void ScreenOpeningEvent_Create_mD160A27AC99EB6FD0F7A4D786B06A66774A621AB (void);
// 0x00000167 System.Void ScreenManager.Events.ScreenOpeningEvent::.ctor()
extern void ScreenOpeningEvent__ctor_mAE20AC32C6CA9F33100206403FCB8A2F88EFD196 (void);
// 0x00000168 System.Void ScreenManager.Events.ScreenSetActiveException::.ctor(ScreenManager.ScreenData,System.Exception)
extern void ScreenSetActiveException__ctor_mDCE1AB73A749C94CEC18F6167844C0FC11A87E0F (void);
// 0x00000169 ScreenManager.ScreenData ScreenManager.Events.ScreenUnloadedEvent::get_ScreenData()
extern void ScreenUnloadedEvent_get_ScreenData_m5D195FFDBC8582334C4B2183CB702B84E54956E3 (void);
// 0x0000016A System.Void ScreenManager.Events.ScreenUnloadedEvent::set_ScreenData(ScreenManager.ScreenData)
extern void ScreenUnloadedEvent_set_ScreenData_m3959390B55F3A4EAC527A54CD881322E688D00D9 (void);
// 0x0000016B ScreenManager.Events.ScreenUnloadedEvent ScreenManager.Events.ScreenUnloadedEvent::Create(ScreenManager.ScreenData)
extern void ScreenUnloadedEvent_Create_m3C160EE9BA908EAA872B9458FED340E8059748D2 (void);
// 0x0000016C System.Void ScreenManager.Events.ScreenUnloadedEvent::.ctor()
extern void ScreenUnloadedEvent__ctor_mAE6CDBCEF3E1BBD5E915D3FF579418B67229B31C (void);
// 0x0000016D ScreenManager.Events.TopScreenChangedEvent ScreenManager.Events.TopScreenChangedEvent::Create(ScreenManager.Enums.ScreenId)
extern void TopScreenChangedEvent_Create_mA252EDF01A93997928400EBD48ED9101563BDDF3 (void);
// 0x0000016E System.Void ScreenManager.Events.TopScreenChangedEvent::.ctor()
extern void TopScreenChangedEvent__ctor_mD8DF87A1B5C7A97B4E4F3E42ED2A0EA3D9CA596E (void);
// 0x0000016F System.Void ScreenManager.Events.UpdateDailyMissionsBadge::.ctor()
extern void UpdateDailyMissionsBadge__ctor_mE042DC42200F408F338E9A1E553379E164F0A785 (void);
// 0x00000170 System.Boolean ScreenManager.Events.WaitWhileScreenOpenedOrPlanned::get_keepWaiting()
extern void WaitWhileScreenOpenedOrPlanned_get_keepWaiting_m1F1EEC1124A933B7DCB8EB8D5DAAED6A6EFAF4FB (void);
// 0x00000171 System.Void ScreenManager.Events.WaitWhileScreenOpenedOrPlanned::.ctor(ScreenManager.Enums.ScreenId)
extern void WaitWhileScreenOpenedOrPlanned__ctor_m3961287A579768C06BCB8B2D3E4E30B767E9EAF5 (void);
// 0x00000172 System.Void ScreenManager.Events.WaitWhileScreenOpenedOrPlanned::Finalize()
extern void WaitWhileScreenOpenedOrPlanned_Finalize_m56E59345711FDDE045BF23581E5F590D304C253E (void);
// 0x00000173 System.Void ScreenManager.Events.WaitWhileScreenOpenedOrPlanned::OnScreenClosed(ScreenManager.Events.ScreenClosedEvent)
extern void WaitWhileScreenOpenedOrPlanned_OnScreenClosed_mD122FB8F434C1B0515C3162EFCC968D28CDA215A (void);
// 0x00000174 System.Void ScreenManager.Events.WaitWhileScreenOpenedOrPlanned::Dispose()
extern void WaitWhileScreenOpenedOrPlanned_Dispose_mD032E7936B040E93A14DAF1B4F7781C35014FD55 (void);
// 0x00000175 System.Collections.IEnumerator ScreenManager.Interfaces.IAppearingScreenBehaviour::SetActiveAsync(System.Boolean)
// 0x00000176 MicroRx.Core.IObservableSubject`1<ScreenManager.Interfaces.ScreenState> ScreenManager.Interfaces.IScreen::get_State()
// 0x00000177 ScreenManager.Enums.ScreenId ScreenManager.Interfaces.IScreen::get_Id()
// 0x00000178 System.Guid ScreenManager.Interfaces.IScreen::get_Guid()
// 0x00000179 System.Void ScreenManager.Interfaces.IScreen::set_Guid(System.Guid)
// 0x0000017A System.Void ScreenManager.Interfaces.IScreen::Initialize(System.Object)
// 0x0000017B System.Void ScreenManager.Interfaces.IScreen::SetDrawingOrder(System.Int32)
// 0x0000017C System.Void ScreenManager.Interfaces.IScreenComponent::Initialize(System.Object)
// 0x0000017D System.Void ScreenManager.Interfaces.IScreenIdSetter::set_Id(ScreenManager.Enums.ScreenId)
// 0x0000017E System.Void ScreenManager.Interfaces.IScreenLoader::StartLoad(ScreenManager.Enums.ScreenId,System.Boolean)
// 0x0000017F UnityEngine.AsyncOperation ScreenManager.Interfaces.IScreenLoader::Unload(ScreenManager.Interfaces.IScreen)
// 0x00000180 System.Void ScreenManager.Interfaces.IScreenManager::OpenScreen(ScreenManager.ScreenData)
// 0x00000181 System.Void ScreenManager.Interfaces.IScreenManager::BackToPrevious(ScreenManager.Enums.ScreenId)
// 0x00000182 System.Boolean ScreenManager.Interfaces.IScreenManager::IsOpened(ScreenManager.Enums.ScreenId)
// 0x00000183 System.String ScreenManager.Interfaces.IScreenSettings::get_Path()
// 0x00000184 System.String ScreenManager.Interfaces.IScreenSettings::get_Name()
// 0x00000185 ScreenManager.Interfaces.IScreenSettings ScreenManager.Interfaces.IScreenSettingsProvider::Get(ScreenManager.Enums.ScreenId)
// 0x00000186 System.Void ScreenManager.Enums.ScreenId::.ctor(System.Int32)
extern void ScreenId__ctor_mE6C808BE1240BC3A821BD80FF5FCBB796C3C6680 (void);
// 0x00000187 System.String ScreenManager.Enums.ScreenId::ToString()
extern void ScreenId_ToString_m67C7FD82A41F23E6F7C827C67C98541885A95151 (void);
// 0x00000188 System.Int32 ScreenManager.Enums.ScreenId::CompareTo(ScreenManager.Enums.ScreenId)
extern void ScreenId_CompareTo_mC7732AC3AFAC27EE7760DDA6D503EFE0620B3326 (void);
// 0x00000189 System.Boolean ScreenManager.Enums.ScreenId::Equals(System.Object)
extern void ScreenId_Equals_m952B50F739671C912FE81407FA5080EE7B20BCE2 (void);
// 0x0000018A System.Int32 ScreenManager.Enums.ScreenId::GetHashCode()
extern void ScreenId_GetHashCode_m27E9BDD56BB23753CEE5BA0D299738043024E51D (void);
// 0x0000018B System.Boolean ScreenManager.Enums.ScreenId::op_Equality(ScreenManager.Enums.ScreenId,ScreenManager.Enums.ScreenId)
extern void ScreenId_op_Equality_mBDFF32C3DFCDB15C00869DC6210E45BE74A84B1C (void);
// 0x0000018C System.Boolean ScreenManager.Enums.ScreenId::op_Inequality(ScreenManager.Enums.ScreenId,ScreenManager.Enums.ScreenId)
extern void ScreenId_op_Inequality_mFCFC753EF5CC022B168276C34C25C5E2EA56D943 (void);
// 0x0000018D System.Int32 ScreenManager.Enums.ScreenId::op_Implicit(ScreenManager.Enums.ScreenId)
extern void ScreenId_op_Implicit_mC9E7EFA4EA0E6153D1F53B7BD3711620DDC990F9 (void);
// 0x0000018E ScreenManager.Enums.ScreenId ScreenManager.Enums.ScreenId::op_Implicit(System.Int32)
extern void ScreenId_op_Implicit_m89CC3F6CF36E35E1FE80DFB39069A59A1A543323 (void);
// 0x0000018F System.Int32 ScreenManager.Enums.ScreenId::CompareTo(System.Object)
extern void ScreenId_CompareTo_m0AE5A4E830BDBCA4F166DE269BF925227A208A58 (void);
// 0x00000190 System.Void ScreenManager.Enums.ScreenId::.cctor()
extern void ScreenId__cctor_m92A378D990E5CFBADD6A176FC3E4C67D5613C5FC (void);
// 0x00000191 System.Void ScreenManager.Conditions.CompositeScreenCondition::.ctor(ScreenManager.Conditions.IScreenCondition[])
extern void CompositeScreenCondition__ctor_m0777ACDAB55D13FE8D8F3DA39C4A0310F93C2D08 (void);
// 0x00000192 System.Boolean ScreenManager.Conditions.CompositeScreenCondition::IsSatisfied()
extern void CompositeScreenCondition_IsSatisfied_mF73C824D4A26E147F66554900C724B9B5CF51112 (void);
// 0x00000193 System.Void ScreenManager.Conditions.CompositeScreenCondition::Dispose()
extern void CompositeScreenCondition_Dispose_m87CE977A832C4BA88C90E937F0683A48D1D3CE58 (void);
// 0x00000194 System.Void ScreenManager.Conditions.CompositeScreenCondition/<>c::.cctor()
extern void U3CU3Ec__cctor_m143507732DE95879B6EDD007A6000CE5A1372AC6 (void);
// 0x00000195 System.Void ScreenManager.Conditions.CompositeScreenCondition/<>c::.ctor()
extern void U3CU3Ec__ctor_m08916061FB9EB4DFFD7604465A0F56E30D254540 (void);
// 0x00000196 System.Boolean ScreenManager.Conditions.CompositeScreenCondition/<>c::<IsSatisfied>b__2_0(ScreenManager.Conditions.IScreenCondition)
extern void U3CU3Ec_U3CIsSatisfiedU3Eb__2_0_m406CA24CA586A2D3343A22D522ED8E39F5E88A23 (void);
// 0x00000197 System.Void ScreenManager.Conditions.DelegateScreenCondition::.ctor(System.Func`1<System.Boolean>)
extern void DelegateScreenCondition__ctor_m2010B5A229F466EC45B9FAAACEEA5CE40FFEA5B2 (void);
// 0x00000198 System.Void ScreenManager.Conditions.DelegateScreenCondition::Dispose()
extern void DelegateScreenCondition_Dispose_m4EBAA9D8430C5086399466B9851315CA79F9E2F4 (void);
// 0x00000199 System.Boolean ScreenManager.Conditions.DelegateScreenCondition::IsSatisfied()
extern void DelegateScreenCondition_IsSatisfied_mE61895F54FFE80FF3149133B514F0A1F064BF67F (void);
// 0x0000019A System.Void ScreenManager.Conditions.ExpireScreenCondition::.ctor(System.DateTime)
extern void ExpireScreenCondition__ctor_m4EEA9DDEDCCCCC324AD08B03341DBF8BD062C04C (void);
// 0x0000019B System.Boolean ScreenManager.Conditions.ExpireScreenCondition::IsSatisfied()
extern void ExpireScreenCondition_IsSatisfied_mDF251AA0EF4E8DAB7A67017078C9DC87625E2632 (void);
// 0x0000019C System.Void ScreenManager.Conditions.ExpireScreenCondition::Dispose()
extern void ExpireScreenCondition_Dispose_m290B754DE026AF37521C8AA79243849F7FE45D0B (void);
// 0x0000019D System.Void ScreenManager.Conditions.InvertedScreenCondition::.ctor(ScreenManager.Conditions.IScreenCondition)
extern void InvertedScreenCondition__ctor_m7A4C36F0CD006699490CE2CECD14251C2466DA8E (void);
// 0x0000019E System.Boolean ScreenManager.Conditions.InvertedScreenCondition::IsSatisfied()
extern void InvertedScreenCondition_IsSatisfied_mFF8DDAD5E1A6A0C7F3E65B165C47818FE6325A8A (void);
// 0x0000019F System.Void ScreenManager.Conditions.InvertedScreenCondition::Dispose()
extern void InvertedScreenCondition_Dispose_m4EBB95E43587B3485F4B78F41CBEF8C512F6B95C (void);
// 0x000001A0 System.Boolean ScreenManager.Conditions.IScreenCondition::IsSatisfied()
// 0x000001A1 System.Void ScreenManager.Conditions.IsOpenedScreenCondition::.ctor(ScreenManager.Enums.ScreenId)
extern void IsOpenedScreenCondition__ctor_mDD58A5669162988885682EAEB78F0EB12BBC56DE (void);
// 0x000001A2 System.Boolean ScreenManager.Conditions.IsOpenedScreenCondition::IsSatisfied()
extern void IsOpenedScreenCondition_IsSatisfied_mA643B3B7D8ECE538F5762BDF49B1C15BD67E7499 (void);
// 0x000001A3 System.Void ScreenManager.Conditions.IsOpenedScreenCondition::Dispose()
extern void IsOpenedScreenCondition_Dispose_mB4E865984A3FDEF2D884EF12890D3515F093A9F0 (void);
// 0x000001A4 System.Boolean ScreenManager.Conditions.IsOpenedScreenCondition::<IsSatisfied>b__2_0(ScreenManager.ScreenData)
extern void IsOpenedScreenCondition_U3CIsSatisfiedU3Eb__2_0_mE1D9E3E9499227AF8DDDCE60D6FC1C51534E4B44 (void);
// 0x000001A5 ScreenManager.Conditions.IScreenCondition ScreenManager.Conditions.ScreenConditionsFactory::IsScreenOpened(ScreenManager.Enums.ScreenId)
extern void ScreenConditionsFactory_IsScreenOpened_mF763F90DF1BA47179548FF722F98E3C6BFD30DE3 (void);
// 0x000001A6 ScreenManager.Conditions.IScreenCondition ScreenManager.Conditions.ScreenConditionsFactory::IsExpired(System.DateTime)
extern void ScreenConditionsFactory_IsExpired_m0532A383D2E105842DF063F19E06E13FB96C6A99 (void);
// 0x000001A7 ScreenManager.Conditions.IScreenCondition ScreenManager.Conditions.ScreenConditionUtils::Invert(ScreenManager.Conditions.IScreenCondition)
extern void ScreenConditionUtils_Invert_m6620D240023188DF198A3C73FDAA64DF6D727F9D (void);
// 0x000001A8 System.Void MicroRx.Disposables.AnonymousDisposable::.ctor(System.Action)
extern void AnonymousDisposable__ctor_mB6EBDA832C7F665FED5EA069769F1EA82E226C9A (void);
// 0x000001A9 System.Void MicroRx.Disposables.AnonymousDisposable::Dispose()
extern void AnonymousDisposable_Dispose_mBCFF37EAEFD352CF1F0AEDC6627AB6FE7711C32C (void);
// 0x000001AA System.IDisposable MicroRx.Core.Observable::Do(System.IObservable`1<T>,System.Action,System.Action)
// 0x000001AB System.IDisposable MicroRx.Core.Observable::Subscribe(System.IObservable`1<T>,System.Action`1<T>,System.Action)
// 0x000001AC System.IDisposable MicroRx.Core.Observable::Subscribe(System.IObservable`1<T>,System.Action`2<T,T>,System.Action)
// 0x000001AD System.IObservable`1<T> MicroRx.Core.Observable::Where(System.IObservable`1<T>,System.Predicate`1<T>,System.Action)
// 0x000001AE System.Void MicroRx.Core.Observable/DoObserver`1::.ctor(System.Action,System.Action)
// 0x000001AF System.Void MicroRx.Core.Observable/DoObserver`1::OnCompleted()
// 0x000001B0 System.Void MicroRx.Core.Observable/DoObserver`1::OnError(System.Exception)
// 0x000001B1 System.Void MicroRx.Core.Observable/DoObserver`1::OnNext(T)
// 0x000001B2 System.Void MicroRx.Core.Observable/ActionObserver`1::.ctor(System.Action`2<T,T>,System.Action)
// 0x000001B3 System.Void MicroRx.Core.Observable/ActionObserver`1::.ctor(System.Action`1<T>,System.Action)
// 0x000001B4 System.Void MicroRx.Core.Observable/ActionObserver`1::OnCompleted()
// 0x000001B5 System.Void MicroRx.Core.Observable/ActionObserver`1::OnError(System.Exception)
// 0x000001B6 System.Void MicroRx.Core.Observable/ActionObserver`1::OnNext(T)
// 0x000001B7 System.Void MicroRx.Core.Observable/ActionObserver`1/<>c__DisplayClass4_0::.ctor()
// 0x000001B8 System.Void MicroRx.Core.Observable/ActionObserver`1/<>c__DisplayClass4_0::<.ctor>b__0(T,T)
// 0x000001B9 System.Void MicroRx.Core.Observable/WhereOperator`1::.ctor(System.IObservable`1<T>,System.Predicate`1<T>,System.Action)
// 0x000001BA System.IDisposable MicroRx.Core.Observable/WhereOperator`1::Subscribe(System.IObserver`1<T>)
// 0x000001BB System.Void MicroRx.Core.Observable/WhereObserver`1::.ctor(System.IObserver`1<T>,System.Predicate`1<T>,System.Action)
// 0x000001BC System.Void MicroRx.Core.Observable/WhereObserver`1::OnCompleted()
// 0x000001BD System.Void MicroRx.Core.Observable/WhereObserver`1::OnError(System.Exception)
// 0x000001BE System.Void MicroRx.Core.Observable/WhereObserver`1::OnNext(T)
// 0x000001BF T MicroRx.Core.IObservableSubject`1::get_CurrentValue()
// 0x000001C0 System.Void MicroRx.Core.IObservableSubject`1::set_CurrentValue(T)
// 0x000001C1 T MicroRx.Core.Subject`1::get_CurrentValue()
// 0x000001C2 System.Void MicroRx.Core.Subject`1::set_CurrentValue(T)
// 0x000001C3 System.Void MicroRx.Core.Subject`1::.ctor(T)
// 0x000001C4 System.IDisposable MicroRx.Core.Subject`1::Subscribe(System.IObserver`1<T>)
// 0x000001C5 System.Void MicroRx.Core.Subject`1::OnCompleted()
// 0x000001C6 System.Void MicroRx.Core.Subject`1::OnError(System.Exception)
// 0x000001C7 System.Void MicroRx.Core.Subject`1::OnNext(T)
// 0x000001C8 System.String MicroRx.Core.Subject`1::ToString()
// 0x000001C9 System.Void MicroRx.Core.Subject`1/<>c__DisplayClass6_0::.ctor()
// 0x000001CA System.Void MicroRx.Core.Subject`1/<>c__DisplayClass6_0::<Subscribe>b__0()
// 0x000001CB DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOMove_mA772A4C485477D90F539D2E4DBED4383F16AB15A (void);
// 0x000001CC DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMoveX(UnityEngine.Rigidbody2D,System.Single,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOMoveX_mB6DA980AEF10DD4A19FFFCB532D71099FE73D207 (void);
// 0x000001CD DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMoveY(UnityEngine.Rigidbody2D,System.Single,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOMoveY_m9993CD27D8B770841E97D94A3DE8150414C6CAC1 (void);
// 0x000001CE DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModulePhysics2D::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
extern void DOTweenModulePhysics2D_DORotate_m7E5EB1E08ABF9C4FD6F85592B5180A33CE4E9B91 (void);
// 0x000001CF DG.Tweening.Sequence DG.Tweening.DOTweenModulePhysics2D::DOJump(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern void DOTweenModulePhysics2D_DOJump_m5FE73153B96E3134299AF3FE8027FD7F57203A1D (void);
// 0x000001D0 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics2D::DOPath(UnityEngine.Rigidbody2D,UnityEngine.Vector2[],System.Single,DG.Tweening.PathType,DG.Tweening.PathMode,System.Int32,System.Nullable`1<UnityEngine.Color>)
extern void DOTweenModulePhysics2D_DOPath_mE138133F0FB125F5FB48D3134317B48A9836CEBC (void);
// 0x000001D1 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics2D::DOLocalPath(UnityEngine.Rigidbody2D,UnityEngine.Vector2[],System.Single,DG.Tweening.PathType,DG.Tweening.PathMode,System.Int32,System.Nullable`1<UnityEngine.Color>)
extern void DOTweenModulePhysics2D_DOLocalPath_mBA2059DF9BB60D99DD0B8628FB28CF33BE80543D (void);
// 0x000001D2 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics2D::DOPath(UnityEngine.Rigidbody2D,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern void DOTweenModulePhysics2D_DOPath_m57ABE5287AFB06C352FF2FAD1277A83693C88EE1 (void);
// 0x000001D3 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics2D::DOLocalPath(UnityEngine.Rigidbody2D,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern void DOTweenModulePhysics2D_DOLocalPath_mDDD2126F81DEEBFDD15AD4B7F338CFEA31230C11 (void);
// 0x000001D4 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m6E60A649269716DA67C91FEA9DB5E4838B171FFB (void);
// 0x000001D5 UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass0_0::<DOMove>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_m3B437B7A49D2CB3F8665A68251D2037D4D2DFAFB (void);
// 0x000001D6 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mAA755EB23D9336AA9EC71EBD7D962163A5D701BB (void);
// 0x000001D7 UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass1_0::<DOMoveX>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_mDCC3F81EA6919A6758DF902C951C7BE90FD9ED21 (void);
// 0x000001D8 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_m287F996454332CC75504F22382E84F764A6703E5 (void);
// 0x000001D9 UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass2_0::<DOMoveY>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_m26EFA27B3283A4CDEA74C1C10C2298172D6F3DA7 (void);
// 0x000001DA System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m4AB88AEBE4C86B65F1E152630DCC77C868D114EF (void);
// 0x000001DB System.Single DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass3_0::<DORotate>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3CDORotateU3Eb__0_mA761FE1B426A6D4F495CF6236077759B83404880 (void);
// 0x000001DC System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_mB04F62E995B27D6A6428EC7912C8E28383226888 (void);
// 0x000001DD UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__0_mC384861F18478CA4920D44A4FF1DBAC168091984 (void);
// 0x000001DE System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__1_m4BE94E6CA4A7343449BF1C380C49969ACEAC3258 (void);
// 0x000001DF System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__2()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__2_mB0AC03FA3A2D44B6659E6FD460970C0AED148A48 (void);
// 0x000001E0 UnityEngine.Vector2 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__3()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__3_m50157E12B08569073B9B7C226EA7E0FF7AF83BE3 (void);
// 0x000001E1 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__4(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__4_mAB03323C38080C1800DA5545B062D5ADAA39CB73 (void);
// 0x000001E2 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass4_0::<DOJump>b__5()
extern void U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__5_mA4ECC8E0DC621BEC5EA7C6F8B770CCF97FAFFDFB (void);
// 0x000001E3 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m7785F019FCF0C76EB1A4663C908429D4552F8864 (void);
// 0x000001E4 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass5_0::<DOPath>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CDOPathU3Eb__0_mC091AB67A43DA9A1DB9DD889184670E586A7F96F (void);
// 0x000001E5 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass5_0::<DOPath>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass5_0_U3CDOPathU3Eb__1_m2D47B6559DAF1FA18DC18EE9DD442D9A949533C1 (void);
// 0x000001E6 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass6_0::.ctor()
extern void U3CU3Ec__DisplayClass6_0__ctor_m08366EEB1AB56732D845835BBA4105463E4F109D (void);
// 0x000001E7 UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass6_0::<DOLocalPath>b__0()
extern void U3CU3Ec__DisplayClass6_0_U3CDOLocalPathU3Eb__0_m3D8AA6655141216299BC1F1259C20544EEA146C4 (void);
// 0x000001E8 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass6_0::<DOLocalPath>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass6_0_U3CDOLocalPathU3Eb__1_mC71B4D60BA6713F56A7626ECA1C0AC87C640EF16 (void);
// 0x000001E9 System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m51DE98C309B2FDCCE7A04DA3E9B811D60D517172 (void);
// 0x000001EA UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass7_0::<DOPath>b__0()
extern void U3CU3Ec__DisplayClass7_0_U3CDOPathU3Eb__0_mEF255E84035CB68CA278B84F20B2205441071C17 (void);
// 0x000001EB System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass7_0::<DOPath>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass7_0_U3CDOPathU3Eb__1_m6F66FA57616B9119567C264D23FD5DCFFD500770 (void);
// 0x000001EC System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mF3941735BDEE084796E7E2354D5086916112AEBE (void);
// 0x000001ED UnityEngine.Vector3 DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass8_0::<DOLocalPath>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__0_m8859794B8FEADED8E4F54E27B8E0A0F4038629D7 (void);
// 0x000001EE System.Void DG.Tweening.DOTweenModulePhysics2D/<>c__DisplayClass8_0::<DOLocalPath>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__1_m01DD88F15C2CACDEBC789CE5454E11777144CF82 (void);
// 0x000001EF DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
extern void DOTweenModuleSprite_DOColor_mD3A2F606C4537E96BC44068B12EFCF5F3719D7BC (void);
// 0x000001F0 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
extern void DOTweenModuleSprite_DOFade_m562660078CF2B15722383D73A54B446756C93127 (void);
// 0x000001F1 DG.Tweening.Sequence DG.Tweening.DOTweenModuleSprite::DOGradientColor(UnityEngine.SpriteRenderer,UnityEngine.Gradient,System.Single)
extern void DOTweenModuleSprite_DOGradientColor_m307B41DE38C824B9F77507D9EE4B7B6946EB3086 (void);
// 0x000001F2 DG.Tweening.Tweener DG.Tweening.DOTweenModuleSprite::DOBlendableColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
extern void DOTweenModuleSprite_DOBlendableColor_mEB9AF62419EA189961437DE1BD0D530C6AB35980 (void);
// 0x000001F3 System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m270031771548A13843FD1B9701D5D178797EB9AD (void);
// 0x000001F4 UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__0_mA10A642C6F3D0B140227D1D6B5B972CA9624F6B7 (void);
// 0x000001F5 System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass0_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__1_m31412CE4EE9499BB433AC04B055AB41BD5047A74 (void);
// 0x000001F6 System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_mDF7123DA26647D6C19E3D8D2131EDB0AFE40446A (void);
// 0x000001F7 UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__0_m34F6B168CAE3EBDE25B3A62A680E3F5387957414 (void);
// 0x000001F8 System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass1_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__1_m769F0265E8D0A6320E185169D06F8ED38FF6191E (void);
// 0x000001F9 System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m6B0AC5DDB17C25A1A2C8F55A84AC2C5986EF8240 (void);
// 0x000001FA UnityEngine.Color DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__0_mD1F5CC03348BACDD68A45FC8BC8D379841EF09D6 (void);
// 0x000001FB System.Void DG.Tweening.DOTweenModuleSprite/<>c__DisplayClass3_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__1_mF6CA7D8E1F46B4CAC9DC17BE940693728B469EE2 (void);
// 0x000001FC DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D (void);
// 0x000001FD DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Graphic,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_mBF11D995117DE31B20263B95D9727156B6B9FA63 (void);
// 0x000001FE DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Graphic,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m3B026C515EBD5B21A4F0062F72003DEA9E6A1306 (void);
// 0x000001FF DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_m0974A6D1FD2E3E54EBCDFE0B0A224DA1AD0416EF (void);
// 0x00000200 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Image,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m06FA7654709E511E24159284799E4B4591CC2AEC (void);
// 0x00000201 DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFillAmount(UnityEngine.UI.Image,System.Single,System.Single)
extern void DOTweenModuleUI_DOFillAmount_mAEA68F8EE08774419FB063640EFFECEF11366B58 (void);
// 0x00000202 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUI::DOGradientColor(UnityEngine.UI.Image,UnityEngine.Gradient,System.Single)
extern void DOTweenModuleUI_DOGradientColor_mC3E941D52CB847F845E89BF26A9C40CC30EF2170 (void);
// 0x00000203 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOFlexibleSize(UnityEngine.UI.LayoutElement,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOFlexibleSize_m89576D7EC829D5CCE2A0241A7AA395DEC22A9737 (void);
// 0x00000204 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOMinSize(UnityEngine.UI.LayoutElement,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOMinSize_mB897842B0AB7D9B4C9B87A6ADCECAADE299EAEB4 (void);
// 0x00000205 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPreferredSize(UnityEngine.UI.LayoutElement,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOPreferredSize_m76F5934F7379C1008A7E0E2D9014323D0B337A61 (void);
// 0x00000206 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Outline,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_mF11960376E53267FFB35E246F8DFAEB8A819425F (void);
// 0x00000207 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Outline,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m5CE6CAB7E005B800B5A9264C9B7552CC127F79BC (void);
// 0x00000208 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOScale(UnityEngine.UI.Outline,UnityEngine.Vector2,System.Single)
extern void DOTweenModuleUI_DOScale_m647FCA4716C631073FA14706E5BECA8E141A4775 (void);
// 0x00000209 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos_m3572189AA21570B71014F4FEADC7BF6DA4ACE9B0 (void);
// 0x0000020A DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPosX(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPosX_m5EAB19C120C814E88467D196708BDE184F8E6E11 (void);
// 0x0000020B DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPosY(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPosY_mCA7E9CCD57B8EE2E0D9B2E558EB52C70A35E414C (void);
// 0x0000020C DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3D_m8243D399CF915E5E096A66B68B4F478D46ABE133 (void);
// 0x0000020D DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3DX(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3DX_m15F425BCBA549081580CC2BBE80298DCC28BECF4 (void);
// 0x0000020E DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3DY(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3DY_mC925E211101555F8C13DDEEA2A89621021184209 (void);
// 0x0000020F DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3DZ(UnityEngine.RectTransform,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorPos3DZ_m7E098AC85DEF40DBE5DD91EA7A89752FE3AFFDD9 (void);
// 0x00000210 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorMax(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorMax_mA08A5684A8DB0A3241A1797DF07FF6548E8A9345 (void);
// 0x00000211 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorMin(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOAnchorMin_m38F6A472B8769C4D7D0612875FF6753CD0BE525F (void);
// 0x00000212 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPivot(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single)
extern void DOTweenModuleUI_DOPivot_m73D2E260A7F021CF188D6C40AACD155BC883ABA2 (void);
// 0x00000213 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPivotX(UnityEngine.RectTransform,System.Single,System.Single)
extern void DOTweenModuleUI_DOPivotX_mDC889BCB5C38C3B7C3E7A7149382B170255E3550 (void);
// 0x00000214 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOPivotY(UnityEngine.RectTransform,System.Single,System.Single)
extern void DOTweenModuleUI_DOPivotY_m1BFC9B848E41C826E5C5A041E5264503EBF53279 (void);
// 0x00000215 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOSizeDelta_m3E0A81A8F45B067D5602581BE961046C26F6C1D4 (void);
// 0x00000216 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOPunchAnchorPos_mD3EF99C387472456D0FFDC148ACF005E85A0E223 (void);
// 0x00000217 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,System.Single,System.Int32,System.Single,System.Boolean,System.Boolean)
extern void DOTweenModuleUI_DOShakeAnchorPos_mE2C7EFF1DCEF908B48225C65EEFD7D194686F27D (void);
// 0x00000218 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean,System.Boolean)
extern void DOTweenModuleUI_DOShakeAnchorPos_m64F3900F8A1461753062FCB39129106CB7D36A28 (void);
// 0x00000219 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUI::DOJumpAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOJumpAnchorPos_mA5A8077EF2E3579FBF1345DC6214D86C1E43009D (void);
// 0x0000021A DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DONormalizedPos(UnityEngine.UI.ScrollRect,UnityEngine.Vector2,System.Single,System.Boolean)
extern void DOTweenModuleUI_DONormalizedPos_m149EE1C6B44B21B2D0AA6ABE1055D18B63EB9E66 (void);
// 0x0000021B DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOHorizontalNormalizedPos(UnityEngine.UI.ScrollRect,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOHorizontalNormalizedPos_m3C9AA048EE79C19E964094F4ABDDD827319D3087 (void);
// 0x0000021C DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOVerticalNormalizedPos(UnityEngine.UI.ScrollRect,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOVerticalNormalizedPos_m822939CFEB320C591E3A9CAA0105248247E22DFA (void);
// 0x0000021D DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOValue(UnityEngine.UI.Slider,System.Single,System.Single,System.Boolean)
extern void DOTweenModuleUI_DOValue_m82BB6B08DFEA2977BF7F94D38CCA3E52A895ED06 (void);
// 0x0000021E DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOColor_m6F1C242B76B256C3E8F69CE9D5485847CA68C493 (void);
// 0x0000021F DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions> DG.Tweening.DOTweenModuleUI::DOCounter(UnityEngine.UI.Text,System.Int32,System.Int32,System.Single,System.Boolean,System.Globalization.CultureInfo)
extern void DOTweenModuleUI_DOCounter_m2D79E5C77335BFFA72DAF618C73C128335479727 (void);
// 0x00000220 DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
extern void DOTweenModuleUI_DOFade_m4272666B0926AB6368BA4D26248C2A7FA1ECFFA5 (void);
// 0x00000221 DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions> DG.Tweening.DOTweenModuleUI::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
extern void DOTweenModuleUI_DOText_m3D241E4FF8F71AA51D94627FCCAE367BE40CF1FF (void);
// 0x00000222 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOBlendableColor(UnityEngine.UI.Graphic,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOBlendableColor_m551AEF9625306B8A34C8EB4F1BC5A65617B28605 (void);
// 0x00000223 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOBlendableColor(UnityEngine.UI.Image,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOBlendableColor_m18EEAB9C4949A6A5DBF77DEEEB77BBF257BE2234 (void);
// 0x00000224 DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOBlendableColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
extern void DOTweenModuleUI_DOBlendableColor_m9293A839490599C3370EB7B444287D73A6B1CEA8 (void);
// 0x00000225 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.CircleOptions> DG.Tweening.DOTweenModuleUI::DOShapeCircle(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Single,System.Boolean,System.Boolean)
extern void DOTweenModuleUI_DOShapeCircle_m4FD2BC993920CBAF4188AF1DC528FFFB411211E3 (void);
// 0x00000226 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/Utils::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
extern void Utils_SwitchToRectTransform_mC821DA0F492D672342DCBB0AF3975CF285D14FFD (void);
// 0x00000227 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::.ctor()
extern void U3CU3Ec__DisplayClass0_0__ctor_m7CDF4DE59B75149775AFE16A0C4AB5482BC4C442 (void);
// 0x00000228 System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m43479452AB6CABC809F8BB075F80A6B391A8AA4B (void);
// 0x00000229 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass0_0::<DOFade>b__1(System.Single)
extern void U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_mB9CCB118057D74D8F6C152B0FA27DE980521FD9A (void);
// 0x0000022A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::.ctor()
extern void U3CU3Ec__DisplayClass1_0__ctor_m6513901DE6123169BD8642D3EDF9341AD2C78AB9 (void);
// 0x0000022B UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__0_m7A0F2549C2C54325EC64A09C154142F9212E4119 (void);
// 0x0000022C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass1_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__1_mFE2DE0E537DD7B1255D9B75969C15549646E6C94 (void);
// 0x0000022D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::.ctor()
extern void U3CU3Ec__DisplayClass2_0__ctor_mAC2FAC72E368A0770D2C88F39065B0CD1B860FDC (void);
// 0x0000022E UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__0_m83DABFF83F53843B3210E3663AA658A393F72C21 (void);
// 0x0000022F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass2_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__1_mEBA98F9D99539591FC60AFBE48FD7336309CFE1D (void);
// 0x00000230 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m6F636F1E7727A97A11CD562DA6C62E44D0CE8D37 (void);
// 0x00000231 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__0_m4568743D7735E8597149620347E7C6C1F8F8F573 (void);
// 0x00000232 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass3_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__1_m931C95B84B1BCD2FB3A2D8038972C9570DAB288D (void);
// 0x00000233 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m9953E31874A19DF4ACB95C87FCE12660693A6AD5 (void);
// 0x00000234 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__0_m45ED3C46917C2BF3FA1E62E5E5FA07933322FC8B (void);
// 0x00000235 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass4_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__1_m1FCDD6D867999371C3AA240FAC66D48DD045C3DC (void);
// 0x00000236 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m8826744854B3DF452491AF2C9F78CF8CD21E5ADF (void);
// 0x00000237 System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::<DOFillAmount>b__0()
extern void U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__0_mA61D89DB8E1FCE175F34BFC13C1173C788BC70FF (void);
// 0x00000238 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass5_0::<DOFillAmount>b__1(System.Single)
extern void U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__1_mD611009CE94D3EBF2517D0EA25B6858E54C6FBAE (void);
// 0x00000239 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mC3A13E5D8A90789E6C1F6A26DFC8C8ED6B5B42DF (void);
// 0x0000023A UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::<DOFlexibleSize>b__0()
extern void U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__0_m3785D78D950D02D749F4640AA0C67FB2CA01DB48 (void);
// 0x0000023B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass7_0::<DOFlexibleSize>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__1_m1E713C41B3EC5ED27907BEFDB2CDCB2D9649D3F0 (void);
// 0x0000023C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_m12549EFF091117C02D5BD5BBAF860766EFFBD335 (void);
// 0x0000023D UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::<DOMinSize>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__0_mCB197686B19FEE2A3789796C320289EDEBCA59DD (void);
// 0x0000023E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass8_0::<DOMinSize>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__1_m8B8E20DB6700A9E435B4EC30F00578E23B81F319 (void);
// 0x0000023F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m638C89DD65FC918306CF707CF4B3EA9CFACAF02E (void);
// 0x00000240 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::<DOPreferredSize>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__0_m1AB892211B71DB2D4E8F21F9BA126944DF9D500C (void);
// 0x00000241 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass9_0::<DOPreferredSize>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__1_mBA091FF947DA978F76C73673E1472EB9BEABDCC8 (void);
// 0x00000242 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::.ctor()
extern void U3CU3Ec__DisplayClass10_0__ctor_m985D8AA039C4BC8FC17F125005481B94749837C7 (void);
// 0x00000243 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__0_mA4364DFDB200823F9D4FF95D114157C2A424D9DC (void);
// 0x00000244 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass10_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__1_mD28650B7F8BE4B8C96C0AB9DF5BB4B53C443CE41 (void);
// 0x00000245 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m69309DF61BEF60177017EDBE3811AA7119806287 (void);
// 0x00000246 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__0_mDCACD4D30AEE9D07134544798AB5B9C5D979BE93 (void);
// 0x00000247 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass11_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__1_m73D2BA809B8464E6E216465A623D609E96823BD9 (void);
// 0x00000248 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::.ctor()
extern void U3CU3Ec__DisplayClass12_0__ctor_m64C4DEEF82977228537228CAAAF48792AE080622 (void);
// 0x00000249 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::<DOScale>b__0()
extern void U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__0_m5C34A94B2CF727A19CE3D6D99933B680E7847F2A (void);
// 0x0000024A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass12_0::<DOScale>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__1_m79C4D6FE81FC8292C6B825B55A2F711DE92D835C (void);
// 0x0000024B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::.ctor()
extern void U3CU3Ec__DisplayClass13_0__ctor_mBD97A0B94BB8F658AA2895C371742B0E74198455 (void);
// 0x0000024C UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::<DOAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__0_m45698E882FAA3963ED0653B5927E9B5F99C8B4E4 (void);
// 0x0000024D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass13_0::<DOAnchorPos>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__1_m5DD4C4D9473EA1DD1B2021D9131B4F6D8124BD57 (void);
// 0x0000024E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::.ctor()
extern void U3CU3Ec__DisplayClass14_0__ctor_mF03BAB1D5A00A73CAA680F13E3BE0B226712B8C3 (void);
// 0x0000024F UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::<DOAnchorPosX>b__0()
extern void U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__0_m77F354FDCA32A28B5E166D92E7AD31A13AAC60FA (void);
// 0x00000250 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass14_0::<DOAnchorPosX>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__1_m017F7F1E8BC9250F6CF7A0B75ED09A7ED669BA34 (void);
// 0x00000251 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::.ctor()
extern void U3CU3Ec__DisplayClass15_0__ctor_m48FC24F32D0415BE4512FB1D5C17CFF39D8149DC (void);
// 0x00000252 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::<DOAnchorPosY>b__0()
extern void U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__0_m3B38EF80DFF9D4EF696F2F08DCC156C16FE55E8D (void);
// 0x00000253 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass15_0::<DOAnchorPosY>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__1_mEB016F250A040B81AEEF7C5D3A98D0B05E3B231F (void);
// 0x00000254 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::.ctor()
extern void U3CU3Ec__DisplayClass16_0__ctor_m6A7514F7CF8978AD8D2179728B06E74F14F4485E (void);
// 0x00000255 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::<DOAnchorPos3D>b__0()
extern void U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__0_m2E02A40A5465C662FCB26908E7F13C7DD3A4BBC2 (void);
// 0x00000256 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass16_0::<DOAnchorPos3D>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__1_mEC7A7D9EDE2E44E5EAF9ACBA9A993FC950F4EEE2 (void);
// 0x00000257 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::.ctor()
extern void U3CU3Ec__DisplayClass17_0__ctor_m54FF0D8E95B7DE95B74B8886D64EA0F803C66D9A (void);
// 0x00000258 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::<DOAnchorPos3DX>b__0()
extern void U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__0_mC5FAD099F119CE2ACDEAD414435B244F21CDB4E7 (void);
// 0x00000259 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass17_0::<DOAnchorPos3DX>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__1_mA7F32AA90629508030AAD74E0725D4B5DF28B76D (void);
// 0x0000025A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::.ctor()
extern void U3CU3Ec__DisplayClass18_0__ctor_mE054C2ABDC10BD5D710C5AF29506CA2841AA72E2 (void);
// 0x0000025B UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::<DOAnchorPos3DY>b__0()
extern void U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__0_m30DD1FDFC6B5104DB734F01FB77F60BAB3C67578 (void);
// 0x0000025C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass18_0::<DOAnchorPos3DY>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__1_m46549819EBCBEB1EE8404F9888866CD75997825D (void);
// 0x0000025D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::.ctor()
extern void U3CU3Ec__DisplayClass19_0__ctor_m74B141AA06FF97B9170A5CD56D2E4422B6511AE3 (void);
// 0x0000025E UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::<DOAnchorPos3DZ>b__0()
extern void U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__0_m81FCF7B95ACC17C67BE6C8D68B570D959D88EADC (void);
// 0x0000025F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass19_0::<DOAnchorPos3DZ>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__1_m27CE65B98533504D302D8580C61D7D3F09A48D27 (void);
// 0x00000260 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::.ctor()
extern void U3CU3Ec__DisplayClass20_0__ctor_mA78DA0FD1C871D24DEB547744F4DE38ABEACD0B4 (void);
// 0x00000261 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::<DOAnchorMax>b__0()
extern void U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__0_mD50D23ECA6FBD3AE03536697B9ED7332E4FDD2CD (void);
// 0x00000262 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass20_0::<DOAnchorMax>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__1_mFEA7E952BB247F3CC01585B3C896AE53BB7B6540 (void);
// 0x00000263 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::.ctor()
extern void U3CU3Ec__DisplayClass21_0__ctor_mCAB7F9CC3BBBA542AF258E0D021EC7AEFE5C2AF1 (void);
// 0x00000264 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::<DOAnchorMin>b__0()
extern void U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__0_m33BBB55D66991F54EE55E79B0AE622F40FFCD764 (void);
// 0x00000265 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass21_0::<DOAnchorMin>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__1_m9D2C994ECFF4FB4237C178E213B731C1BD197F0A (void);
// 0x00000266 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::.ctor()
extern void U3CU3Ec__DisplayClass22_0__ctor_mE10D2BDE628966FE49512531B20C51F6C2787089 (void);
// 0x00000267 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::<DOPivot>b__0()
extern void U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__0_m5FE19E82DBA2702E7A7ADF66BB937773CACBEC6D (void);
// 0x00000268 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass22_0::<DOPivot>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__1_mE3E48A091761963476D9CB2F1004A83281EE2643 (void);
// 0x00000269 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::.ctor()
extern void U3CU3Ec__DisplayClass23_0__ctor_m983854683F9F5CE4B7F0BD9033AB45DDA296F9E7 (void);
// 0x0000026A UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::<DOPivotX>b__0()
extern void U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__0_mEBA64E950B901D99C27662F211C5357066A46C1B (void);
// 0x0000026B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass23_0::<DOPivotX>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__1_m2BECC738B1793D1B2B8F075191056F44AE61DD6D (void);
// 0x0000026C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_m41C1CA93D499089E6C5CD68BEB55BD64ADBFE43F (void);
// 0x0000026D UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::<DOPivotY>b__0()
extern void U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__0_mB9A0E99B23333028B4BA97E332DA19268ADFEBBB (void);
// 0x0000026E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass24_0::<DOPivotY>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__1_mC0B65C0BEC4968B86083A8E493E782A486638E3F (void);
// 0x0000026F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::.ctor()
extern void U3CU3Ec__DisplayClass25_0__ctor_mDF25A8BF6CB8B1A343590B334D354F5EAC765572 (void);
// 0x00000270 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::<DOSizeDelta>b__0()
extern void U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__0_m9465A762A443D9DAA50004FF4EC3E7A5710D24F3 (void);
// 0x00000271 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass25_0::<DOSizeDelta>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__1_mE4D6E5ADF19E5741ADB793A0E043CAE94C18772B (void);
// 0x00000272 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::.ctor()
extern void U3CU3Ec__DisplayClass26_0__ctor_m7F4C69BB9BF2084453CFD95533563FC7C6AF5941 (void);
// 0x00000273 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::<DOPunchAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__0_m8A97B30EF54DCC1B5253F2CE036DA7BEF521F9E2 (void);
// 0x00000274 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass26_0::<DOPunchAnchorPos>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__1_mA354D1798B36E08566BC12DEDD0A878C47D19C46 (void);
// 0x00000275 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::.ctor()
extern void U3CU3Ec__DisplayClass27_0__ctor_m8180394F95E4CEDEA6E4B91A408E7CBC7F36A8D5 (void);
// 0x00000276 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::<DOShakeAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__0_m28D2453CAB4630D898B61CF1679C5C4955EC5761 (void);
// 0x00000277 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass27_0::<DOShakeAnchorPos>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__1_m08D936A746E8737C9E37B326E975EDCB90427B5F (void);
// 0x00000278 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::.ctor()
extern void U3CU3Ec__DisplayClass28_0__ctor_m4179B6F77D9F8B2D07F78D25FC745F542063F335 (void);
// 0x00000279 UnityEngine.Vector3 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__0_mE987488CB26087991EB5B2AF5E1BB03633A9C5E9 (void);
// 0x0000027A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass28_0::<DOShakeAnchorPos>b__1(UnityEngine.Vector3)
extern void U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__1_m223F195EA08AAF2F03AE46C9DE4761B0BC7FB7EC (void);
// 0x0000027B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::.ctor()
extern void U3CU3Ec__DisplayClass29_0__ctor_mCA183B392317E1ABAF1B8CA84C02784D75678A78 (void);
// 0x0000027C UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__0()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__0_m82918F5D73CE67BC9AD9979A3F81C717AA95A5EF (void);
// 0x0000027D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__1_mACBA5402D427457E33770E20ABBF153EE8EA73B2 (void);
// 0x0000027E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__2()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__2_m6BAF800D607189779E65F18B54EA2A29AC45D84B (void);
// 0x0000027F UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__3()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__3_mA6D64EC026FB4AA6873394DBB91E728E6F6EFF3D (void);
// 0x00000280 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__4(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__4_mD71EC1A09CD5404D79A2FA0B068A00F3D2E7D12F (void);
// 0x00000281 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass29_0::<DOJumpAnchorPos>b__5()
extern void U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__5_m31B52507CE1503653EED1573137622C1202BA9D9 (void);
// 0x00000282 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::.ctor()
extern void U3CU3Ec__DisplayClass30_0__ctor_m5F4F51BC32159EE37265F7032DE223AC3AB6A1C0 (void);
// 0x00000283 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__0()
extern void U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__0_m80C5E010B8B0C14A9F1358140D6DB2AE6C5374A9 (void);
// 0x00000284 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass30_0::<DONormalizedPos>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__1_m8185551DA74F9CE20DAD3392E7DDE2490EB1D301 (void);
// 0x00000285 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::.ctor()
extern void U3CU3Ec__DisplayClass31_0__ctor_m417F41C2607E2F3A10C14B9556514FC2BBA1B035 (void);
// 0x00000286 System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__0()
extern void U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__0_m77E495AE88490935170B5479753B0D251A5D3CA4 (void);
// 0x00000287 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass31_0::<DOHorizontalNormalizedPos>b__1(System.Single)
extern void U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__1_mF7393D7DDB277D5BFB5CE86BEB93E25B0558B7BD (void);
// 0x00000288 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::.ctor()
extern void U3CU3Ec__DisplayClass32_0__ctor_mA218955A26898E155307DDE47E12B7E53255AB3E (void);
// 0x00000289 System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__0()
extern void U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__0_m38805643288D85CEE1588577A69586E047726867 (void);
// 0x0000028A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass32_0::<DOVerticalNormalizedPos>b__1(System.Single)
extern void U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__1_mD395D9118A7944AE3F2ACF8AADCF71B0611F80BB (void);
// 0x0000028B System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_mFDBB24E2EB71DAB7C3811F51BCF45EE7733321D3 (void);
// 0x0000028C System.Single DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__0()
extern void U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__0_m8E6B52F72A726C09781FAAE48C1097CE6C2D8188 (void);
// 0x0000028D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass33_0::<DOValue>b__1(System.Single)
extern void U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__1_m02996BC134ED2E96E505224009462007F093F825 (void);
// 0x0000028E System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::.ctor()
extern void U3CU3Ec__DisplayClass34_0__ctor_m6903649B5BDBAA53F5C179B09D1C77AABC913561 (void);
// 0x0000028F UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__0()
extern void U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__0_mBA716E6626BB3051125B19AC02EC825AA305B9A6 (void);
// 0x00000290 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass34_0::<DOColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__1_m534299537BAA83C8B80BDB7C0622F05B8501D4C6 (void);
// 0x00000291 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::.ctor()
extern void U3CU3Ec__DisplayClass35_0__ctor_m6F52791A710AA19C73082E0EED5D298E31EDF1EF (void);
// 0x00000292 System.Int32 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOCounter>b__0()
extern void U3CU3Ec__DisplayClass35_0_U3CDOCounterU3Eb__0_mD4515C9E2BA21A91E51DCA562DB8BD859BB73D4B (void);
// 0x00000293 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass35_0::<DOCounter>b__1(System.Int32)
extern void U3CU3Ec__DisplayClass35_0_U3CDOCounterU3Eb__1_m91616BD436B4FAB5C826763E445C8A59C11AF221 (void);
// 0x00000294 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::.ctor()
extern void U3CU3Ec__DisplayClass36_0__ctor_m7C683C9CF75033301DA090C8B583860556AF7F29 (void);
// 0x00000295 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOFade>b__0()
extern void U3CU3Ec__DisplayClass36_0_U3CDOFadeU3Eb__0_m72BB7D6C818418B6497D3356DA77BA4A5B325E47 (void);
// 0x00000296 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass36_0::<DOFade>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass36_0_U3CDOFadeU3Eb__1_m4083DFAFABE118FAC072D3EE81663ACA96DD8F10 (void);
// 0x00000297 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_m30C619C273CA88E1630ADE30076D3BAB756E8037 (void);
// 0x00000298 System.String DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOText>b__0()
extern void U3CU3Ec__DisplayClass37_0_U3CDOTextU3Eb__0_m02FF7D2EC040673A6A8DAF254FA06CCB5E19150D (void);
// 0x00000299 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass37_0::<DOText>b__1(System.String)
extern void U3CU3Ec__DisplayClass37_0_U3CDOTextU3Eb__1_m2838FBD1C16B38207C0B4528D6E805E6308E1E6B (void);
// 0x0000029A System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::.ctor()
extern void U3CU3Ec__DisplayClass38_0__ctor_m82948A429B319CC7B45105656F6DD0ADBB2136CC (void);
// 0x0000029B UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__0_mE68FE0C254E1D0E7E8D659FF3E4A3AA5F7738351 (void);
// 0x0000029C System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass38_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__1_mA5048FA5B74BD7E9906C80159B99ACB2AFED6634 (void);
// 0x0000029D System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::.ctor()
extern void U3CU3Ec__DisplayClass39_0__ctor_mBAA4D644FB605A60D0C3BEB67229723BB3874E6D (void);
// 0x0000029E UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__0_m897EF1C1C8D7A638D7271A6E3BD8640F834CA567 (void);
// 0x0000029F System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass39_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__1_m059D299137E18F4172FB89D42BBC0DBE0408311C (void);
// 0x000002A0 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::.ctor()
extern void U3CU3Ec__DisplayClass40_0__ctor_m6C547429D9E437CED8C4BDCB96EE8BE2D7182763 (void);
// 0x000002A1 UnityEngine.Color DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::<DOBlendableColor>b__0()
extern void U3CU3Ec__DisplayClass40_0_U3CDOBlendableColorU3Eb__0_m031A8418D686ADB8B4AD6572C18FCBAD1E42B0F6 (void);
// 0x000002A2 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass40_0::<DOBlendableColor>b__1(UnityEngine.Color)
extern void U3CU3Ec__DisplayClass40_0_U3CDOBlendableColorU3Eb__1_m74D298854E55DD21E0191F65A0A67376028748EC (void);
// 0x000002A3 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0::.ctor()
extern void U3CU3Ec__DisplayClass41_0__ctor_mE07F5C0560792F3960473CBCEC46C945FB514D35 (void);
// 0x000002A4 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0::<DOShapeCircle>b__0()
extern void U3CU3Ec__DisplayClass41_0_U3CDOShapeCircleU3Eb__0_m3BF121FFD58F01B8268A055F42A85BF0546709BB (void);
// 0x000002A5 System.Void DG.Tweening.DOTweenModuleUI/<>c__DisplayClass41_0::<DOShapeCircle>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass41_0_U3CDOShapeCircleU3Eb__1_mA39DE4F3403BF27C206BFDFD704F57CBA06D74C2 (void);
// 0x000002A6 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.Single)
extern void DOTweenModuleUnityVersion_DOGradientColor_mC9BCA508E620532BB11075165E008C797105AECD (void);
// 0x000002A7 DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.String,System.Single)
extern void DOTweenModuleUnityVersion_DOGradientColor_m25715875D9EB58E01C6991342DEF7360BD3C9E36 (void);
// 0x000002A8 UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForCompletion(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForCompletion_m005C1E34A63698BBC0C22CA3585745EC425D02DD (void);
// 0x000002A9 UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForRewind(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForRewind_mCEC9E2756020CB9893D845638730B376EEEF6CEB (void);
// 0x000002AA UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForKill(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForKill_m15AD3736BC28347866EF5749772BB5962E8A3951 (void);
// 0x000002AB UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForElapsedLoops(DG.Tweening.Tween,System.Int32,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForElapsedLoops_mFA5C356498B3F55D0D19BF1279EF7E36A496C9E6 (void);
// 0x000002AC UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForPosition(DG.Tweening.Tween,System.Single,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForPosition_m018D0EDE007F6892F157DB22FE44320851B43864 (void);
// 0x000002AD UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForStart(DG.Tweening.Tween,System.Boolean)
extern void DOTweenModuleUnityVersion_WaitForStart_m5FCB59DAE81C8FA2CB8E74A05971254826582033 (void);
// 0x000002AE DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOOffset(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
extern void DOTweenModuleUnityVersion_DOOffset_m6473A690565F74A3C7D75BEA326FB6EFCCB42294 (void);
// 0x000002AF DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOTiling(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
extern void DOTweenModuleUnityVersion_DOTiling_m8279CB89BA1B1F2C324935400EA0D69F05C204BD (void);
// 0x000002B0 System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForCompletion(DG.Tweening.Tween)
extern void DOTweenModuleUnityVersion_AsyncWaitForCompletion_m8843DEF4B094FA24E18B6160D8119F9929EE3225 (void);
// 0x000002B1 System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForRewind(DG.Tweening.Tween)
extern void DOTweenModuleUnityVersion_AsyncWaitForRewind_m2647674C04CDDF28F3359B9360788612C9A2ED00 (void);
// 0x000002B2 System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForKill(DG.Tweening.Tween)
extern void DOTweenModuleUnityVersion_AsyncWaitForKill_mD05A1C68A3EC8098AADF2305C5FEB4D07AE0B98B (void);
// 0x000002B3 System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForElapsedLoops(DG.Tweening.Tween,System.Int32)
extern void DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops_m0BCD2600D9C2CCEE34252B51BB628C745D582C09 (void);
// 0x000002B4 System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForPosition(DG.Tweening.Tween,System.Single)
extern void DOTweenModuleUnityVersion_AsyncWaitForPosition_mEC595AAC702845A05AAE3871362A77FE28049AE6 (void);
// 0x000002B5 System.Threading.Tasks.Task DG.Tweening.DOTweenModuleUnityVersion::AsyncWaitForStart(DG.Tweening.Tween)
extern void DOTweenModuleUnityVersion_AsyncWaitForStart_mF38B4769968388EFD17117FCDC1E213E2839DA16 (void);
// 0x000002B6 System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mF5EC87634B90C628AE370887DCF280218F814B4C (void);
// 0x000002B7 UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__0()
extern void U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m0247C66637BE1BC486E9B83E29D9A8C539F0C4C7 (void);
// 0x000002B8 System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m3FB8CA36F894BB6D62D812DF2F13F0714F48945A (void);
// 0x000002B9 System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m1E2466F9751381E5A3C76E5E2970972957741B9E (void);
// 0x000002BA UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__0()
extern void U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m049884D699FDEDD9B8CE44EC9104A8055F7E4DD8 (void);
// 0x000002BB System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__1(UnityEngine.Vector2)
extern void U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m5C1495C9398445575DA1139EF2967F0C6535992D (void);
// 0x000002BC System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::MoveNext()
extern void U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA (void);
// 0x000002BD System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForCompletion>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB (void);
// 0x000002BE System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::MoveNext()
extern void U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340 (void);
// 0x000002BF System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForRewind>d__11::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3 (void);
// 0x000002C0 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::MoveNext()
extern void U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885 (void);
// 0x000002C1 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForKill>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B (void);
// 0x000002C2 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::MoveNext()
extern void U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2 (void);
// 0x000002C3 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForElapsedLoops>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB (void);
// 0x000002C4 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::MoveNext()
extern void U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121 (void);
// 0x000002C5 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForPosition>d__14::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111 (void);
// 0x000002C6 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::MoveNext()
extern void U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12 (void);
// 0x000002C7 System.Void DG.Tweening.DOTweenModuleUnityVersion/<AsyncWaitForStart>d__15::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41 (void);
// 0x000002C8 System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForCompletion::get_keepWaiting()
extern void WaitForCompletion_get_keepWaiting_mD2C729ECA6B6F6BE57B718492953D588237F743D (void);
// 0x000002C9 System.Void DG.Tweening.DOTweenCYInstruction/WaitForCompletion::.ctor(DG.Tweening.Tween)
extern void WaitForCompletion__ctor_mE85B7CC8B7FE6A2AE84DB8210249A61018118C4D (void);
// 0x000002CA System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForRewind::get_keepWaiting()
extern void WaitForRewind_get_keepWaiting_mF46CA00D1A5FDF140C0C027C4109C7373245A16C (void);
// 0x000002CB System.Void DG.Tweening.DOTweenCYInstruction/WaitForRewind::.ctor(DG.Tweening.Tween)
extern void WaitForRewind__ctor_mD79A34DBDAC1B30FBEBD36A8D749EC81935520B2 (void);
// 0x000002CC System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForKill::get_keepWaiting()
extern void WaitForKill_get_keepWaiting_m4C085E03853426F4D4F5C312334101AE9BA75E3F (void);
// 0x000002CD System.Void DG.Tweening.DOTweenCYInstruction/WaitForKill::.ctor(DG.Tweening.Tween)
extern void WaitForKill__ctor_m75C2D3D54DBBBB35DE297B947C08C982CABF1BAF (void);
// 0x000002CE System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::get_keepWaiting()
extern void WaitForElapsedLoops_get_keepWaiting_mC2A906DBE9A06B7697041B76EC7C6AF58F928D6C (void);
// 0x000002CF System.Void DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::.ctor(DG.Tweening.Tween,System.Int32)
extern void WaitForElapsedLoops__ctor_mA0E7D5A115AB56AD618E24B320476B81B9CAEC7A (void);
// 0x000002D0 System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForPosition::get_keepWaiting()
extern void WaitForPosition_get_keepWaiting_mA71AB7B7C269AB062BB6AF9CDF42E0F54EA6549F (void);
// 0x000002D1 System.Void DG.Tweening.DOTweenCYInstruction/WaitForPosition::.ctor(DG.Tweening.Tween,System.Single)
extern void WaitForPosition__ctor_mB6CCFCE59F142931CF19AC3BA4FE5CAFF1CBA4AD (void);
// 0x000002D2 System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForStart::get_keepWaiting()
extern void WaitForStart_get_keepWaiting_mA0B7858981A2CEDE516D5F2C5133629C6D537E0B (void);
// 0x000002D3 System.Void DG.Tweening.DOTweenCYInstruction/WaitForStart::.ctor(DG.Tweening.Tween)
extern void WaitForStart__ctor_m3AEC2F6E37815ED0D94C2FA5F3B784456C6E49D1 (void);
// 0x000002D4 System.Void DG.Tweening.DOTweenModuleUtils::Init()
extern void DOTweenModuleUtils_Init_m58159847563008940580C19EB265D37EADC3DE6C (void);
// 0x000002D5 System.Void DG.Tweening.DOTweenModuleUtils::Preserver()
extern void DOTweenModuleUtils_Preserver_m211177AD8866241B32B9BC40F805FB73B4C81E47 (void);
// 0x000002D6 System.Void DG.Tweening.DOTweenModuleUtils/Physics::SetOrientationOnPath(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform)
extern void Physics_SetOrientationOnPath_m4A7C7ABEF4300273D3E5B034D238BBCBAFD204E7 (void);
// 0x000002D7 System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody2D(UnityEngine.Component)
extern void Physics_HasRigidbody2D_mD68929FB5C63713DEF37AF14A2DB75969E877C6A (void);
// 0x000002D8 System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody(UnityEngine.Component)
extern void Physics_HasRigidbody_mCFBBEA121C0BAEBF6661FEAA9FF77C031DD4B929 (void);
// 0x000002D9 DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModuleUtils/Physics::CreateDOTweenPathTween(UnityEngine.MonoBehaviour,System.Boolean,System.Boolean,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
extern void Physics_CreateDOTweenPathTween_mC8BAE19162259BD6D6DC345D07DF28C1963F15FE (void);
static Il2CppMethodPointer s_methodPointers[729] = 
{
	EventStreams_get_UserInterface_mEEEB90D00978AAA4E5F8257A1762DFB9D0572446,
	EventStreams__cctor_mD999AD5240871533C866F8518FF46B87B89F7C90,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	StateMachine__ctor_mC808B1F15DFB6BB9290F09582BB8F6A1D78B30F5,
	StateMachine_Initialize_m9C33856D122D62295277AC274B973E800DE64A6E,
	NULL,
	NULL,
	SimpleBusExtensions_Publish_m46CF7470A0A5E70F82B0C81A7C4108D62718938C,
	EventBus_get_Subscriptions_m8A19A7233D19AB4065A0E639BE453239720F0791,
	EventBus__ctor_m6CBBA933206715ED66F7D959B8EFEF0C00F4E612,
	NULL,
	EventBus_Unsubscribe_m30D7E091D80D67A53B59F305EA1A8665EF5455B6,
	NULL,
	NULL,
	U3CU3Ec__cctor_m97E5B91616F53A99207CB53990A671C640029BB3,
	U3CU3Ec__ctor_mABC9EAA4CBDF00A34AD795F97A6BDF9EEB52B333,
	U3CU3Ec_U3C_ctorU3Eb__4_0_m6925351EFAA954A9DE6DCADFCBB6DB3763013BEC,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	EventBase__ctor_m218D629F6307F2A0F1CBD9DE450BC2D59D04F192,
	NULL,
	NULL,
	EventFactory_GetEventCache_m6B3FFF8D0D7185E2A68E1044AA34D37C192DEBEB,
	EventFactory__cctor_m063A6E65C10F2B29BAB11E30B56F16E8F7370739,
	CompositeDisposable__ctor_m7209889FBF7252C6B2973B7D15C9B0CBCAD5DEFC,
	CompositeDisposable__ctor_m21B605958EA6403F15074F2E39E30DA60D61DFC1,
	CompositeDisposable__ctor_mAF3B97DE25144B8FE0B3885CE436BD8CE151B4C5,
	CompositeDisposable__ctor_m3FCE619D0C59CB5C9D921C9F48273AE0FA04E8D2,
	CompositeDisposable_get_Count_mA516A095B2E803D8AAAF88B3C15C50FDA31E8A24,
	CompositeDisposable_Add_m06DFCAECF9688C67625E03A79958845FA70BCF38,
	CompositeDisposable_Remove_mDF0FABBE4AB8E2DAD7D5EE5AA35A6A25E4459FC5,
	CompositeDisposable_Dispose_m6834444DCA241D024A4062E7F2945715A8173C98,
	CompositeDisposable_Clear_mB532055F223F4F95D693AFF86DFA90E07A83BF38,
	CompositeDisposable_Contains_mB8D0558CE5B0F635778BF6113EE337691121EE28,
	CompositeDisposable_CopyTo_mEFDB80B439B74408B909BCA8AD384F54276CDBE9,
	CompositeDisposable_get_IsReadOnly_m096E27E5C0691B3280446FBA9E8586B179A14E95,
	CompositeDisposable_GetEnumerator_m88C735BA39E99F1034C8D70F24E3C1E7C16959A7,
	CompositeDisposable_System_Collections_IEnumerable_GetEnumerator_m95331F9C9AD5FF7D919E59F14555CBFB2AB196F0,
	CompositeDisposable_get_IsDisposed_m108D1544B85F51184EF920F449A0712217BC8629,
	AnimationAppearingBehaviour_SetActiveAsync_m8F0628642605B67C3D17AB3B663485FECCD8EC75,
	AnimationAppearingBehaviour__ctor_mB470C35FBB2485E0E4ADD987E2AEC8CB88A33D83,
	U3CSetActiveAsyncU3Ed__3__ctor_m342860403839DD19340B5E1557AC7BF6B73534D9,
	U3CSetActiveAsyncU3Ed__3_System_IDisposable_Dispose_mF175AB258FC2AF4B32D60A1B390192C2ECEB3B12,
	U3CSetActiveAsyncU3Ed__3_MoveNext_m4AAC55F33798FF2E338A6639FD2B98F8FE0A2B12,
	U3CSetActiveAsyncU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2FA8FAEF5621BE2D59DF5A1B6A8DE5D8C600D03,
	U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_Reset_m45D062C25B059E8F75D5DCEFFAF30727C040529B,
	U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_get_Current_mD0BCD309557A16AFFF83D2AE48E3F4EA1D8FC21B,
	AppearingScreensRequest__ctor_m39846CAF3B9C6DFA19617305890E441B864D677E,
	AppearingScreensRequest_ReleaseAllLists_m48D45F6982EF721AEB7D59C7ED974070ACF38F0C,
	CanvasGroupAppearingBehaviour__ctor_m94DAF1FD625FCB2CD16BC4FCAC1B09852E0D1051,
	CanvasGroupAppearingBehaviour_SetActiveAsync_m71C8031867DB1F4746497150B7EB12D972F8F914,
	U3CSetActiveAsyncU3Ed__3__ctor_m94C1A3F77B5F94C754314C7074D6155DBAD068B2,
	U3CSetActiveAsyncU3Ed__3_System_IDisposable_Dispose_mADA13896B31DC0ABB14BD53ACE21A20BA7230694,
	U3CSetActiveAsyncU3Ed__3_MoveNext_m6EF888594D4377B65F32F41B727555AB514A2AEF,
	U3CSetActiveAsyncU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA88AA7AD55085877C06863731E69431B1B4AB69,
	U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_Reset_m0BE9F1060F71F1520EB9DCC0DF7DE0DA426487DD,
	U3CSetActiveAsyncU3Ed__3_System_Collections_IEnumerator_get_Current_m0354DD0C954ADE47294AEF8835238C3F76B4C0BF,
	EmptyAppearingBehaviour_SetActiveAsync_m7BFBD4DCF92A422BA6D9A4B13D528E92C351469F,
	EmptyAppearingBehaviour__ctor_m177AE2885EF940C035B01964960344EE665B1584,
	U3CSetActiveAsyncU3Ed__0__ctor_mEC1F17B1EE31938C1AC91294CA13441FD65A5B8D,
	U3CSetActiveAsyncU3Ed__0_System_IDisposable_Dispose_m12C94158014F6CF93D9522DB0FB512779863ADBB,
	U3CSetActiveAsyncU3Ed__0_MoveNext_mA1279F3C1B84F071174B3585A691559365610DFE,
	U3CSetActiveAsyncU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6FFB8A06974AEEF7EA914A7CE2C2B784F2F6C38C,
	U3CSetActiveAsyncU3Ed__0_System_Collections_IEnumerator_Reset_m925182B15096648319A7187701A1B415CF465793,
	U3CSetActiveAsyncU3Ed__0_System_Collections_IEnumerator_get_Current_mFC85D3C35C6F678EA0EE76919666EC4FFEA2C0A8,
	NULL,
	NULL,
	ScreenAppearingRequestDebugInformation_SetNewRequest_mB4F5507B27E2720A038CA9FB59AC4891D1400EB5,
	ScreenAppearingRequestDebugInformation_MarkUnloadScreensProcessed_mEC003895DEC55C1C24C47001D0446EC5D80CF15B,
	ScreenAppearingRequestDebugInformation_MarkHideScreensProcessed_m3F63CA527DF9658AA056DBC1ED6D610A8694CE97,
	ScreenAppearingRequestDebugInformation_MarkShowScreensProcessed_mA04F12B4F37077BE72E98CD54009A72523A5ADEB,
	ScreenAppearingRequestDebugInformation__ctor_mC0A91E8FD3C3BFA0D215EE589B4109D447281C6F,
	ScreensAppearingProcessor_get_Requests_mECFCB73ED5FCB825E8833FC049A58ADB68378468,
	ScreensAppearingProcessor__ctor_m3EF927A27CC89D5BBA35CAD0701952B7F41BAED1,
	ScreensAppearingProcessor_GetScreenDebugDataHandler_m9AEEC86581EB2D669AB171BB217A55903DF1A7BB,
	ScreensAppearingProcessor_Dispose_m0E54942902A8B6CB810D939B86BFB44F3612228F,
	ScreensAppearingProcessor_TryProcessNext_mD69A4FE9D95EE5B30B988E15D920A103A707E76C,
	ScreensAppearingProcessor_AddToQueueAndTryProcess_m714B601D5A3895C734CA9DD0AA838C18B326BF1B,
	ScreensAppearingProcessor_Process_m1C7958008E2A040B77C92ECF652F45DD5E54CB44,
	ScreensAppearingProcessor_HasNotLoadedScreen_m29E485BDCEF0E05EE312710CACF535D3EADA1B7D,
	ScreensAppearingProcessor_ShowScreens_m2F0FE6B861FEE2A5D88B2D3461EEE07A8379C80B,
	ScreensAppearingProcessor_UnloadAndReleaseProvidedList_m63514F12AC4E763E9AABD3E9EA6CF9E964731BD9,
	ScreensAppearingProcessor_ShowScreens_m25420E304C4125EFD632C5D3205B296E24CD1184,
	ScreensAppearingProcessor_HandleExceptionAndRemoveScreenEverywhere_m68BB0B79861BBC84D7A19DA9F65FF4CB86365130,
	ScreensAppearingProcessor_RemoveFromRequestAndUnload_m0C57728163E7D7524849FDF3799FEE6D34E5B5A3,
	ScreensAppearingProcessor_RemoveScreenMentions_m22F7551936ACB5C45A05AEF3D7101F76B974CE11,
	ScreensAppearingProcessor_HideScreens_mA785A6C2B5439B4BB315A0EE9B938028F54B6835,
	ScreensAppearingProcessor_Reset_mD2163659DD0B2405D5DA37F51491AAC36518B8A6,
	ScreensAppearingProcessor_ResetInstantly_m1D37C487E0E1756E88F148973DB942E0B0425218,
	U3CShowScreensU3Ed__18__ctor_m43AEF21342275107D7F7A0FCD3F8CE618D056D9D,
	U3CShowScreensU3Ed__18_System_IDisposable_Dispose_m7737F9A4D027D2565ED85DD0B4893975DEB3DF8D,
	U3CShowScreensU3Ed__18_MoveNext_mA424DB643CCE85DEA92354A9DDA9A8EA1F4D2F57,
	U3CShowScreensU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB74DFDB94D85D8CE1EC7452EB3BF1DF101193BE1,
	U3CShowScreensU3Ed__18_System_Collections_IEnumerator_Reset_m81B229895977FC350A895406884E1FCF3DC6FCCA,
	U3CShowScreensU3Ed__18_System_Collections_IEnumerator_get_Current_m32932ED2709F751295F361650A48DFD56EA88D55,
	U3CU3Ec__DisplayClass20_0__ctor_m57992D0A8C7112C56915AECFBDA458439A0B9686,
	U3CU3Ec__DisplayClass20_0_U3CShowScreensU3Eb__0_mAB7A2F07D92D14423631A2D63EEC715010F6E77E,
	U3CShowScreensU3Ed__20__ctor_m4B156F2F6463EDF3E8AC3F01511D90981363E80B,
	U3CShowScreensU3Ed__20_System_IDisposable_Dispose_mB02D0B4646837DE6E0432566C263EAA4ECDD80C0,
	U3CShowScreensU3Ed__20_MoveNext_m168C132D5A83E2E8623A2A7BEF07F2AB0EAD74A6,
	U3CShowScreensU3Ed__20_U3CU3Em__Finally1_m136AD7B34C956D86E6364BCBCEC0FF1BF5994222,
	U3CShowScreensU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m843D96621BB8AF5F75D0DC95737B1B7AC6F085B5,
	U3CShowScreensU3Ed__20_System_Collections_IEnumerator_Reset_m1691B5FF7CA752F5CBE7C5E9B25839393FA2667B,
	U3CShowScreensU3Ed__20_System_Collections_IEnumerator_get_Current_mB950B59EC37E8AB9AF5BA5155F70B957CB598916,
	U3CU3Ec__DisplayClass24_0__ctor_mC21B5528323E1C7D8428BD106B04DDAC0305E13D,
	U3CU3Ec__DisplayClass24_0_U3CHideScreensU3Eb__0_mCF2C40E91015AE65863F3E92349CE811445DD8AB,
	U3CHideScreensU3Ed__24__ctor_m2E8B17C646BCB6F2B77B659B45C8E468EED135D5,
	U3CHideScreensU3Ed__24_System_IDisposable_Dispose_mE66C8C18C809B7FD19E75C1371CD1F0FEB72C7A3,
	U3CHideScreensU3Ed__24_MoveNext_m0CE857014AF0C262FDE390BF584431ACD1359B20,
	U3CHideScreensU3Ed__24_U3CU3Em__Finally1_m4AEFE046A366710BB790E799D16AC6B23FE9957B,
	U3CHideScreensU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3BB0D5061E4AC8F994980509A882F9190D89BAF2,
	U3CHideScreensU3Ed__24_System_Collections_IEnumerator_Reset_mFCF64DA5A9CC1BD3ACE5BEC0950A01EBF11FB828,
	U3CHideScreensU3Ed__24_System_Collections_IEnumerator_get_Current_mCAE7E2695E41F92ADE03B689F964CE1A300AA1AE,
	ScreenUnloadingHelper__ctor_m82FB4D26641DF33B8AA8EB8250DA7DA74059861B,
	ScreenUnloadingHelper_IsAllowedToUnload_m6A25338945AF3212C69738999900A7A6E032A39C,
	ScreenUnloadingHelper_HasAnyScreenWithSameSettings_m32DD033C483C6E09B82030C560FFAB2C21B8BF0E,
	ScreenUnloadingHelper_HasInStackWithSameSettings_m5F0F50A9CEB6D8D21748AB7A3FB6D6D3BFF41573,
	TriggerAppearingBehaviour_SetActiveAsync_m4EFFCBC5332F65158B9C3A0403403356BBA2A053,
	TriggerAppearingBehaviour__ctor_m1BA9A95B524FFBE8E0D2A3CDE318910BD18DF432,
	U3CSetActiveAsyncU3Ed__4__ctor_m80A640939609BD1FE21EF58C8F8F5B626403A046,
	U3CSetActiveAsyncU3Ed__4_System_IDisposable_Dispose_m8FEDFFEAAB6B7AE5DE04329988B6224A9F2234C7,
	U3CSetActiveAsyncU3Ed__4_MoveNext_m9F2A58F21B39120897E47452AAA1DF1FEE072B2F,
	U3CSetActiveAsyncU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1B4B175F3828C9AF7E749DF14EE8AE412C1B29CA,
	U3CSetActiveAsyncU3Ed__4_System_Collections_IEnumerator_Reset_m0159356086F6822D158D26A1B49831388F4A0225,
	U3CSetActiveAsyncU3Ed__4_System_Collections_IEnumerator_get_Current_m8ECA2B6664D61E3E879BB9A3B87F044D7CA10E0D,
	BaseScreenManager_get_OpenedScreens_m60A12F9676A9379744B1C7A54850D87969EA4521,
	BaseScreenManager_Awake_m4BF227D549527E7F87940BF9ADBED95CD348E68F,
	BaseScreenManager_OnDestroy_mF027B062F02D5B09F185A9FA1E88950DC579DF01,
	BaseScreenManager_OnEnable_m717DE6BC75B1460C4B60B89FAE1DF1FB991433BC,
	NULL,
	NULL,
	BaseScreenManager_OnScreenAppearingExceptionHandler_m3AB4600F6BDDE283725892B07EB3F268A513D023,
	BaseScreenManager_RemoveScreenFromStackAndFromAppearingQueue_m269361F13E04FFCE48FF68B028D58596493D14B3,
	BaseScreenManager_OnUpdateTopScreen_mFEFCFD77CAC1289ABBE7859A5964B76439197387,
	BaseScreenManager_ScreenLoadedHandler_m95807E942718DCD3D7603085884D008E42DA69EB,
	BaseScreenManager_FailScreenLoadingHandler_m287B1541B88F6B15F6357DBA9DC06152FF861672,
	BaseScreenManager_IsScreenOpenedHandler_m2AB53FC6A78CF0F37B1838FEA3F3AFA8BF14EAC0,
	BaseScreenManager_GetTopScreenHandler_m8A1EE276689B9C5ED3ED4A1A35F47A234D8BEC9F,
	BaseScreenManager_IsOpenedOrPlannedHandler_m07581F9C5A336337AD2749CB0800B535A2B59E78,
	BaseScreenManager_GetScreenSettingsProviderHandler_m5C97C4657ACB46A091122702C7A16357FBD6591E,
	BaseScreenManager_GetScreenDebugDataHandler_m1ABA8ECAA70CF433330718132CE2CF3D1E7AC816,
	BaseScreenManager_CloseScreensByTypeHandler_mA40C5269B694FF2525F8A6F2CBBF2B8C9E84FEB6,
	BaseScreenManager_CloseScreenByGuidHandler_m2A19229239FCB88A1A84EFA2FC5E41F69270A910,
	BaseScreenManager_CloseScreens_m87948B72BBB25B51D0A8EDA1285CA9632E6F0BBC,
	BaseScreenManager_CloseAllScreensHandler_m8EDA93B1805DE713A82E7C9BC32471CAD1DC1A19,
	BaseScreenManager_OnGetOpenedScreensEventHandler_m015B9C21BA60214E7D66E849CCA77BA5BD77D6FE,
	BaseScreenManager_OnDisable_mB1B0ECC060343FC1062F4B41B74055335AC639AB,
	BaseScreenManager_BackEventHandler_mAAD4851FB6E7CC02593C1CD6B8733AE29664C0DA,
	BaseScreenManager_OpenScreenEventHandler_m08A449724D4268714723BB38F6BC9676789A9E1D,
	BaseScreenManager_IsOpened_mB3194198EA518C1C25065629F1549E78B5C9C92D,
	BaseScreenManager_BackToPrevious_m147D2482EB5A1F5E7C49D08B4E75B5F3170F2478,
	BaseScreenManager_ReturnToScreen_mCB23AE2B8C073F208245741D8E2B893CCF6D6880,
	BaseScreenManager_GetVisibleScreens_m3AC03C40349F2BB85C946AF2FB237B26B48ABAFE,
	BaseScreenManager_OpenScreen_m9508D5ECE9B810F423176BC8773C2CB2FF6EA474,
	BaseScreenManager_Log_mB0D996E3A09DD16355EE72439B8E71082F1B818B,
	BaseScreenManager__ctor_m31EDFAAE48B3F06F70B5EDD9EDD52BB586D90766,
	U3CU3Ec__DisplayClass13_0__ctor_mF27272A28B1F5B944DE6FBEFF1AFE0C469E0737A,
	U3CU3Ec__DisplayClass13_0_U3CRemoveScreenFromStackAndFromAppearingQueueU3Eb__0_mAE084748F37C0E6DBD8B52DE279A5DD90909BBFF,
	U3CU3Ec__DisplayClass13_0_U3CRemoveScreenFromStackAndFromAppearingQueueU3Eb__1_mC43036D0B9092D14635514AE5DBB9DC213E1C046,
	U3CU3Ec__DisplayClass17_0__ctor_m5F8FBDA634A0D422CF16CB7B77161CAA30A38A5F,
	U3CU3Ec__DisplayClass17_0_U3CIsScreenOpenedHandlerU3Eb__0_mD84134141E1DCD1FDF94812AFE995C89A7D1F856,
	U3CU3Ec__DisplayClass19_0__ctor_mBDFB17423B4470EBC96114E63CEBFD5644FE6C0D,
	U3CU3Ec__DisplayClass19_0_U3CIsOpenedOrPlannedHandlerU3Eb__0_m2326579B64597C1D2471DB552640242BB2FBE59B,
	U3CU3Ec__DisplayClass22_0__ctor_mE0734B886C57CC092D46DDE103AE91B8653775F2,
	U3CU3Ec__DisplayClass22_0_U3CCloseScreensByTypeHandlerU3Eb__0_mB5BBD3AA3E1DB315346E8B0005B5BE0833125DA5,
	U3CU3Ec__DisplayClass23_0__ctor_m69A59C11C3DB8A65A13CFAAB2F5B0B91D008BC38,
	U3CU3Ec__DisplayClass23_0_U3CCloseScreenByGuidHandlerU3Eb__0_m3CB044AD9E75A0B40F92B7BF7E1147BA1B113048,
	U3CU3Ec__cctor_m7B6DC4E836B6A2BEA1BE76282E832EBBEB49BC27,
	U3CU3Ec__ctor_m55E466967957206443381F8662D2D5712A1999CA,
	U3CU3Ec_U3C_ctorU3Eb__36_0_mE34EB64647C427A140FBFD6BE118DCD5731FAFD3,
	FailScreenLoadingEvent__ctor_m93C7C2B4216C00C296A148A2E0467F0E12D0E535,
	QueueScreenData__ctor_mADB41A9245A3815592B11E09698E12D6A28512CA,
	QueueScreenData_IsExpired_m8CCF06795254859B61C26A6C6FDFF3BFB79CC667,
	QueueScreenData_IsReadyToShow_m8BBACC3FEF318C82ED34C009B957C62551EBA0EF,
	QueueScreenData_Dispose_m7E521D4C9BB71322734218A3011759A9A92F0FD7,
	ScreenData__ctor_mA7DF289A32544C811E9FB5F90DC6C427C7AFF96C,
	ScreenManagerStateWatcher_OnEnable_mDFE25F32502683A54EDD6D0BC2FAC0DA2467778D,
	ScreenManagerStateWatcher_OnDisable_mBF8836D80CC05C5B30DAEAFF810FDCDBFEB46F6B,
	ScreenManagerStateWatcher_GetScreenManagerStateHandler_mB2B063CFA4E92620075BADCF81179BF76D62396F,
	ScreenManagerStateWatcher_OnScreenClosedHandler_mFAD1CCC45B13CA78A81302544E99089173DCAC0D,
	ScreenManagerStateWatcher_OnScreenOpeningHandler_m7E6DA64E55BBB0724AA164E27D98BDFC4D3FDBEE,
	ScreenManagerStateWatcher__ctor_m6095711EA7954F38498B92496A37C4E955EA33E7,
	ScreenQueue__ctor_mD6529FDBC60E92349B029E4F43401A4A8992EAC7,
	ScreenQueue_ScreenClosedHandler_mF61520DE660137FD276C3F3B27DA7727A4E60466,
	ScreenQueue_GetScreenDebugDataHandler_m38CB5E766A11D7B216850F6A8BB2A83B182A31F6,
	ScreenQueue_Dispose_mFD150BAC6D5665E474083A7CBD6A7FB0A9983747,
	ScreenQueue_Remove_m2C3822638BEF861469B0692C2B1C51A1DF36079D,
	ScreenQueue_Remove_m1F3B6D18FD1D8D951FFACE98434C6BF9218598E1,
	ScreenQueue_TryShowNext_m93ACFF5377B1E4775FE7690DB5DBE513451C4BA8,
	ScreenQueue_HasScreen_m8C690FF1DAD609F50D823131AE569A30CF1A4C78,
	ScreenQueue_Enqueue_m94155F0A2262811295714FB5436F8C840AFA265C,
	ScreenQueue_RemoveExpiredScreensFromQueue_m9227AD670C622A9AE44E005844D563FFD9F9E05C,
	ScreenQueue_GetFirstReadyToShowScreen_m0A804EB1C1D5B09CCC4200D609EFABDA2D633858,
	ScreenQueue_ShowNextScreen_mA4AB26DEE8E2EB41154D776C9F1F2B3F954FDE4A,
	ScreenQueue_Update_m47928EE5CD85489052407637B4B3B35BCC6F9BD9,
	U3CU3Ec__DisplayClass10_0__ctor_m76CC6A074FD563140772D3E1702FB7621E8F3B98,
	U3CU3Ec__DisplayClass10_0_U3CHasScreenU3Eb__0_m8FBCB5D0D3EE796D130FE326F192C9AFB26D6503,
	U3CU3Ec__cctor_mAE95E2440964FEC346CA022DF40528E2887277A0,
	U3CU3Ec__ctor_mADC4F2E013371697287882DAE973B75F6F304709,
	U3CU3Ec_U3CEnqueueU3Eb__11_0_m09BE8B4AEF824E974EC0A175B7AECA43E59EB2B3,
	ScreenQueueManager_OnEnable_m8C077130B183A96F5840F3A2CA2685F7A2FEDA12,
	ScreenQueueManager_IsPlannedHandler_m2D42BF50AE8A6275DB79B05AA0A00B2CC7454A19,
	ScreenQueueManager_IsOpenedOrPlannedHandler_m9A47DE6A6525F15A7F41E8BA562EDAAACFAF92BE,
	ScreenQueueManager_OnDisable_m17632B378985221A6567FBEF21070AA195D56C6F,
	ScreenQueueManager_LateUpdate_m0DE4FE99F769BAB2CFFC6E32AD91EB406A8A6233,
	ScreenQueueManager_CloseAllScreensHandler_mD8D6671458B0E34C2776D690DA40F08F6B416124,
	ScreenQueueManager_CloseScreenByGuidHandler_m8D335F3FBE557B4E6FD84FAD43C7B0A8C3CC007C,
	ScreenQueueManager_CloseScreensByTypeHandler_m30383DB6A977D473962FA9C6481103D10DEAE837,
	ScreenQueueManager_TopScreenChangedHandler_m1CECCC702FF7C44C904C23C46A09901538EA7B24,
	ScreenQueueManager_EnqueueScreenHandler_m7EC8C0299DBFD19C6A75C0AEE7F27C8544BD4498,
	ScreenQueueManager__ctor_mB247259C86727730789E4AE24136A462E4B24630,
	U3CU3Ec__DisplayClass4_0__ctor_mD57F1F1EB8E34A4622B4ADF66AD1B0A32986BAE5,
	U3CU3Ec__DisplayClass4_0_U3CIsPlannedHandlerU3Eb__0_mA828A3F6C08451980DAD8486AC564711462ADD1C,
	U3CU3Ec__DisplayClass5_0__ctor_mF8A4299D1E9DE9EB7648D5426BF47B2282957917,
	U3CU3Ec__DisplayClass5_0_U3CIsOpenedOrPlannedHandlerU3Eb__0_m29B213A5E4746DFDBEEA9B8D279E6BD069A8ADFB,
	ScreensCache__ctor_m0061431C15CE50798FA53E68520788E256C95EDB,
	ScreensCache_GetScreenDebugDataHandler_m28EB667A79D946EE44C7FBB299A2BADB84B5004F,
	ScreensCache_LoadScreen_m49B5898300AEC4EB4E0172FD37B454EBFAA18284,
	ScreensCache_GetScreen_m20FE7995EAE7BA65CF0344F0BC54C59EB7F034DC,
	ScreensCache_ForceUnload_m3C2F4C0BB51BA092A8FC46EA154614CEEAF8DC40,
	ScreensCache_Unload_mE59AA25D8FD3EE4A5D89F32CEB0122A264A55961,
	ScreensCache_IsLoaded_m35A8BE449D29A00FA6647AE13C99A5746FB818AA,
	ScreensCache_OnScreenLoaded_mBF8E1CCFFF26BCF7A196D37984211B40E86A551A,
	ScreensCache_Dispose_m407FEE1548A11742E777FF76E35E7CC92961904E,
	ScreensCache_Log_mA5354E813A56B8223CE7F1EF5E572462E3978431,
	ScreensCache_Clear_m8B702F6A66FB50BEE36B1B9C216BCC707E878091,
	ScreensCache_SetUnloadingHelper_m51F396E0BABBB50647224C28A5EE5E6B06887918,
	NULL,
	MonoBehaviourUtils_DoAfterRealtimeDelay_m2B1DBDAB7C0035D9647366780B568B7C9BB047C5,
	MonoBehaviourUtils_DoAfterDelay_m4733E5ECF9E248DC3C347BF1BA892F79934C84E3,
	MonoBehaviourUtils_DoFrameLater_m4B99BECF3221054D617357FC37B27BB1CB253A38,
	MonoBehaviourUtils_DoEndOfFrame_m1354BFEB7CFB110896BD17E9EE09A43128E38B70,
	MonoBehaviourUtils_Await_m1FBA2CAD65111E4EEEF01E021655920DD3EEE8E2,
	MonoBehaviourUtils_Await_m1FDBB4F901ECAC0402EA9A6C6DEC0DBFB72F837A,
	MonoBehaviourUtils_DoAfterRealtimeDelay_m39DABED048FB261041B3419C5FE26A8A2DCC4333,
	MonoBehaviourUtils_DoAfterDelay_m207B1D5C3D2CD1565D8B0DF9954B5A77FE93EE9B,
	MonoBehaviourUtils_DoFrameLater_m46ECF343F8E05D1E537821E6F4DB1BA9C681D897,
	MonoBehaviourUtils_DoEndOfFrame_m0232B4EF65FEEBECE36F8C65585B05AE2F64193C,
	NULL,
	U3CAwaitU3Ed__5__ctor_m0A71D67DC73B7A8D5F47730245499C222A158079,
	U3CAwaitU3Ed__5_System_IDisposable_Dispose_mC62C090CB0DBCC65AA61F8625C23595D3893994E,
	U3CAwaitU3Ed__5_MoveNext_m7BF81D24C94166CBF62D7C343C66A9973C49F2F7,
	U3CAwaitU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC18D788C30A010D1FEF23DA5803EBC0C60A2DBAD,
	U3CAwaitU3Ed__5_System_Collections_IEnumerator_Reset_m94D27736561FD83609B8A5261C61CD66ADDA8F91,
	U3CAwaitU3Ed__5_System_Collections_IEnumerator_get_Current_mC5E6C419BF8964A681366D39B79F3066E9336127,
	U3CDoAfterRealtimeDelayU3Ed__6__ctor_m6AEB2EBFA522497EA78062FCBFEBD9B79B4931E0,
	U3CDoAfterRealtimeDelayU3Ed__6_System_IDisposable_Dispose_m9BF8ABD9391D5946FD06755D9032AFC7813281C0,
	U3CDoAfterRealtimeDelayU3Ed__6_MoveNext_m982ED93D6DB73A3A46252CE3BF7DBA6A8084455E,
	U3CDoAfterRealtimeDelayU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1E0CE0FC4ADF97DF13B08C69866C118C5C5B1CC,
	U3CDoAfterRealtimeDelayU3Ed__6_System_Collections_IEnumerator_Reset_m78D952E3C00931703E0701176834269FB788482B,
	U3CDoAfterRealtimeDelayU3Ed__6_System_Collections_IEnumerator_get_Current_m7AD443CE5642C621FD3715FF76CA9D33B0C5DC9D,
	U3CDoAfterDelayU3Ed__7__ctor_m83621931A86FC92D81FC6CF2DD4B8FEF0EAA3CF5,
	U3CDoAfterDelayU3Ed__7_System_IDisposable_Dispose_m3FA458DB1F674811361CBA1E013136E01CBA2FA7,
	U3CDoAfterDelayU3Ed__7_MoveNext_m70089C17577D0C62F569C27C5A3708A235036366,
	U3CDoAfterDelayU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m319F5B91AAA739A48877BA1E8FCC17E199335BAF,
	U3CDoAfterDelayU3Ed__7_System_Collections_IEnumerator_Reset_mC185131F24FC01600D6FAD462C802EDD42F36CBE,
	U3CDoAfterDelayU3Ed__7_System_Collections_IEnumerator_get_Current_mA840F55AAE4D2A91E21D59EFA01C5398C13E33DA,
	U3CDoFrameLaterU3Ed__8__ctor_mB7A5F388BD00B4DA3183FC410451C000ADD7AE63,
	U3CDoFrameLaterU3Ed__8_System_IDisposable_Dispose_mA4869CC0727DCDBEB6C4DC7D8CC6275DC669D35A,
	U3CDoFrameLaterU3Ed__8_MoveNext_m7B2D40C46B567F63DA175B69E2D2CB15AC5622B7,
	U3CDoFrameLaterU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mACFA12BA316A62EA218B4910AD20F664A18609B6,
	U3CDoFrameLaterU3Ed__8_System_Collections_IEnumerator_Reset_m2FAF59FDBE710454CEF44F0C633970F1CD737C80,
	U3CDoFrameLaterU3Ed__8_System_Collections_IEnumerator_get_Current_m44F22A405BEB35912667D4362146765B18D9576F,
	U3CDoEndOfFrameU3Ed__9__ctor_m90A782DE4002B2E12C9C28EFB5432A67B4707DBD,
	U3CDoEndOfFrameU3Ed__9_System_IDisposable_Dispose_m6977D746A694515DD15F33FE869CB7504F4F2EF0,
	U3CDoEndOfFrameU3Ed__9_MoveNext_m385056A3444C38B2E1AE98A388B8F5E74D08A13B,
	U3CDoEndOfFrameU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m61FFBC910EA7395B3E6736D418660235568E63E2,
	U3CDoEndOfFrameU3Ed__9_System_Collections_IEnumerator_Reset_m7E96D6CE7B4D950D792E2904127BF22FD4F0AED5,
	U3CDoEndOfFrameU3Ed__9_System_Collections_IEnumerator_get_Current_m7279BB43802C04A05F60F2563183F6C2D7A74932,
	NULL,
	NULL,
	NULL,
	CoroutineUtils_StartThrowingTimeLimitedCoroutine_m4F135CDC921F3B21CA11B8FFDDA6E78788B45F14,
	CoroutineUtils_RunThrowingTimeLimitedIterator_m289A097E685386FD55C56294E2F28EC5E789AFF8,
	U3CRunThrowingTimeLimitedIteratorU3Ed__1__ctor_mD09FBE3E997AE57A3A304371A569537C88129B0C,
	U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_IDisposable_Dispose_m6889F392F74736BADA2865F5B1A510B15076B120,
	U3CRunThrowingTimeLimitedIteratorU3Ed__1_MoveNext_m75666A881D36564F2F6B7C8F379C271471A731A7,
	U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE568A369900D49CBF39216E1C2A736460466B122,
	U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_Collections_IEnumerator_Reset_mC606507F7F931DCA12C7D850274951F6AE8E7C78,
	U3CRunThrowingTimeLimitedIteratorU3Ed__1_System_Collections_IEnumerator_get_Current_mDC5272A81D52D9B08DCD46247ED75896251A29E3,
	ScreenContext_Wrap_m939FE135B22A1E13FB0D995EDD6E68BBF02C5CB7,
	NULL,
	BackToPreviousScreenEvent_Create_m7ADE49E864241DA006F9FB8091F499FC0013603D,
	BackToPreviousScreenEvent_Create_m43E90F97C37BAA4A03949C79B319E388CBA04686,
	BackToPreviousScreenEvent__ctor_m55545386C75189CD5DD4DD2DE3462B89E50D8EB1,
	CloseAllScreensEvent_Create_m969EAA755E5DF22406837232DA2127300C701FA3,
	CloseAllScreensEvent__ctor_mEC116E9CD8A7CB04231385486822D3517F3386FA,
	CloseScreenByGuidEvent_Create_mB7E84F21058CE1730E5B739DD73376C8A713704E,
	CloseScreenByGuidEvent__ctor_mFD43E348C1E6DD8B603C6DED380CB24ACB8E0C74,
	CloseScreensByTypeEvent_Create_m18E5887E4F88EB0C3737B6ECEA8F410C3D951AE8,
	CloseScreensByTypeEvent__ctor_m8AF7FA483196D1D26DE80628D30C91684CA973D6,
	ClosingAllScreensEvent__ctor_m07FC916CD6DC644008109FBC5C0440D234852A8D,
	EnqueueScreenEvent_Create_mA69EACFAFE13345CA8CB4FD10D651CD31C2A58D6,
	EnqueueScreenEvent_SetQueueParentType_mED9830780F87BA0A975CC579095648A96064EED7,
	EnqueueScreenEvent_AddScreenContext_m7338DD973D722D89DBD7ECB1C442FD48B2AAD9D2,
	EnqueueScreenEvent_AddShowConditions_m9F2A04AC767AF91838963711AB95423BC3C9DD62,
	EnqueueScreenEvent_AddExpireConditions_m1CE7310B0B57E23C3F7896D3044FC84964AAA64E,
	EnqueueScreenEvent_GetConditions_mE44B33ABDCFD74515CDCD33D388435048242A1AB,
	EnqueueScreenEvent__ctor_mB593F1DDA68C587233764733C119EE5E24C8328A,
	U3CU3Ec__cctor_m94C58A30E3F7490E5744D09F82939F70C0DFD843,
	U3CU3Ec__ctor_m0E98CAB30E42866370BC57367796189CA07AC678,
	U3CU3Ec_U3CGetConditionsU3Eb__7_0_mD14A0BD2CE4F1E595B01E1EAEC8F4EC8A4FE5BCB,
	ScreenManagerUtils_GetFirstScreen_mE0A345DD5B03C64F8D5E212515EED8D4BCE8CA6C,
	GetOpenedScreensEvent_Invoke_m1F2507EBC2116DB98D526627E1A3B824739A139A,
	GetOpenedScreensEvent__ctor_mBA203C4AC1ECA516351A3223D07B5AE08944D82C,
	GetScreenDebugDataEvent__ctor_m95086470096C0125C4E23DA7129DAE946B8613BA,
	GetScreenManagerStateEvent__ctor_mD2440CD049645F39FF4A356AFF32AAFD2B287DA8,
	GetScreenSettingsProviderEvent__ctor_m7DA7E20A1F531D3CDF920DCA7DF71098DEFE3F75,
	GetTopScreenEvent__ctor_m455830EE3F96DBD12F15967554F853CDD0238A8E,
	IsOpenedOrPlannedEvent_Check_m0B67DDDCAD4CA19995D7D10686635BBFC30F499D,
	IsOpenedOrPlannedEvent__ctor_m513D8E882C47A40B365FB8A57376B2FDBA715BE7,
	IsPlannedEvent_Check_mB5876411D4682EF13DBC66FE67CAD0A592545E2E,
	IsPlannedEvent__ctor_mB7FEA2B439165A69A1261E6C1003C4D2F22B822B,
	IsScreenOpenedEvent_Check_m39720706E35914C83C5ABAB122F3CF8B119AEEDB,
	IsScreenOpenedEvent__ctor_mA2A6E3A54140D98D92B5E307915B06E0A12C7BBA,
	LockDailyWidgetEvent__ctor_mF10A560B8D6542BB8F5FD19CFF75878AC861041A,
	OpenScreenEvent_get_ScreenData_m372C3F46F87B8EAF016B088DDBA15D41F9A62782,
	OpenScreenEvent_set_ScreenData_m692ED99722CFC7045E4D012589950525BE508E63,
	OpenScreenEvent_Create_m9AEED4EA6A3A65EB2720616B8A18545B837A8C74,
	OpenScreenEvent_Create_m539A7BDD7B69B945C269E48C4FA7AC749FB506BE,
	OpenScreenEvent_AddScreenContext_mB5D7C1A4D59139070B0A8EC6E7D26C35F856468B,
	OpenScreenEvent__ctor_m80B5C14C39DBC90239B98E1A32C4EC19BE3272DC,
	ScreenClosedEvent_get_ScreenData_m1F683725CDB5114F2A124C5FAD89F8DAF61911E6,
	ScreenClosedEvent_set_ScreenData_mC67AE1F6422961B3FF21F7741DC338A4E51AEEFB,
	ScreenClosedEvent_Create_mE16FBC09AFD003F94AAB1D17AD7D0E55616431F0,
	ScreenClosedEvent__ctor_m19FBEE5CD2883AC70B47D317D99392E2F0C777C6,
	ScreenHiddenEvent_get_ScreenData_m3760291DD3BA80E66577E950CD73123845ABF7F9,
	ScreenHiddenEvent_set_ScreenData_m2D35ADE24DEA7E7999330A030C22AAED0742D646,
	ScreenHiddenEvent_Create_m400241C374FC92B0534DF207B987C3D8B7880F7C,
	ScreenHiddenEvent__ctor_m99CB2C9F0D041143F715B51CAFE96017A6DC27DA,
	ScreenLoadedEvent_get_Screen_mF863599747D4386DFB013ACE305965DEDAE616D3,
	ScreenLoadedEvent_set_Screen_mB07919DA005206EB836DDED65AF20B1DF52E6D13,
	ScreenLoadedEvent_get_Id_mD7448C4D0D9EF7FE1F48054104AE721FC432FA78,
	ScreenLoadedEvent_set_Id_mA26CB8FA940B0E9F29255BF04B4642E0597CB499,
	ScreenLoadedEvent_Create_m6104FB04855A9A20BCED12123B7A81817F97BEC7,
	ScreenLoadedEvent__ctor_mCC7B6FAB16C016F99EA8EEC54603DF5247C172C7,
	ScreenOpeningEvent_get_ScreenData_m0FC4B60404FDFB58CCF75838E01AFF75C681C447,
	ScreenOpeningEvent_set_ScreenData_mB42773ED35CC805ECE9C9E65161AEC25080BF011,
	ScreenOpeningEvent_Create_mD160A27AC99EB6FD0F7A4D786B06A66774A621AB,
	ScreenOpeningEvent__ctor_mAE20AC32C6CA9F33100206403FCB8A2F88EFD196,
	ScreenSetActiveException__ctor_mDCE1AB73A749C94CEC18F6167844C0FC11A87E0F,
	ScreenUnloadedEvent_get_ScreenData_m5D195FFDBC8582334C4B2183CB702B84E54956E3,
	ScreenUnloadedEvent_set_ScreenData_m3959390B55F3A4EAC527A54CD881322E688D00D9,
	ScreenUnloadedEvent_Create_m3C160EE9BA908EAA872B9458FED340E8059748D2,
	ScreenUnloadedEvent__ctor_mAE6CDBCEF3E1BBD5E915D3FF579418B67229B31C,
	TopScreenChangedEvent_Create_mA252EDF01A93997928400EBD48ED9101563BDDF3,
	TopScreenChangedEvent__ctor_mD8DF87A1B5C7A97B4E4F3E42ED2A0EA3D9CA596E,
	UpdateDailyMissionsBadge__ctor_mE042DC42200F408F338E9A1E553379E164F0A785,
	WaitWhileScreenOpenedOrPlanned_get_keepWaiting_m1F1EEC1124A933B7DCB8EB8D5DAAED6A6EFAF4FB,
	WaitWhileScreenOpenedOrPlanned__ctor_m3961287A579768C06BCB8B2D3E4E30B767E9EAF5,
	WaitWhileScreenOpenedOrPlanned_Finalize_m56E59345711FDDE045BF23581E5F590D304C253E,
	WaitWhileScreenOpenedOrPlanned_OnScreenClosed_mD122FB8F434C1B0515C3162EFCC968D28CDA215A,
	WaitWhileScreenOpenedOrPlanned_Dispose_mD032E7936B040E93A14DAF1B4F7781C35014FD55,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ScreenId__ctor_mE6C808BE1240BC3A821BD80FF5FCBB796C3C6680,
	ScreenId_ToString_m67C7FD82A41F23E6F7C827C67C98541885A95151,
	ScreenId_CompareTo_mC7732AC3AFAC27EE7760DDA6D503EFE0620B3326,
	ScreenId_Equals_m952B50F739671C912FE81407FA5080EE7B20BCE2,
	ScreenId_GetHashCode_m27E9BDD56BB23753CEE5BA0D299738043024E51D,
	ScreenId_op_Equality_mBDFF32C3DFCDB15C00869DC6210E45BE74A84B1C,
	ScreenId_op_Inequality_mFCFC753EF5CC022B168276C34C25C5E2EA56D943,
	ScreenId_op_Implicit_mC9E7EFA4EA0E6153D1F53B7BD3711620DDC990F9,
	ScreenId_op_Implicit_m89CC3F6CF36E35E1FE80DFB39069A59A1A543323,
	ScreenId_CompareTo_m0AE5A4E830BDBCA4F166DE269BF925227A208A58,
	ScreenId__cctor_m92A378D990E5CFBADD6A176FC3E4C67D5613C5FC,
	CompositeScreenCondition__ctor_m0777ACDAB55D13FE8D8F3DA39C4A0310F93C2D08,
	CompositeScreenCondition_IsSatisfied_mF73C824D4A26E147F66554900C724B9B5CF51112,
	CompositeScreenCondition_Dispose_m87CE977A832C4BA88C90E937F0683A48D1D3CE58,
	U3CU3Ec__cctor_m143507732DE95879B6EDD007A6000CE5A1372AC6,
	U3CU3Ec__ctor_m08916061FB9EB4DFFD7604465A0F56E30D254540,
	U3CU3Ec_U3CIsSatisfiedU3Eb__2_0_m406CA24CA586A2D3343A22D522ED8E39F5E88A23,
	DelegateScreenCondition__ctor_m2010B5A229F466EC45B9FAAACEEA5CE40FFEA5B2,
	DelegateScreenCondition_Dispose_m4EBAA9D8430C5086399466B9851315CA79F9E2F4,
	DelegateScreenCondition_IsSatisfied_mE61895F54FFE80FF3149133B514F0A1F064BF67F,
	ExpireScreenCondition__ctor_m4EEA9DDEDCCCCC324AD08B03341DBF8BD062C04C,
	ExpireScreenCondition_IsSatisfied_mDF251AA0EF4E8DAB7A67017078C9DC87625E2632,
	ExpireScreenCondition_Dispose_m290B754DE026AF37521C8AA79243849F7FE45D0B,
	InvertedScreenCondition__ctor_m7A4C36F0CD006699490CE2CECD14251C2466DA8E,
	InvertedScreenCondition_IsSatisfied_mFF8DDAD5E1A6A0C7F3E65B165C47818FE6325A8A,
	InvertedScreenCondition_Dispose_m4EBB95E43587B3485F4B78F41CBEF8C512F6B95C,
	NULL,
	IsOpenedScreenCondition__ctor_mDD58A5669162988885682EAEB78F0EB12BBC56DE,
	IsOpenedScreenCondition_IsSatisfied_mA643B3B7D8ECE538F5762BDF49B1C15BD67E7499,
	IsOpenedScreenCondition_Dispose_mB4E865984A3FDEF2D884EF12890D3515F093A9F0,
	IsOpenedScreenCondition_U3CIsSatisfiedU3Eb__2_0_mE1D9E3E9499227AF8DDDCE60D6FC1C51534E4B44,
	ScreenConditionsFactory_IsScreenOpened_mF763F90DF1BA47179548FF722F98E3C6BFD30DE3,
	ScreenConditionsFactory_IsExpired_m0532A383D2E105842DF063F19E06E13FB96C6A99,
	ScreenConditionUtils_Invert_m6620D240023188DF198A3C73FDAA64DF6D727F9D,
	AnonymousDisposable__ctor_mB6EBDA832C7F665FED5EA069769F1EA82E226C9A,
	AnonymousDisposable_Dispose_mBCFF37EAEFD352CF1F0AEDC6627AB6FE7711C32C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	DOTweenModulePhysics2D_DOMove_mA772A4C485477D90F539D2E4DBED4383F16AB15A,
	DOTweenModulePhysics2D_DOMoveX_mB6DA980AEF10DD4A19FFFCB532D71099FE73D207,
	DOTweenModulePhysics2D_DOMoveY_m9993CD27D8B770841E97D94A3DE8150414C6CAC1,
	DOTweenModulePhysics2D_DORotate_m7E5EB1E08ABF9C4FD6F85592B5180A33CE4E9B91,
	DOTweenModulePhysics2D_DOJump_m5FE73153B96E3134299AF3FE8027FD7F57203A1D,
	DOTweenModulePhysics2D_DOPath_mE138133F0FB125F5FB48D3134317B48A9836CEBC,
	DOTweenModulePhysics2D_DOLocalPath_mBA2059DF9BB60D99DD0B8628FB28CF33BE80543D,
	DOTweenModulePhysics2D_DOPath_m57ABE5287AFB06C352FF2FAD1277A83693C88EE1,
	DOTweenModulePhysics2D_DOLocalPath_mDDD2126F81DEEBFDD15AD4B7F338CFEA31230C11,
	U3CU3Ec__DisplayClass0_0__ctor_m6E60A649269716DA67C91FEA9DB5E4838B171FFB,
	U3CU3Ec__DisplayClass0_0_U3CDOMoveU3Eb__0_m3B437B7A49D2CB3F8665A68251D2037D4D2DFAFB,
	U3CU3Ec__DisplayClass1_0__ctor_mAA755EB23D9336AA9EC71EBD7D962163A5D701BB,
	U3CU3Ec__DisplayClass1_0_U3CDOMoveXU3Eb__0_mDCC3F81EA6919A6758DF902C951C7BE90FD9ED21,
	U3CU3Ec__DisplayClass2_0__ctor_m287F996454332CC75504F22382E84F764A6703E5,
	U3CU3Ec__DisplayClass2_0_U3CDOMoveYU3Eb__0_m26EFA27B3283A4CDEA74C1C10C2298172D6F3DA7,
	U3CU3Ec__DisplayClass3_0__ctor_m4AB88AEBE4C86B65F1E152630DCC77C868D114EF,
	U3CU3Ec__DisplayClass3_0_U3CDORotateU3Eb__0_mA761FE1B426A6D4F495CF6236077759B83404880,
	U3CU3Ec__DisplayClass4_0__ctor_mB04F62E995B27D6A6428EC7912C8E28383226888,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__0_mC384861F18478CA4920D44A4FF1DBAC168091984,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__1_m4BE94E6CA4A7343449BF1C380C49969ACEAC3258,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__2_mB0AC03FA3A2D44B6659E6FD460970C0AED148A48,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__3_m50157E12B08569073B9B7C226EA7E0FF7AF83BE3,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__4_mAB03323C38080C1800DA5545B062D5ADAA39CB73,
	U3CU3Ec__DisplayClass4_0_U3CDOJumpU3Eb__5_mA4ECC8E0DC621BEC5EA7C6F8B770CCF97FAFFDFB,
	U3CU3Ec__DisplayClass5_0__ctor_m7785F019FCF0C76EB1A4663C908429D4552F8864,
	U3CU3Ec__DisplayClass5_0_U3CDOPathU3Eb__0_mC091AB67A43DA9A1DB9DD889184670E586A7F96F,
	U3CU3Ec__DisplayClass5_0_U3CDOPathU3Eb__1_m2D47B6559DAF1FA18DC18EE9DD442D9A949533C1,
	U3CU3Ec__DisplayClass6_0__ctor_m08366EEB1AB56732D845835BBA4105463E4F109D,
	U3CU3Ec__DisplayClass6_0_U3CDOLocalPathU3Eb__0_m3D8AA6655141216299BC1F1259C20544EEA146C4,
	U3CU3Ec__DisplayClass6_0_U3CDOLocalPathU3Eb__1_mC71B4D60BA6713F56A7626ECA1C0AC87C640EF16,
	U3CU3Ec__DisplayClass7_0__ctor_m51DE98C309B2FDCCE7A04DA3E9B811D60D517172,
	U3CU3Ec__DisplayClass7_0_U3CDOPathU3Eb__0_mEF255E84035CB68CA278B84F20B2205441071C17,
	U3CU3Ec__DisplayClass7_0_U3CDOPathU3Eb__1_m6F66FA57616B9119567C264D23FD5DCFFD500770,
	U3CU3Ec__DisplayClass8_0__ctor_mF3941735BDEE084796E7E2354D5086916112AEBE,
	U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__0_m8859794B8FEADED8E4F54E27B8E0A0F4038629D7,
	U3CU3Ec__DisplayClass8_0_U3CDOLocalPathU3Eb__1_m01DD88F15C2CACDEBC789CE5454E11777144CF82,
	DOTweenModuleSprite_DOColor_mD3A2F606C4537E96BC44068B12EFCF5F3719D7BC,
	DOTweenModuleSprite_DOFade_m562660078CF2B15722383D73A54B446756C93127,
	DOTweenModuleSprite_DOGradientColor_m307B41DE38C824B9F77507D9EE4B7B6946EB3086,
	DOTweenModuleSprite_DOBlendableColor_mEB9AF62419EA189961437DE1BD0D530C6AB35980,
	U3CU3Ec__DisplayClass0_0__ctor_m270031771548A13843FD1B9701D5D178797EB9AD,
	U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__0_mA10A642C6F3D0B140227D1D6B5B972CA9624F6B7,
	U3CU3Ec__DisplayClass0_0_U3CDOColorU3Eb__1_m31412CE4EE9499BB433AC04B055AB41BD5047A74,
	U3CU3Ec__DisplayClass1_0__ctor_mDF7123DA26647D6C19E3D8D2131EDB0AFE40446A,
	U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__0_m34F6B168CAE3EBDE25B3A62A680E3F5387957414,
	U3CU3Ec__DisplayClass1_0_U3CDOFadeU3Eb__1_m769F0265E8D0A6320E185169D06F8ED38FF6191E,
	U3CU3Ec__DisplayClass3_0__ctor_m6B0AC5DDB17C25A1A2C8F55A84AC2C5986EF8240,
	U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__0_mD1F5CC03348BACDD68A45FC8BC8D379841EF09D6,
	U3CU3Ec__DisplayClass3_0_U3CDOBlendableColorU3Eb__1_mF6CA7D8E1F46B4CAC9DC17BE940693728B469EE2,
	DOTweenModuleUI_DOFade_mFE277A3BCF9F71AB0CDA604DD04A79A3D42C999D,
	DOTweenModuleUI_DOColor_mBF11D995117DE31B20263B95D9727156B6B9FA63,
	DOTweenModuleUI_DOFade_m3B026C515EBD5B21A4F0062F72003DEA9E6A1306,
	DOTweenModuleUI_DOColor_m0974A6D1FD2E3E54EBCDFE0B0A224DA1AD0416EF,
	DOTweenModuleUI_DOFade_m06FA7654709E511E24159284799E4B4591CC2AEC,
	DOTweenModuleUI_DOFillAmount_mAEA68F8EE08774419FB063640EFFECEF11366B58,
	DOTweenModuleUI_DOGradientColor_mC3E941D52CB847F845E89BF26A9C40CC30EF2170,
	DOTweenModuleUI_DOFlexibleSize_m89576D7EC829D5CCE2A0241A7AA395DEC22A9737,
	DOTweenModuleUI_DOMinSize_mB897842B0AB7D9B4C9B87A6ADCECAADE299EAEB4,
	DOTweenModuleUI_DOPreferredSize_m76F5934F7379C1008A7E0E2D9014323D0B337A61,
	DOTweenModuleUI_DOColor_mF11960376E53267FFB35E246F8DFAEB8A819425F,
	DOTweenModuleUI_DOFade_m5CE6CAB7E005B800B5A9264C9B7552CC127F79BC,
	DOTweenModuleUI_DOScale_m647FCA4716C631073FA14706E5BECA8E141A4775,
	DOTweenModuleUI_DOAnchorPos_m3572189AA21570B71014F4FEADC7BF6DA4ACE9B0,
	DOTweenModuleUI_DOAnchorPosX_m5EAB19C120C814E88467D196708BDE184F8E6E11,
	DOTweenModuleUI_DOAnchorPosY_mCA7E9CCD57B8EE2E0D9B2E558EB52C70A35E414C,
	DOTweenModuleUI_DOAnchorPos3D_m8243D399CF915E5E096A66B68B4F478D46ABE133,
	DOTweenModuleUI_DOAnchorPos3DX_m15F425BCBA549081580CC2BBE80298DCC28BECF4,
	DOTweenModuleUI_DOAnchorPos3DY_mC925E211101555F8C13DDEEA2A89621021184209,
	DOTweenModuleUI_DOAnchorPos3DZ_m7E098AC85DEF40DBE5DD91EA7A89752FE3AFFDD9,
	DOTweenModuleUI_DOAnchorMax_mA08A5684A8DB0A3241A1797DF07FF6548E8A9345,
	DOTweenModuleUI_DOAnchorMin_m38F6A472B8769C4D7D0612875FF6753CD0BE525F,
	DOTweenModuleUI_DOPivot_m73D2E260A7F021CF188D6C40AACD155BC883ABA2,
	DOTweenModuleUI_DOPivotX_mDC889BCB5C38C3B7C3E7A7149382B170255E3550,
	DOTweenModuleUI_DOPivotY_m1BFC9B848E41C826E5C5A041E5264503EBF53279,
	DOTweenModuleUI_DOSizeDelta_m3E0A81A8F45B067D5602581BE961046C26F6C1D4,
	DOTweenModuleUI_DOPunchAnchorPos_mD3EF99C387472456D0FFDC148ACF005E85A0E223,
	DOTweenModuleUI_DOShakeAnchorPos_mE2C7EFF1DCEF908B48225C65EEFD7D194686F27D,
	DOTweenModuleUI_DOShakeAnchorPos_m64F3900F8A1461753062FCB39129106CB7D36A28,
	DOTweenModuleUI_DOJumpAnchorPos_mA5A8077EF2E3579FBF1345DC6214D86C1E43009D,
	DOTweenModuleUI_DONormalizedPos_m149EE1C6B44B21B2D0AA6ABE1055D18B63EB9E66,
	DOTweenModuleUI_DOHorizontalNormalizedPos_m3C9AA048EE79C19E964094F4ABDDD827319D3087,
	DOTweenModuleUI_DOVerticalNormalizedPos_m822939CFEB320C591E3A9CAA0105248247E22DFA,
	DOTweenModuleUI_DOValue_m82BB6B08DFEA2977BF7F94D38CCA3E52A895ED06,
	DOTweenModuleUI_DOColor_m6F1C242B76B256C3E8F69CE9D5485847CA68C493,
	DOTweenModuleUI_DOCounter_m2D79E5C77335BFFA72DAF618C73C128335479727,
	DOTweenModuleUI_DOFade_m4272666B0926AB6368BA4D26248C2A7FA1ECFFA5,
	DOTweenModuleUI_DOText_m3D241E4FF8F71AA51D94627FCCAE367BE40CF1FF,
	DOTweenModuleUI_DOBlendableColor_m551AEF9625306B8A34C8EB4F1BC5A65617B28605,
	DOTweenModuleUI_DOBlendableColor_m18EEAB9C4949A6A5DBF77DEEEB77BBF257BE2234,
	DOTweenModuleUI_DOBlendableColor_m9293A839490599C3370EB7B444287D73A6B1CEA8,
	DOTweenModuleUI_DOShapeCircle_m4FD2BC993920CBAF4188AF1DC528FFFB411211E3,
	Utils_SwitchToRectTransform_mC821DA0F492D672342DCBB0AF3975CF285D14FFD,
	U3CU3Ec__DisplayClass0_0__ctor_m7CDF4DE59B75149775AFE16A0C4AB5482BC4C442,
	U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__0_m43479452AB6CABC809F8BB075F80A6B391A8AA4B,
	U3CU3Ec__DisplayClass0_0_U3CDOFadeU3Eb__1_mB9CCB118057D74D8F6C152B0FA27DE980521FD9A,
	U3CU3Ec__DisplayClass1_0__ctor_m6513901DE6123169BD8642D3EDF9341AD2C78AB9,
	U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__0_m7A0F2549C2C54325EC64A09C154142F9212E4119,
	U3CU3Ec__DisplayClass1_0_U3CDOColorU3Eb__1_mFE2DE0E537DD7B1255D9B75969C15549646E6C94,
	U3CU3Ec__DisplayClass2_0__ctor_mAC2FAC72E368A0770D2C88F39065B0CD1B860FDC,
	U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__0_m83DABFF83F53843B3210E3663AA658A393F72C21,
	U3CU3Ec__DisplayClass2_0_U3CDOFadeU3Eb__1_mEBA98F9D99539591FC60AFBE48FD7336309CFE1D,
	U3CU3Ec__DisplayClass3_0__ctor_m6F636F1E7727A97A11CD562DA6C62E44D0CE8D37,
	U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__0_m4568743D7735E8597149620347E7C6C1F8F8F573,
	U3CU3Ec__DisplayClass3_0_U3CDOColorU3Eb__1_m931C95B84B1BCD2FB3A2D8038972C9570DAB288D,
	U3CU3Ec__DisplayClass4_0__ctor_m9953E31874A19DF4ACB95C87FCE12660693A6AD5,
	U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__0_m45ED3C46917C2BF3FA1E62E5E5FA07933322FC8B,
	U3CU3Ec__DisplayClass4_0_U3CDOFadeU3Eb__1_m1FCDD6D867999371C3AA240FAC66D48DD045C3DC,
	U3CU3Ec__DisplayClass5_0__ctor_m8826744854B3DF452491AF2C9F78CF8CD21E5ADF,
	U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__0_mA61D89DB8E1FCE175F34BFC13C1173C788BC70FF,
	U3CU3Ec__DisplayClass5_0_U3CDOFillAmountU3Eb__1_mD611009CE94D3EBF2517D0EA25B6858E54C6FBAE,
	U3CU3Ec__DisplayClass7_0__ctor_mC3A13E5D8A90789E6C1F6A26DFC8C8ED6B5B42DF,
	U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__0_m3785D78D950D02D749F4640AA0C67FB2CA01DB48,
	U3CU3Ec__DisplayClass7_0_U3CDOFlexibleSizeU3Eb__1_m1E713C41B3EC5ED27907BEFDB2CDCB2D9649D3F0,
	U3CU3Ec__DisplayClass8_0__ctor_m12549EFF091117C02D5BD5BBAF860766EFFBD335,
	U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__0_mCB197686B19FEE2A3789796C320289EDEBCA59DD,
	U3CU3Ec__DisplayClass8_0_U3CDOMinSizeU3Eb__1_m8B8E20DB6700A9E435B4EC30F00578E23B81F319,
	U3CU3Ec__DisplayClass9_0__ctor_m638C89DD65FC918306CF707CF4B3EA9CFACAF02E,
	U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__0_m1AB892211B71DB2D4E8F21F9BA126944DF9D500C,
	U3CU3Ec__DisplayClass9_0_U3CDOPreferredSizeU3Eb__1_mBA091FF947DA978F76C73673E1472EB9BEABDCC8,
	U3CU3Ec__DisplayClass10_0__ctor_m985D8AA039C4BC8FC17F125005481B94749837C7,
	U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__0_mA4364DFDB200823F9D4FF95D114157C2A424D9DC,
	U3CU3Ec__DisplayClass10_0_U3CDOColorU3Eb__1_mD28650B7F8BE4B8C96C0AB9DF5BB4B53C443CE41,
	U3CU3Ec__DisplayClass11_0__ctor_m69309DF61BEF60177017EDBE3811AA7119806287,
	U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__0_mDCACD4D30AEE9D07134544798AB5B9C5D979BE93,
	U3CU3Ec__DisplayClass11_0_U3CDOFadeU3Eb__1_m73D2BA809B8464E6E216465A623D609E96823BD9,
	U3CU3Ec__DisplayClass12_0__ctor_m64C4DEEF82977228537228CAAAF48792AE080622,
	U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__0_m5C34A94B2CF727A19CE3D6D99933B680E7847F2A,
	U3CU3Ec__DisplayClass12_0_U3CDOScaleU3Eb__1_m79C4D6FE81FC8292C6B825B55A2F711DE92D835C,
	U3CU3Ec__DisplayClass13_0__ctor_mBD97A0B94BB8F658AA2895C371742B0E74198455,
	U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__0_m45698E882FAA3963ED0653B5927E9B5F99C8B4E4,
	U3CU3Ec__DisplayClass13_0_U3CDOAnchorPosU3Eb__1_m5DD4C4D9473EA1DD1B2021D9131B4F6D8124BD57,
	U3CU3Ec__DisplayClass14_0__ctor_mF03BAB1D5A00A73CAA680F13E3BE0B226712B8C3,
	U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__0_m77F354FDCA32A28B5E166D92E7AD31A13AAC60FA,
	U3CU3Ec__DisplayClass14_0_U3CDOAnchorPosXU3Eb__1_m017F7F1E8BC9250F6CF7A0B75ED09A7ED669BA34,
	U3CU3Ec__DisplayClass15_0__ctor_m48FC24F32D0415BE4512FB1D5C17CFF39D8149DC,
	U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__0_m3B38EF80DFF9D4EF696F2F08DCC156C16FE55E8D,
	U3CU3Ec__DisplayClass15_0_U3CDOAnchorPosYU3Eb__1_mEB016F250A040B81AEEF7C5D3A98D0B05E3B231F,
	U3CU3Ec__DisplayClass16_0__ctor_m6A7514F7CF8978AD8D2179728B06E74F14F4485E,
	U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__0_m2E02A40A5465C662FCB26908E7F13C7DD3A4BBC2,
	U3CU3Ec__DisplayClass16_0_U3CDOAnchorPos3DU3Eb__1_mEC7A7D9EDE2E44E5EAF9ACBA9A993FC950F4EEE2,
	U3CU3Ec__DisplayClass17_0__ctor_m54FF0D8E95B7DE95B74B8886D64EA0F803C66D9A,
	U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__0_mC5FAD099F119CE2ACDEAD414435B244F21CDB4E7,
	U3CU3Ec__DisplayClass17_0_U3CDOAnchorPos3DXU3Eb__1_mA7F32AA90629508030AAD74E0725D4B5DF28B76D,
	U3CU3Ec__DisplayClass18_0__ctor_mE054C2ABDC10BD5D710C5AF29506CA2841AA72E2,
	U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__0_m30DD1FDFC6B5104DB734F01FB77F60BAB3C67578,
	U3CU3Ec__DisplayClass18_0_U3CDOAnchorPos3DYU3Eb__1_m46549819EBCBEB1EE8404F9888866CD75997825D,
	U3CU3Ec__DisplayClass19_0__ctor_m74B141AA06FF97B9170A5CD56D2E4422B6511AE3,
	U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__0_m81FCF7B95ACC17C67BE6C8D68B570D959D88EADC,
	U3CU3Ec__DisplayClass19_0_U3CDOAnchorPos3DZU3Eb__1_m27CE65B98533504D302D8580C61D7D3F09A48D27,
	U3CU3Ec__DisplayClass20_0__ctor_mA78DA0FD1C871D24DEB547744F4DE38ABEACD0B4,
	U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__0_mD50D23ECA6FBD3AE03536697B9ED7332E4FDD2CD,
	U3CU3Ec__DisplayClass20_0_U3CDOAnchorMaxU3Eb__1_mFEA7E952BB247F3CC01585B3C896AE53BB7B6540,
	U3CU3Ec__DisplayClass21_0__ctor_mCAB7F9CC3BBBA542AF258E0D021EC7AEFE5C2AF1,
	U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__0_m33BBB55D66991F54EE55E79B0AE622F40FFCD764,
	U3CU3Ec__DisplayClass21_0_U3CDOAnchorMinU3Eb__1_m9D2C994ECFF4FB4237C178E213B731C1BD197F0A,
	U3CU3Ec__DisplayClass22_0__ctor_mE10D2BDE628966FE49512531B20C51F6C2787089,
	U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__0_m5FE19E82DBA2702E7A7ADF66BB937773CACBEC6D,
	U3CU3Ec__DisplayClass22_0_U3CDOPivotU3Eb__1_mE3E48A091761963476D9CB2F1004A83281EE2643,
	U3CU3Ec__DisplayClass23_0__ctor_m983854683F9F5CE4B7F0BD9033AB45DDA296F9E7,
	U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__0_mEBA64E950B901D99C27662F211C5357066A46C1B,
	U3CU3Ec__DisplayClass23_0_U3CDOPivotXU3Eb__1_m2BECC738B1793D1B2B8F075191056F44AE61DD6D,
	U3CU3Ec__DisplayClass24_0__ctor_m41C1CA93D499089E6C5CD68BEB55BD64ADBFE43F,
	U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__0_mB9A0E99B23333028B4BA97E332DA19268ADFEBBB,
	U3CU3Ec__DisplayClass24_0_U3CDOPivotYU3Eb__1_mC0B65C0BEC4968B86083A8E493E782A486638E3F,
	U3CU3Ec__DisplayClass25_0__ctor_mDF25A8BF6CB8B1A343590B334D354F5EAC765572,
	U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__0_m9465A762A443D9DAA50004FF4EC3E7A5710D24F3,
	U3CU3Ec__DisplayClass25_0_U3CDOSizeDeltaU3Eb__1_mE4D6E5ADF19E5741ADB793A0E043CAE94C18772B,
	U3CU3Ec__DisplayClass26_0__ctor_m7F4C69BB9BF2084453CFD95533563FC7C6AF5941,
	U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__0_m8A97B30EF54DCC1B5253F2CE036DA7BEF521F9E2,
	U3CU3Ec__DisplayClass26_0_U3CDOPunchAnchorPosU3Eb__1_mA354D1798B36E08566BC12DEDD0A878C47D19C46,
	U3CU3Ec__DisplayClass27_0__ctor_m8180394F95E4CEDEA6E4B91A408E7CBC7F36A8D5,
	U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__0_m28D2453CAB4630D898B61CF1679C5C4955EC5761,
	U3CU3Ec__DisplayClass27_0_U3CDOShakeAnchorPosU3Eb__1_m08D936A746E8737C9E37B326E975EDCB90427B5F,
	U3CU3Ec__DisplayClass28_0__ctor_m4179B6F77D9F8B2D07F78D25FC745F542063F335,
	U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__0_mE987488CB26087991EB5B2AF5E1BB03633A9C5E9,
	U3CU3Ec__DisplayClass28_0_U3CDOShakeAnchorPosU3Eb__1_m223F195EA08AAF2F03AE46C9DE4761B0BC7FB7EC,
	U3CU3Ec__DisplayClass29_0__ctor_mCA183B392317E1ABAF1B8CA84C02784D75678A78,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__0_m82918F5D73CE67BC9AD9979A3F81C717AA95A5EF,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__1_mACBA5402D427457E33770E20ABBF153EE8EA73B2,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__2_m6BAF800D607189779E65F18B54EA2A29AC45D84B,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__3_mA6D64EC026FB4AA6873394DBB91E728E6F6EFF3D,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__4_mD71EC1A09CD5404D79A2FA0B068A00F3D2E7D12F,
	U3CU3Ec__DisplayClass29_0_U3CDOJumpAnchorPosU3Eb__5_m31B52507CE1503653EED1573137622C1202BA9D9,
	U3CU3Ec__DisplayClass30_0__ctor_m5F4F51BC32159EE37265F7032DE223AC3AB6A1C0,
	U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__0_m80C5E010B8B0C14A9F1358140D6DB2AE6C5374A9,
	U3CU3Ec__DisplayClass30_0_U3CDONormalizedPosU3Eb__1_m8185551DA74F9CE20DAD3392E7DDE2490EB1D301,
	U3CU3Ec__DisplayClass31_0__ctor_m417F41C2607E2F3A10C14B9556514FC2BBA1B035,
	U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__0_m77E495AE88490935170B5479753B0D251A5D3CA4,
	U3CU3Ec__DisplayClass31_0_U3CDOHorizontalNormalizedPosU3Eb__1_mF7393D7DDB277D5BFB5CE86BEB93E25B0558B7BD,
	U3CU3Ec__DisplayClass32_0__ctor_mA218955A26898E155307DDE47E12B7E53255AB3E,
	U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__0_m38805643288D85CEE1588577A69586E047726867,
	U3CU3Ec__DisplayClass32_0_U3CDOVerticalNormalizedPosU3Eb__1_mD395D9118A7944AE3F2ACF8AADCF71B0611F80BB,
	U3CU3Ec__DisplayClass33_0__ctor_mFDBB24E2EB71DAB7C3811F51BCF45EE7733321D3,
	U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__0_m8E6B52F72A726C09781FAAE48C1097CE6C2D8188,
	U3CU3Ec__DisplayClass33_0_U3CDOValueU3Eb__1_m02996BC134ED2E96E505224009462007F093F825,
	U3CU3Ec__DisplayClass34_0__ctor_m6903649B5BDBAA53F5C179B09D1C77AABC913561,
	U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__0_mBA716E6626BB3051125B19AC02EC825AA305B9A6,
	U3CU3Ec__DisplayClass34_0_U3CDOColorU3Eb__1_m534299537BAA83C8B80BDB7C0622F05B8501D4C6,
	U3CU3Ec__DisplayClass35_0__ctor_m6F52791A710AA19C73082E0EED5D298E31EDF1EF,
	U3CU3Ec__DisplayClass35_0_U3CDOCounterU3Eb__0_mD4515C9E2BA21A91E51DCA562DB8BD859BB73D4B,
	U3CU3Ec__DisplayClass35_0_U3CDOCounterU3Eb__1_m91616BD436B4FAB5C826763E445C8A59C11AF221,
	U3CU3Ec__DisplayClass36_0__ctor_m7C683C9CF75033301DA090C8B583860556AF7F29,
	U3CU3Ec__DisplayClass36_0_U3CDOFadeU3Eb__0_m72BB7D6C818418B6497D3356DA77BA4A5B325E47,
	U3CU3Ec__DisplayClass36_0_U3CDOFadeU3Eb__1_m4083DFAFABE118FAC072D3EE81663ACA96DD8F10,
	U3CU3Ec__DisplayClass37_0__ctor_m30C619C273CA88E1630ADE30076D3BAB756E8037,
	U3CU3Ec__DisplayClass37_0_U3CDOTextU3Eb__0_m02FF7D2EC040673A6A8DAF254FA06CCB5E19150D,
	U3CU3Ec__DisplayClass37_0_U3CDOTextU3Eb__1_m2838FBD1C16B38207C0B4528D6E805E6308E1E6B,
	U3CU3Ec__DisplayClass38_0__ctor_m82948A429B319CC7B45105656F6DD0ADBB2136CC,
	U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__0_mE68FE0C254E1D0E7E8D659FF3E4A3AA5F7738351,
	U3CU3Ec__DisplayClass38_0_U3CDOBlendableColorU3Eb__1_mA5048FA5B74BD7E9906C80159B99ACB2AFED6634,
	U3CU3Ec__DisplayClass39_0__ctor_mBAA4D644FB605A60D0C3BEB67229723BB3874E6D,
	U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__0_m897EF1C1C8D7A638D7271A6E3BD8640F834CA567,
	U3CU3Ec__DisplayClass39_0_U3CDOBlendableColorU3Eb__1_m059D299137E18F4172FB89D42BBC0DBE0408311C,
	U3CU3Ec__DisplayClass40_0__ctor_m6C547429D9E437CED8C4BDCB96EE8BE2D7182763,
	U3CU3Ec__DisplayClass40_0_U3CDOBlendableColorU3Eb__0_m031A8418D686ADB8B4AD6572C18FCBAD1E42B0F6,
	U3CU3Ec__DisplayClass40_0_U3CDOBlendableColorU3Eb__1_m74D298854E55DD21E0191F65A0A67376028748EC,
	U3CU3Ec__DisplayClass41_0__ctor_mE07F5C0560792F3960473CBCEC46C945FB514D35,
	U3CU3Ec__DisplayClass41_0_U3CDOShapeCircleU3Eb__0_m3BF121FFD58F01B8268A055F42A85BF0546709BB,
	U3CU3Ec__DisplayClass41_0_U3CDOShapeCircleU3Eb__1_mA39DE4F3403BF27C206BFDFD704F57CBA06D74C2,
	DOTweenModuleUnityVersion_DOGradientColor_mC9BCA508E620532BB11075165E008C797105AECD,
	DOTweenModuleUnityVersion_DOGradientColor_m25715875D9EB58E01C6991342DEF7360BD3C9E36,
	DOTweenModuleUnityVersion_WaitForCompletion_m005C1E34A63698BBC0C22CA3585745EC425D02DD,
	DOTweenModuleUnityVersion_WaitForRewind_mCEC9E2756020CB9893D845638730B376EEEF6CEB,
	DOTweenModuleUnityVersion_WaitForKill_m15AD3736BC28347866EF5749772BB5962E8A3951,
	DOTweenModuleUnityVersion_WaitForElapsedLoops_mFA5C356498B3F55D0D19BF1279EF7E36A496C9E6,
	DOTweenModuleUnityVersion_WaitForPosition_m018D0EDE007F6892F157DB22FE44320851B43864,
	DOTweenModuleUnityVersion_WaitForStart_m5FCB59DAE81C8FA2CB8E74A05971254826582033,
	DOTweenModuleUnityVersion_DOOffset_m6473A690565F74A3C7D75BEA326FB6EFCCB42294,
	DOTweenModuleUnityVersion_DOTiling_m8279CB89BA1B1F2C324935400EA0D69F05C204BD,
	DOTweenModuleUnityVersion_AsyncWaitForCompletion_m8843DEF4B094FA24E18B6160D8119F9929EE3225,
	DOTweenModuleUnityVersion_AsyncWaitForRewind_m2647674C04CDDF28F3359B9360788612C9A2ED00,
	DOTweenModuleUnityVersion_AsyncWaitForKill_mD05A1C68A3EC8098AADF2305C5FEB4D07AE0B98B,
	DOTweenModuleUnityVersion_AsyncWaitForElapsedLoops_m0BCD2600D9C2CCEE34252B51BB628C745D582C09,
	DOTweenModuleUnityVersion_AsyncWaitForPosition_mEC595AAC702845A05AAE3871362A77FE28049AE6,
	DOTweenModuleUnityVersion_AsyncWaitForStart_mF38B4769968388EFD17117FCDC1E213E2839DA16,
	U3CU3Ec__DisplayClass8_0__ctor_mF5EC87634B90C628AE370887DCF280218F814B4C,
	U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m0247C66637BE1BC486E9B83E29D9A8C539F0C4C7,
	U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m3FB8CA36F894BB6D62D812DF2F13F0714F48945A,
	U3CU3Ec__DisplayClass9_0__ctor_m1E2466F9751381E5A3C76E5E2970972957741B9E,
	U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m049884D699FDEDD9B8CE44EC9104A8055F7E4DD8,
	U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m5C1495C9398445575DA1139EF2967F0C6535992D,
	U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA,
	U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB,
	U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340,
	U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3,
	U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885,
	U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B,
	U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2,
	U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB,
	U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121,
	U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111,
	U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12,
	U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41,
	WaitForCompletion_get_keepWaiting_mD2C729ECA6B6F6BE57B718492953D588237F743D,
	WaitForCompletion__ctor_mE85B7CC8B7FE6A2AE84DB8210249A61018118C4D,
	WaitForRewind_get_keepWaiting_mF46CA00D1A5FDF140C0C027C4109C7373245A16C,
	WaitForRewind__ctor_mD79A34DBDAC1B30FBEBD36A8D749EC81935520B2,
	WaitForKill_get_keepWaiting_m4C085E03853426F4D4F5C312334101AE9BA75E3F,
	WaitForKill__ctor_m75C2D3D54DBBBB35DE297B947C08C982CABF1BAF,
	WaitForElapsedLoops_get_keepWaiting_mC2A906DBE9A06B7697041B76EC7C6AF58F928D6C,
	WaitForElapsedLoops__ctor_mA0E7D5A115AB56AD618E24B320476B81B9CAEC7A,
	WaitForPosition_get_keepWaiting_mA71AB7B7C269AB062BB6AF9CDF42E0F54EA6549F,
	WaitForPosition__ctor_mB6CCFCE59F142931CF19AC3BA4FE5CAFF1CBA4AD,
	WaitForStart_get_keepWaiting_mA0B7858981A2CEDE516D5F2C5133629C6D537E0B,
	WaitForStart__ctor_m3AEC2F6E37815ED0D94C2FA5F3B784456C6E49D1,
	DOTweenModuleUtils_Init_m58159847563008940580C19EB265D37EADC3DE6C,
	DOTweenModuleUtils_Preserver_m211177AD8866241B32B9BC40F805FB73B4C81E47,
	Physics_SetOrientationOnPath_m4A7C7ABEF4300273D3E5B034D238BBCBAFD204E7,
	Physics_HasRigidbody2D_mD68929FB5C63713DEF37AF14A2DB75969E877C6A,
	Physics_HasRigidbody_mCFBBEA121C0BAEBF6661FEAA9FF77C031DD4B929,
	Physics_CreateDOTweenPathTween_mC8BAE19162259BD6D6DC345D07DF28C1963F15FE,
};
extern void AppearingScreensRequest__ctor_m39846CAF3B9C6DFA19617305890E441B864D677E_AdjustorThunk (void);
extern void AppearingScreensRequest_ReleaseAllLists_m48D45F6982EF721AEB7D59C7ED974070ACF38F0C_AdjustorThunk (void);
extern void ScreenData__ctor_mA7DF289A32544C811E9FB5F90DC6C427C7AFF96C_AdjustorThunk (void);
extern void ScreenId__ctor_mE6C808BE1240BC3A821BD80FF5FCBB796C3C6680_AdjustorThunk (void);
extern void ScreenId_ToString_m67C7FD82A41F23E6F7C827C67C98541885A95151_AdjustorThunk (void);
extern void ScreenId_CompareTo_mC7732AC3AFAC27EE7760DDA6D503EFE0620B3326_AdjustorThunk (void);
extern void ScreenId_Equals_m952B50F739671C912FE81407FA5080EE7B20BCE2_AdjustorThunk (void);
extern void ScreenId_GetHashCode_m27E9BDD56BB23753CEE5BA0D299738043024E51D_AdjustorThunk (void);
extern void ScreenId_CompareTo_m0AE5A4E830BDBCA4F166DE269BF925227A208A58_AdjustorThunk (void);
extern void U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA_AdjustorThunk (void);
extern void U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB_AdjustorThunk (void);
extern void U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340_AdjustorThunk (void);
extern void U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3_AdjustorThunk (void);
extern void U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885_AdjustorThunk (void);
extern void U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B_AdjustorThunk (void);
extern void U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2_AdjustorThunk (void);
extern void U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB_AdjustorThunk (void);
extern void U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121_AdjustorThunk (void);
extern void U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111_AdjustorThunk (void);
extern void U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12_AdjustorThunk (void);
extern void U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[21] = 
{
	{ 0x06000043, AppearingScreensRequest__ctor_m39846CAF3B9C6DFA19617305890E441B864D677E_AdjustorThunk },
	{ 0x06000044, AppearingScreensRequest_ReleaseAllLists_m48D45F6982EF721AEB7D59C7ED974070ACF38F0C_AdjustorThunk },
	{ 0x060000C3, ScreenData__ctor_mA7DF289A32544C811E9FB5F90DC6C427C7AFF96C_AdjustorThunk },
	{ 0x06000186, ScreenId__ctor_mE6C808BE1240BC3A821BD80FF5FCBB796C3C6680_AdjustorThunk },
	{ 0x06000187, ScreenId_ToString_m67C7FD82A41F23E6F7C827C67C98541885A95151_AdjustorThunk },
	{ 0x06000188, ScreenId_CompareTo_mC7732AC3AFAC27EE7760DDA6D503EFE0620B3326_AdjustorThunk },
	{ 0x06000189, ScreenId_Equals_m952B50F739671C912FE81407FA5080EE7B20BCE2_AdjustorThunk },
	{ 0x0600018A, ScreenId_GetHashCode_m27E9BDD56BB23753CEE5BA0D299738043024E51D_AdjustorThunk },
	{ 0x0600018F, ScreenId_CompareTo_m0AE5A4E830BDBCA4F166DE269BF925227A208A58_AdjustorThunk },
	{ 0x060002BC, U3CAsyncWaitForCompletionU3Ed__10_MoveNext_m7AE96D202005CC27A2EBEB47057FADA081D6DCDA_AdjustorThunk },
	{ 0x060002BD, U3CAsyncWaitForCompletionU3Ed__10_SetStateMachine_m6240E5A12BCFEF8EA8588C4C18B3BB48BBA71FBB_AdjustorThunk },
	{ 0x060002BE, U3CAsyncWaitForRewindU3Ed__11_MoveNext_m5E01823C6DBEFF1763AD6606972918D90935D340_AdjustorThunk },
	{ 0x060002BF, U3CAsyncWaitForRewindU3Ed__11_SetStateMachine_m3F25AF370573B0A32A25D5D01483AF62C16AD5C3_AdjustorThunk },
	{ 0x060002C0, U3CAsyncWaitForKillU3Ed__12_MoveNext_mC10BB60238B855C88268AEE7DA0D7E8CF59AC885_AdjustorThunk },
	{ 0x060002C1, U3CAsyncWaitForKillU3Ed__12_SetStateMachine_m7BC3B905F4C08F129E4E6DFD12DDA73E5756DD0B_AdjustorThunk },
	{ 0x060002C2, U3CAsyncWaitForElapsedLoopsU3Ed__13_MoveNext_mF44348C1C974B48E1B0F6FE03AD1F713A4A6F8A2_AdjustorThunk },
	{ 0x060002C3, U3CAsyncWaitForElapsedLoopsU3Ed__13_SetStateMachine_m4D5053D74FA671E83FA48E11A3EE5C6534F995AB_AdjustorThunk },
	{ 0x060002C4, U3CAsyncWaitForPositionU3Ed__14_MoveNext_mB726C581B4A8055414678A86C800C4A0525E5121_AdjustorThunk },
	{ 0x060002C5, U3CAsyncWaitForPositionU3Ed__14_SetStateMachine_m060A3B894F6700B46D57FD2443F396C7C9CC7111_AdjustorThunk },
	{ 0x060002C6, U3CAsyncWaitForStartU3Ed__15_MoveNext_mDBD2BBC1B727D4C915B0E2AB910330411086BC12_AdjustorThunk },
	{ 0x060002C7, U3CAsyncWaitForStartU3Ed__15_SetStateMachine_m3B0B96BE14F355F5A0AF74DD42C7774158140A41_AdjustorThunk },
};
static const int32_t s_InvokerIndices[729] = 
{
	6800,
	6828,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3669,
	4470,
	0,
	0,
	6333,
	4370,
	4470,
	0,
	2132,
	0,
	0,
	6828,
	4470,
	3669,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4470,
	0,
	0,
	6573,
	6828,
	4470,
	3648,
	3669,
	3669,
	4347,
	3669,
	3150,
	4470,
	4470,
	3150,
	2128,
	4402,
	4370,
	4370,
	4402,
	2822,
	4470,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	1224,
	3669,
	3669,
	2822,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	2822,
	4470,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	0,
	0,
	3588,
	4470,
	4470,
	4470,
	4470,
	4370,
	1224,
	3669,
	4470,
	4470,
	1224,
	1224,
	3150,
	961,
	3669,
	2820,
	2164,
	3701,
	6337,
	2820,
	2135,
	3669,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	4470,
	3669,
	3648,
	4470,
	4402,
	4470,
	4370,
	4470,
	4370,
	4470,
	3669,
	3648,
	4470,
	4402,
	4470,
	4370,
	4470,
	4370,
	1224,
	3183,
	1626,
	3150,
	2822,
	4470,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	4370,
	4470,
	4470,
	4470,
	0,
	0,
	3669,
	3701,
	4470,
	3669,
	3669,
	3669,
	3669,
	3669,
	3669,
	3669,
	3669,
	3669,
	3669,
	3669,
	3669,
	4470,
	3669,
	3669,
	3183,
	3702,
	2165,
	4370,
	3701,
	3669,
	4470,
	4470,
	3182,
	3182,
	4470,
	3182,
	4470,
	3182,
	4470,
	3182,
	4470,
	3182,
	6828,
	4470,
	3669,
	3702,
	862,
	4402,
	4402,
	4470,
	863,
	4470,
	4470,
	3669,
	3669,
	3669,
	4470,
	3702,
	3669,
	3669,
	4470,
	3702,
	3643,
	4470,
	3183,
	3669,
	4470,
	4370,
	3669,
	4470,
	4470,
	3150,
	6828,
	4470,
	1365,
	4470,
	3669,
	3669,
	4470,
	4470,
	3669,
	3669,
	3669,
	3669,
	3669,
	4470,
	4470,
	3150,
	4470,
	3150,
	3669,
	3669,
	2166,
	2823,
	2823,
	3702,
	3183,
	3669,
	4470,
	3669,
	4470,
	3669,
	0,
	5858,
	5858,
	6333,
	6333,
	5230,
	5629,
	6044,
	6044,
	6573,
	6573,
	0,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	0,
	0,
	0,
	5232,
	5632,
	3648,
	4470,
	4402,
	4370,
	4470,
	4370,
	6573,
	0,
	6584,
	6800,
	4470,
	6056,
	4470,
	6019,
	4470,
	6057,
	4470,
	4470,
	5274,
	2823,
	2820,
	2820,
	2820,
	6573,
	4470,
	6828,
	4470,
	3150,
	6639,
	6800,
	4470,
	4470,
	4470,
	4470,
	4470,
	6627,
	4470,
	6627,
	4470,
	6627,
	4470,
	4470,
	4406,
	3701,
	6583,
	5273,
	2820,
	4470,
	4406,
	3701,
	6583,
	4470,
	4406,
	3701,
	6583,
	4470,
	4370,
	3669,
	4407,
	3702,
	6043,
	4470,
	4406,
	3701,
	6583,
	4470,
	2164,
	4406,
	3701,
	6583,
	4470,
	6584,
	4470,
	4470,
	4402,
	3702,
	4470,
	3669,
	4470,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3648,
	4370,
	2683,
	3150,
	4347,
	6176,
	6176,
	6505,
	6638,
	2659,
	6828,
	3669,
	4402,
	4470,
	6828,
	4470,
	3150,
	3669,
	4470,
	4402,
	3612,
	4402,
	4470,
	3669,
	4402,
	4470,
	0,
	3702,
	4402,
	4470,
	3182,
	6584,
	6561,
	6573,
	3669,
	4470,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5261,
	5254,
	5254,
	5642,
	4715,
	4638,
	4638,
	5235,
	5235,
	4470,
	4457,
	4470,
	4457,
	4470,
	4457,
	4470,
	4410,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	5610,
	5642,
	5632,
	5610,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	5642,
	5610,
	5642,
	5610,
	5642,
	5642,
	5632,
	5261,
	5261,
	5261,
	5610,
	5642,
	5650,
	5261,
	5254,
	5254,
	5265,
	5254,
	5254,
	5254,
	5261,
	5261,
	5650,
	5642,
	5642,
	5261,
	4715,
	4643,
	4644,
	4715,
	5261,
	5254,
	5254,
	5254,
	5610,
	4698,
	5642,
	4708,
	5610,
	5610,
	5610,
	4716,
	6244,
	4470,
	4410,
	3704,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	4470,
	4410,
	3704,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	4470,
	4459,
	3747,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	4470,
	4457,
	3745,
	4470,
	4410,
	3704,
	4470,
	4410,
	3704,
	4470,
	4410,
	3704,
	4470,
	4298,
	3595,
	4470,
	4347,
	3648,
	4470,
	4298,
	3595,
	4470,
	4370,
	3669,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	4470,
	4298,
	3595,
	4470,
	4457,
	3745,
	5632,
	5232,
	6042,
	6042,
	6042,
	5621,
	5641,
	6042,
	5259,
	5259,
	6573,
	6573,
	6573,
	6037,
	6044,
	6573,
	4470,
	4457,
	3745,
	4470,
	4457,
	3745,
	4470,
	3669,
	4470,
	3669,
	4470,
	3669,
	4470,
	3669,
	4470,
	3669,
	4470,
	3669,
	4402,
	3669,
	4402,
	3669,
	4402,
	3669,
	4402,
	2128,
	4402,
	2136,
	4402,
	3669,
	6828,
	6828,
	5434,
	6622,
	6622,
	4711,
};
static const Il2CppTokenRangePair s_rgctxIndices[23] = 
{
	{ 0x02000003, { 0, 27 } },
	{ 0x02000004, { 27, 4 } },
	{ 0x0200000C, { 39, 3 } },
	{ 0x0200003E, { 51, 14 } },
	{ 0x02000074, { 80, 6 } },
	{ 0x02000075, { 86, 2 } },
	{ 0x02000076, { 88, 4 } },
	{ 0x02000077, { 92, 4 } },
	{ 0x02000079, { 96, 19 } },
	{ 0x0200007A, { 115, 2 } },
	{ 0x06000014, { 31, 1 } },
	{ 0x06000019, { 32, 3 } },
	{ 0x0600001B, { 35, 3 } },
	{ 0x0600001C, { 38, 1 } },
	{ 0x06000028, { 42, 3 } },
	{ 0x06000029, { 45, 1 } },
	{ 0x060000F7, { 46, 2 } },
	{ 0x06000102, { 48, 3 } },
	{ 0x0600012D, { 65, 1 } },
	{ 0x060001AA, { 66, 4 } },
	{ 0x060001AB, { 70, 4 } },
	{ 0x060001AC, { 74, 4 } },
	{ 0x060001AD, { 78, 2 } },
};
extern const uint32_t g_rgctx_List_1_t2EF31B37F9127E24EB1A2E74E2353EF19F91866F;
extern const uint32_t g_rgctx_List_1__ctor_mEBD34E8E78DCF5CA276C1039DD21C00589924388;
extern const uint32_t g_rgctx_MonoBehaviourPool_1_AddNewItemInPool_m7EDBC1EE4F3023529C37A08973CF36F8371FBB28;
extern const uint32_t g_rgctx_ReadOnlyCollection_1_tD335B3CDFE172B84FBE73CA013B7A304FE0E1490;
extern const uint32_t g_rgctx_ReadOnlyCollection_1__ctor_mAB8F9B75670D044F30EE5C910B636D49CBEA334A;
extern const uint32_t g_rgctx_MonoBehaviourPool_1_set_UsedItems_m135C7A4C26167E7C292FC1E04AA0404199F65A9D;
extern const uint32_t g_rgctx_List_1_get_Count_mECDFAF095FD19053849E22B26AC2EF161246C527;
extern const uint32_t g_rgctx_List_1_get_Item_m602F0FEF75423709F083DDEF92A0C3681C9B2EF5;
extern const uint32_t g_rgctx_List_1_RemoveAt_m523A0A9C989615C595AB283C2776F4343C77A8C8;
extern const uint32_t g_rgctx_List_1_Add_m7EB88E70D4E0008EE62213A9346EFC7470C92E32;
extern const uint32_t g_rgctx_T_t7831A4C3498C074448C37575B7C1027BD3A93306;
extern const uint32_t g_rgctx_List_1_AddRange_mC6F188967682E4FCBE45B6607E62FC4E7D1865D6;
extern const uint32_t g_rgctx_List_1_Clear_mEF467275EA85D1E29393850A68AFB66C8AD72153;
extern const uint32_t g_rgctx_MonoBehaviourPool_1_SortBySiblingIndexUnused_m2C0F02BB962FDE14DDA99F9E4B194D7599EE483F;
extern const uint32_t g_rgctx_U3CU3Ec_t719F2EAF3894E17A0D72615CF32AA6A0FEC7A94A;
extern const uint32_t g_rgctx_U3CU3Ec_U3CSortBySiblingIndexUnusedU3Eb__11_0_mC56B78D663CC5D49746EBC0336044D902DC26C4D;
extern const uint32_t g_rgctx_Comparison_1_tFA5D9945B53B5F513EE3040BE4738C71417771D1;
extern const uint32_t g_rgctx_Comparison_1__ctor_mA1A0AF6FAE9300F1D9C0E118C1E78892C820324E;
extern const uint32_t g_rgctx_List_1_Sort_mF6971C935556AEAA8C94026CF9826870DAD0306B;
extern const uint32_t g_rgctx_List_1_Remove_mE01FB862EC2D0D35BC2FCF5A944BE46A223B0415;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m840E6BA90B6DF77E3047ED2F46501862842CE1A2;
extern const uint32_t g_rgctx_Enumerator_get_Current_mEECC667224A31B563FB79E56CF36649A276554BC;
extern const uint32_t g_rgctx_MonoBehaviourPool_1_Release_m1475A19589972D8093C69D4826F8192B3CBB38F1;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m2BD12AE10EC8CA4CC2D232207EA0F9A364ACDAF3;
extern const uint32_t g_rgctx_Enumerator_t9190F72A7B15887010B8E654DF430EDDBA893EFB;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t9190F72A7B15887010B8E654DF430EDDBA893EFB_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Object_Instantiate_TisT_t7831A4C3498C074448C37575B7C1027BD3A93306_mAF3BD1D23198DF45DDF4ECAD25C439DB7546F628;
extern const uint32_t g_rgctx_U3CU3Ec_tC91DCE993E5777F73F0AE578D38E029DE6ABC2E5;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_mE51C0F57A213543EF21C7DC07BEE203674DFB8BE;
extern const uint32_t g_rgctx_U3CU3Ec_tC91DCE993E5777F73F0AE578D38E029DE6ABC2E5;
extern const uint32_t g_rgctx_T_t2128E704BC16EC34722C31A8F8588E16A172B2A1;
extern const uint32_t g_rgctx_TState_tD362C1BAAC314093054D3AC8F4B525C06435106A;
extern const uint32_t g_rgctx_TEvent_t5F188C7702CCDA9A7BB244AFA401C4C171FD37EA;
extern const uint32_t g_rgctx_SubscriptionHolder_1_t47929886DF7467D1A41EC98EADAC7E3E12875F4D;
extern const uint32_t g_rgctx_SubscriptionHolder_1__ctor_mAF37E86C4E52D020CDE2ACDDEEA328FFAA77560A;
extern const uint32_t g_rgctx_TEvent_t50CBB77AA8EC2054114D067F3166E9CB64FF43FF;
extern const uint32_t g_rgctx_EventBus_NotifyAllSubscribers_TisTEvent_t50CBB77AA8EC2054114D067F3166E9CB64FF43FF_mA35B239045C6003157CEC61E243CE522A4B4CEEA;
extern const uint32_t g_rgctx_EventFactory_Release_TisTEvent_t50CBB77AA8EC2054114D067F3166E9CB64FF43FF_m8F73CB5DDF70D3A021B495696611932C0777F0ED;
extern const uint32_t g_rgctx_TEventBase_t037CA7A0402B014CB4B1C6E3C5B7CAAF83BB6785;
extern const uint32_t g_rgctx_TEventBase_t8850C29D4AC45AC9F1661100BCB5F6497F9D8B29;
extern const uint32_t g_rgctx_Action_1_t4CECB6CCD2FE90A9E78B1B29A2509045631B9839;
extern const uint32_t g_rgctx_Action_1_Invoke_m59F807E355E843457FF2EB26E185264EAE6EBAF3;
extern const uint32_t g_rgctx_T_tC15472C933BC828A27E3FA7D2E1DAE3EDBDC5CED;
extern const uint32_t g_rgctx_T_tC15472C933BC828A27E3FA7D2E1DAE3EDBDC5CED;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisT_tC15472C933BC828A27E3FA7D2E1DAE3EDBDC5CED_m0D1230F59BE6D84167B9D1A95E99B63D589B80B1;
extern const uint32_t g_rgctx_T_t082442C3B0A135BA5A92AF820A06B52E1046EA70;
extern const uint32_t g_rgctx_T_tCFB3D65D8453451138AC2466163530348767FF56;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_tCFB3D65D8453451138AC2466163530348767FF56_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B;
extern const uint32_t g_rgctx_Component_GetComponent_TisT_t57934E4B7F746E9BF5A34EDC4FB9826BBC87974D_m3BA013A694A447505A3E15BBC450CCA75ABF0FEF;
extern const uint32_t g_rgctx_T_t57934E4B7F746E9BF5A34EDC4FB9826BBC87974D;
extern const uint32_t g_rgctx_GameObject_AddComponent_TisT_t57934E4B7F746E9BF5A34EDC4FB9826BBC87974D_m4E93789BBB0394DA0590C61C0D9993EC2A14FEC2;
extern const uint32_t g_rgctx_HashSet_1_tE6D22529625DFB3E128D9364BC06510BF0F0CEA9;
extern const uint32_t g_rgctx_HashSet_1__ctor_mD15BE66E3588B0ECCC2A818E49640EBAD7C2B5DC;
extern const uint32_t g_rgctx_Stack_1_t1BD2A0B216EB57BD7C46782F28B4F26D7A25F740;
extern const uint32_t g_rgctx_Stack_1__ctor_m01CF808A2EDB6D36C09EDF0799FB1E8B6452F4F5;
extern const uint32_t g_rgctx_Stack_1_get_Count_mB19CB4B11564D46BE8133980D9C9A740E20F28DA;
extern const uint32_t g_rgctx_Stack_1_Pop_mA970BC447BAF46C86E0896A131033C0FCA0D4693;
extern const uint32_t g_rgctx_Activator_CreateInstance_TisT_t9C7D9EE4B59055D4134BD7A20A4ED4FA0D2E4040_m582EC1CAFE885784B43C392FFA8C6BB539CF42E3;
extern const uint32_t g_rgctx_Action_1_t27778CFF4572149A59FD9EB23BBAC6585EE19B6E;
extern const uint32_t g_rgctx_Action_1_Invoke_mA2DD0743406F132354F62FB1A3D3EB0988913689;
extern const uint32_t g_rgctx_HashSet_1_Add_m07D89CF1200E1884A79A71F709BCDB614AD4A90A;
extern const uint32_t g_rgctx_T_t9C7D9EE4B59055D4134BD7A20A4ED4FA0D2E4040;
extern const uint32_t g_rgctx_HashSet_1_Contains_mB237AEADF8773812820924BAEB18FAE253308800;
extern const uint32_t g_rgctx_HashSet_1_Remove_m12AFAF5E6763F4D376E0024BE83B73E16D9A3EAF;
extern const uint32_t g_rgctx_Stack_1_Push_mC030E0D44C17E305CC4221C1443D583FBD7D2564;
extern const uint32_t g_rgctx_T_t1151C5FA32261AAFB44B27ED2D4D3D6B7945BA6B;
extern const uint32_t g_rgctx_DoObserver_1_t26D2F3EADEA5BFC8497FFE489BAA3BE4BEDFBBF1;
extern const uint32_t g_rgctx_DoObserver_1__ctor_mA6E6417C894DCFAA0D21E4E81233BDD59C989AE2;
extern const uint32_t g_rgctx_IObservable_1_t4B8437E06B80431C5C4CD50C76CC787D698CA68D;
extern const uint32_t g_rgctx_IObservable_1_Subscribe_mBC2D6EFF481DEB7CB19B947B8935AD8FEC2949A7;
extern const uint32_t g_rgctx_ActionObserver_1_tFB39B34EA0D4396DC0F4AEBA972908583E4372B4;
extern const uint32_t g_rgctx_ActionObserver_1__ctor_mB87CD918F465361163F6C6196019C7455F89207C;
extern const uint32_t g_rgctx_IObservable_1_t0355CD6F8023A2A8C5ABE297BB4298BBF08C1AF2;
extern const uint32_t g_rgctx_IObservable_1_Subscribe_m6772355B6FD6D5B4A7DD78BCCCF8BF57EFF0E4A9;
extern const uint32_t g_rgctx_ActionObserver_1_tA253022BBABD9F2B7951B83DD0A6318550A7062C;
extern const uint32_t g_rgctx_ActionObserver_1__ctor_mE58128389FB21A3C37EC09EEF33EDF9FABABC4CC;
extern const uint32_t g_rgctx_IObservable_1_tA37CB557591A1216D45AAF00FF6E54396E9B2AEB;
extern const uint32_t g_rgctx_IObservable_1_Subscribe_m1FEFCCD17CD66D3444DE8A9AA18852A331D91028;
extern const uint32_t g_rgctx_WhereOperator_1_t37C1E9F5DE681097DB14A8BA199E4279853F5479;
extern const uint32_t g_rgctx_WhereOperator_1__ctor_m0A6A1AA9C809E5ABD7031A6CCC1A5D85280A1009;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass4_0_t2662C0923D6C1AD78606340E8CE92CCA4AB4C1EB;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass4_0__ctor_mB85263569BE804384AD39DE3C93E1A299EF45AD7;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m0C9BE7E8933C72D14801CC096C4AFA113E575AB0;
extern const uint32_t g_rgctx_Action_2_tAE441201C36187752EF9B9EDB3C94A69350D0616;
extern const uint32_t g_rgctx_Action_2__ctor_mB2D21F70BFCD451DA4C3808EB498039E668899D0;
extern const uint32_t g_rgctx_Action_2_Invoke_m63172424AC0BD080AF31A0EA80397612363710D5;
extern const uint32_t g_rgctx_Action_1_t1A6050D5DBF359FBD4CF7E23F4AD24FBB8A9CDEB;
extern const uint32_t g_rgctx_Action_1_Invoke_mFC4AD0B697809288AC6F9CB51079943514EE7FDC;
extern const uint32_t g_rgctx_WhereObserver_1_tEE632942B5E1F6531D763327D604CBE2B451F6C9;
extern const uint32_t g_rgctx_WhereObserver_1__ctor_m7A225BD4FFC9B94A3BBD2EA8025432970FB9936C;
extern const uint32_t g_rgctx_IObservable_1_tF1EA24AC36FEA70FB7670BCE5542CB4D4C306166;
extern const uint32_t g_rgctx_IObservable_1_Subscribe_mC70807C67D8E26843201C38DFD1BDA85697C963A;
extern const uint32_t g_rgctx_Predicate_1_t837226032A0C639BAF6A2BAFE656767D5122FEAD;
extern const uint32_t g_rgctx_Predicate_1_Invoke_m3BBBF4940AD35285A24B45F0512CDE461C0EA3DB;
extern const uint32_t g_rgctx_IObserver_1_tDD7882172EB69A9D5081E4A89BDA7EFD516DB4B1;
extern const uint32_t g_rgctx_IObserver_1_OnNext_mF939581D31DF975DBDEE5815756E0C4F82B1FBD0;
extern const uint32_t g_rgctx_Subject_1_OnNext_m67FAD0AC8D03AC738944CB37B5BB34FAFCE9068C;
extern const uint32_t g_rgctx_List_1_tB572E67A9586D35E1E5D1E6EECF8FCD172C25C2F;
extern const uint32_t g_rgctx_List_1__ctor_mA3A30A3C598ED2CB03320AA8EA83DA27307FE074;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_t8D05ED0C5197FEF5B475506C7E4B77E74EA6EDC1;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0__ctor_mF6579DB10DBA9E4B32D3CDDDA3AC96E2C57C2B20;
extern const uint32_t g_rgctx_List_1_Add_m3204C2291DBDD4601AF0E3E525A1E8BF5B526035;
extern const uint32_t g_rgctx_IObserver_1_tCDDBF0778A72FCB62D8A41473CF1443434CCAC2F;
extern const uint32_t g_rgctx_IObserver_1_OnNext_m47FBE77566DB314579E921D24D8C50A04A03575A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_U3CSubscribeU3Eb__0_mCA859D61230B32A60A0058068795DB72A571BF99;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m5724B0563FEDC4BC557CEB40A28C34D2CA61885C;
extern const uint32_t g_rgctx_Enumerator_get_Current_mC8A9FA56627D4E78DB8B66C1093A09E5C8892BA7;
extern const uint32_t g_rgctx_IObserver_1_OnCompleted_m2B3F5D11D899F1D40C4ED51473FFFA38B0979500;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m55ABA570E6C3A2143347233409E918E7F751A928;
extern const uint32_t g_rgctx_Enumerator_t7BA7DC3BEED79B6ADF2D8F13902FDC90C441C761;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t7BA7DC3BEED79B6ADF2D8F13902FDC90C441C761_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_IObserver_1_OnError_m77A2C2F84D11D123DE0E84772F34CF99164EC83A;
extern const uint32_t g_rgctx_T_t01785B569F160FCFDD3ABC9BE2407DCCEEA28840;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t01785B569F160FCFDD3ABC9BE2407DCCEEA28840_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t01785B569F160FCFDD3ABC9BE2407DCCEEA28840_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F;
extern const uint32_t g_rgctx_List_1_t479506D0571B5D4D3A26DCE3E24650D154BEDCC1;
extern const uint32_t g_rgctx_List_1_Remove_mAFDF0F1FEB94CFD538E7744EBCF801BD79DB6506;
static const Il2CppRGCTXDefinition s_rgctxValues[117] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t2EF31B37F9127E24EB1A2E74E2353EF19F91866F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_mEBD34E8E78DCF5CA276C1039DD21C00589924388 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MonoBehaviourPool_1_AddNewItemInPool_m7EDBC1EE4F3023529C37A08973CF36F8371FBB28 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ReadOnlyCollection_1_tD335B3CDFE172B84FBE73CA013B7A304FE0E1490 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ReadOnlyCollection_1__ctor_mAB8F9B75670D044F30EE5C910B636D49CBEA334A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MonoBehaviourPool_1_set_UsedItems_m135C7A4C26167E7C292FC1E04AA0404199F65A9D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_mECDFAF095FD19053849E22B26AC2EF161246C527 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Item_m602F0FEF75423709F083DDEF92A0C3681C9B2EF5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_RemoveAt_m523A0A9C989615C595AB283C2776F4343C77A8C8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_m7EB88E70D4E0008EE62213A9346EFC7470C92E32 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7831A4C3498C074448C37575B7C1027BD3A93306 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_AddRange_mC6F188967682E4FCBE45B6607E62FC4E7D1865D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Clear_mEF467275EA85D1E29393850A68AFB66C8AD72153 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MonoBehaviourPool_1_SortBySiblingIndexUnused_m2C0F02BB962FDE14DDA99F9E4B194D7599EE483F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_t719F2EAF3894E17A0D72615CF32AA6A0FEC7A94A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec_U3CSortBySiblingIndexUnusedU3Eb__11_0_mC56B78D663CC5D49746EBC0336044D902DC26C4D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Comparison_1_tFA5D9945B53B5F513EE3040BE4738C71417771D1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Comparison_1__ctor_mA1A0AF6FAE9300F1D9C0E118C1E78892C820324E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Sort_mF6971C935556AEAA8C94026CF9826870DAD0306B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Remove_mE01FB862EC2D0D35BC2FCF5A944BE46A223B0415 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m840E6BA90B6DF77E3047ED2F46501862842CE1A2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mEECC667224A31B563FB79E56CF36649A276554BC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_MonoBehaviourPool_1_Release_m1475A19589972D8093C69D4826F8192B3CBB38F1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m2BD12AE10EC8CA4CC2D232207EA0F9A364ACDAF3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t9190F72A7B15887010B8E654DF430EDDBA893EFB },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t9190F72A7B15887010B8E654DF430EDDBA893EFB_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Object_Instantiate_TisT_t7831A4C3498C074448C37575B7C1027BD3A93306_mAF3BD1D23198DF45DDF4ECAD25C439DB7546F628 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tC91DCE993E5777F73F0AE578D38E029DE6ABC2E5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__ctor_mE51C0F57A213543EF21C7DC07BEE203674DFB8BE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec_tC91DCE993E5777F73F0AE578D38E029DE6ABC2E5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2128E704BC16EC34722C31A8F8588E16A172B2A1 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TState_tD362C1BAAC314093054D3AC8F4B525C06435106A },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TEvent_t5F188C7702CCDA9A7BB244AFA401C4C171FD37EA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_SubscriptionHolder_1_t47929886DF7467D1A41EC98EADAC7E3E12875F4D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_SubscriptionHolder_1__ctor_mAF37E86C4E52D020CDE2ACDDEEA328FFAA77560A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEvent_t50CBB77AA8EC2054114D067F3166E9CB64FF43FF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EventBus_NotifyAllSubscribers_TisTEvent_t50CBB77AA8EC2054114D067F3166E9CB64FF43FF_mA35B239045C6003157CEC61E243CE522A4B4CEEA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EventFactory_Release_TisTEvent_t50CBB77AA8EC2054114D067F3166E9CB64FF43FF_m8F73CB5DDF70D3A021B495696611932C0777F0ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEventBase_t037CA7A0402B014CB4B1C6E3C5B7CAAF83BB6785 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TEventBase_t8850C29D4AC45AC9F1661100BCB5F6497F9D8B29 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t4CECB6CCD2FE90A9E78B1B29A2509045631B9839 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_m59F807E355E843457FF2EB26E185264EAE6EBAF3 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tC15472C933BC828A27E3FA7D2E1DAE3EDBDC5CED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tC15472C933BC828A27E3FA7D2E1DAE3EDBDC5CED },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisT_tC15472C933BC828A27E3FA7D2E1DAE3EDBDC5CED_m0D1230F59BE6D84167B9D1A95E99B63D589B80B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t082442C3B0A135BA5A92AF820A06B52E1046EA70 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tCFB3D65D8453451138AC2466163530348767FF56 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_tCFB3D65D8453451138AC2466163530348767FF56_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Component_GetComponent_TisT_t57934E4B7F746E9BF5A34EDC4FB9826BBC87974D_m3BA013A694A447505A3E15BBC450CCA75ABF0FEF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t57934E4B7F746E9BF5A34EDC4FB9826BBC87974D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_GameObject_AddComponent_TisT_t57934E4B7F746E9BF5A34EDC4FB9826BBC87974D_m4E93789BBB0394DA0590C61C0D9993EC2A14FEC2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_HashSet_1_tE6D22529625DFB3E128D9364BC06510BF0F0CEA9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1__ctor_mD15BE66E3588B0ECCC2A818E49640EBAD7C2B5DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Stack_1_t1BD2A0B216EB57BD7C46782F28B4F26D7A25F740 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1__ctor_m01CF808A2EDB6D36C09EDF0799FB1E8B6452F4F5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_get_Count_mB19CB4B11564D46BE8133980D9C9A740E20F28DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_Pop_mA970BC447BAF46C86E0896A131033C0FCA0D4693 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Activator_CreateInstance_TisT_t9C7D9EE4B59055D4134BD7A20A4ED4FA0D2E4040_m582EC1CAFE885784B43C392FFA8C6BB539CF42E3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t27778CFF4572149A59FD9EB23BBAC6585EE19B6E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_mA2DD0743406F132354F62FB1A3D3EB0988913689 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Add_m07D89CF1200E1884A79A71F709BCDB614AD4A90A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t9C7D9EE4B59055D4134BD7A20A4ED4FA0D2E4040 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Contains_mB237AEADF8773812820924BAEB18FAE253308800 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_HashSet_1_Remove_m12AFAF5E6763F4D376E0024BE83B73E16D9A3EAF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Stack_1_Push_mC030E0D44C17E305CC4221C1443D583FBD7D2564 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1151C5FA32261AAFB44B27ED2D4D3D6B7945BA6B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_DoObserver_1_t26D2F3EADEA5BFC8497FFE489BAA3BE4BEDFBBF1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_DoObserver_1__ctor_mA6E6417C894DCFAA0D21E4E81233BDD59C989AE2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IObservable_1_t4B8437E06B80431C5C4CD50C76CC787D698CA68D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObservable_1_Subscribe_mBC2D6EFF481DEB7CB19B947B8935AD8FEC2949A7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ActionObserver_1_tFB39B34EA0D4396DC0F4AEBA972908583E4372B4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ActionObserver_1__ctor_mB87CD918F465361163F6C6196019C7455F89207C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IObservable_1_t0355CD6F8023A2A8C5ABE297BB4298BBF08C1AF2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObservable_1_Subscribe_m6772355B6FD6D5B4A7DD78BCCCF8BF57EFF0E4A9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ActionObserver_1_tA253022BBABD9F2B7951B83DD0A6318550A7062C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ActionObserver_1__ctor_mE58128389FB21A3C37EC09EEF33EDF9FABABC4CC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IObservable_1_tA37CB557591A1216D45AAF00FF6E54396E9B2AEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObservable_1_Subscribe_m1FEFCCD17CD66D3444DE8A9AA18852A331D91028 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereOperator_1_t37C1E9F5DE681097DB14A8BA199E4279853F5479 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereOperator_1__ctor_m0A6A1AA9C809E5ABD7031A6CCC1A5D85280A1009 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass4_0_t2662C0923D6C1AD78606340E8CE92CCA4AB4C1EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass4_0__ctor_mB85263569BE804384AD39DE3C93E1A299EF45AD7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__0_m0C9BE7E8933C72D14801CC096C4AFA113E575AB0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_2_tAE441201C36187752EF9B9EDB3C94A69350D0616 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2__ctor_mB2D21F70BFCD451DA4C3808EB498039E668899D0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_2_Invoke_m63172424AC0BD080AF31A0EA80397612363710D5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t1A6050D5DBF359FBD4CF7E23F4AD24FBB8A9CDEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_mFC4AD0B697809288AC6F9CB51079943514EE7FDC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereObserver_1_tEE632942B5E1F6531D763327D604CBE2B451F6C9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereObserver_1__ctor_m7A225BD4FFC9B94A3BBD2EA8025432970FB9936C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IObservable_1_tF1EA24AC36FEA70FB7670BCE5542CB4D4C306166 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObservable_1_Subscribe_mC70807C67D8E26843201C38DFD1BDA85697C963A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Predicate_1_t837226032A0C639BAF6A2BAFE656767D5122FEAD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Predicate_1_Invoke_m3BBBF4940AD35285A24B45F0512CDE461C0EA3DB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IObserver_1_tDD7882172EB69A9D5081E4A89BDA7EFD516DB4B1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObserver_1_OnNext_mF939581D31DF975DBDEE5815756E0C4F82B1FBD0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Subject_1_OnNext_m67FAD0AC8D03AC738944CB37B5BB34FAFCE9068C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tB572E67A9586D35E1E5D1E6EECF8FCD172C25C2F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_mA3A30A3C598ED2CB03320AA8EA83DA27307FE074 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_t8D05ED0C5197FEF5B475506C7E4B77E74EA6EDC1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0__ctor_mF6579DB10DBA9E4B32D3CDDDA3AC96E2C57C2B20 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_m3204C2291DBDD4601AF0E3E525A1E8BF5B526035 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IObserver_1_tCDDBF0778A72FCB62D8A41473CF1443434CCAC2F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObserver_1_OnNext_m47FBE77566DB314579E921D24D8C50A04A03575A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass6_0_U3CSubscribeU3Eb__0_mCA859D61230B32A60A0058068795DB72A571BF99 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m5724B0563FEDC4BC557CEB40A28C34D2CA61885C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mC8A9FA56627D4E78DB8B66C1093A09E5C8892BA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObserver_1_OnCompleted_m2B3F5D11D899F1D40C4ED51473FFFA38B0979500 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m55ABA570E6C3A2143347233409E918E7F751A928 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t7BA7DC3BEED79B6ADF2D8F13902FDC90C441C761 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t7BA7DC3BEED79B6ADF2D8F13902FDC90C441C761_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IObserver_1_OnError_m77A2C2F84D11D123DE0E84772F34CF99164EC83A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t01785B569F160FCFDD3ABC9BE2407DCCEEA28840 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t01785B569F160FCFDD3ABC9BE2407DCCEEA28840_Object_Equals_m07105C4585D3FE204F2A80D58523D001DC43F63B },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t01785B569F160FCFDD3ABC9BE2407DCCEEA28840_Object_ToString_mF8AC1EB9D85AB52EC8FD8B8BDD131E855E69673F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t479506D0571B5D4D3A26DCE3E24650D154BEDCC1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Remove_mAFDF0F1FEB94CFD538E7744EBCF801BD79DB6506 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharpU2Dfirstpass_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharpU2Dfirstpass_CodeGenModule = 
{
	"Assembly-CSharp-firstpass.dll",
	729,
	s_methodPointers,
	21,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	23,
	s_rgctxIndices,
	117,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
