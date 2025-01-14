import React from "react";
import UserProfile from "./components/UserProfile";
import RecentActivities from "./components/RecentActivities";
import Notifications from "./components/Notifications";

const App = () => {
  return (
    <div className="min-h-screen bg-gray-100 flex flex-col items-center py-8">
      <header className="w-full bg-blue-600 text-white p-4 shadow-lg">
        <h1 className="text-center text-2xl font-bold">Dashboard</h1>
      </header>
      <div className="w-full max-w-6xl grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 gap-6 mt-6">
        <UserProfile />
        <RecentActivities />
        <Notifications />
      </div>
    </div>
  );
};

export default App;