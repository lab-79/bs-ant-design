[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/pagination";

[%bs.raw {|require("antd/lib/pagination/style")|}];

[@bs.obj]
external makeProps:
  (
    ~current: int=?,
    ~defaultCurrent: int=?,
    ~defaultPageSize: int=?,
    ~hideOnSinglePage: bool=?,
    ~itemRender: string=?,
    ~pageSize: int=?,
    ~pageSizeOptions: array(string)=?,
    ~showQuickJumper: bool=?,
    ~showSizeChanger: bool=?,
    ~showTotal: string => unit=?,
    ~simple: bool=?,
    ~size: string=?,
    ~total: int=?,
    ~onChange: string => unit=?,
    ~onShowSizeChange: string => unit=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~current=?,
      ~defaultCurrent=?,
      ~defaultPageSize=?,
      ~hideOnSinglePage=?,
      ~itemRender=?,
      ~pageSize=?,
      ~pageSizeOptions=?,
      ~showQuickJumper=?,
      ~showSizeChanger=?,
      ~showTotal=?,
      ~simple=?,
      ~size=?,
      ~total=?,
      ~onChange=?,
      ~onShowSizeChange=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~current?,
        ~defaultCurrent?,
        ~defaultPageSize?,
        ~hideOnSinglePage?,
        ~itemRender?,
        ~pageSize?,
        ~pageSizeOptions=?Js.Option.map((. b) => Array.of_list(b), pageSizeOptions),
        ~showQuickJumper?,
        ~showSizeChanger?,
        ~showTotal?,
        ~simple?,
        ~size?,
        ~total?,
        ~onChange?,
        ~onShowSizeChange?,
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );
