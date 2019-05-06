/* svg not working */

[@react.component]
let make =
    (
      ~_type: Antd_IconName.t,
      ~className=?,
      ~title=?,
      ~onClick=?,
      ~spin=?,
      ~style=?,
    ) => {
  let spin =
    switch (spin) {
    | Some(spin) => spin
    | None => false
    };
  let classString =
    Cn.make([
      "anticon",
      className->Cn.unpack,
      "anticon-" ++ Antd_IconName.toString(_type),
      "anticon-spin"
      ->Cn.ifTrue(
          spin || Antd_IconName.compare(Antd_IconName.loading, _type),
        ),
    ]);
  <i className=classString ?onClick ?style ?title />;
};