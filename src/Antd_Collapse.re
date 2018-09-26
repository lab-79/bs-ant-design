[@bs.module] external collapse: ReasonReact.reactClass = "antd/lib/collapse";

/*
 accordion	If true, Collapse renders as Accordion	boolean	false
 activeKey	Key of the active panel	string[]|string	No default value. In accordion mode, it's the key of the first panel.
 bordered	Toggles rendering of the border around the collapse block	boolean	true
 defaultActiveKey	Key of the initial active panel	string	-
 onChange	Callback function executed when active panel is changed	Function	-
 destroyInactivePanel	Destroy Inactive Panel
 */

[@bs.obj]
external makeProps:
  (
    ~accordion: bool=?,
    ~activeKey: array(string)=?,
    ~bordered: bool=?,
    ~defaultActiveKey: array(string)=?,
    ~onChange: string => unit=?,
    ~destroyInactivePanel: bool=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~accordion=?,
      ~activeKey=?,
      ~bordered=?,
      ~defaultActiveKey=?,
      ~onChange=?,
      ~destroyInactivePanel=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=collapse,
    ~props=
      makeProps(
        ~accordion?,
        ~activeKey?,
        ~bordered?,
        ~defaultActiveKey?,
        ~onChange?,
        ~destroyInactivePanel?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

/*
 disabled	If true, panel cannot be opened or closed	boolean	false
 forceRender	Forced render of content on panel, instead of lazy rending after clicking on header	boolean	false
 header	Title of the panel	string|ReactNode	-
 key	Unique key identifying the panel from among its siblings	string	-
 showArrow	If false, panel will not show arrow icon	boolean	true
  */

module Panel = {
  [@bs.module "antd/lib/collapse"] external panel: ReasonReact.reactClass = "Panel";
  [@bs.obj]
  external makeProps:
    (
      ~disabled: bool=?,
      ~forceRender: bool=?,
      ~header: string=?,
      ~key: string=?,
      ~showArrow: bool=?,
      ~id: string=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      unit
    ) =>
    _ =
    "";
  let make = (~disabled=?, ~forceRender=?, ~header=?, ~key_=?, ~showArrow=?, ~id=?, ~className=?, ~style=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=panel,
      ~props=makeProps(~disabled?, ~forceRender?, ~header?, ~key=?key_, ~showArrow?, ~id?, ~className?, ~style?, ()),
      children,
    );
};
