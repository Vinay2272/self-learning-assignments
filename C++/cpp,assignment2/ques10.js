import React, {useState, useEffect} from "react";

function Clock({zone}) {
  const [time, setTime] = useState(new Date());

  useEffect(()=>{
    const timer = setInterval(()=>{
      setTime(new Date());
    },1000);

    return ()=>clearInterval(timer);
  },[]);

  return (
    <div>
      <h2>{zone}</h2>
      <h3>{time.toLocaleTimeString()}</h3>
    </div>
  );
}

export default Clock;